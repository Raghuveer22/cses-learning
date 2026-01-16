#include <iostream>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <array>
#include <list>
#include <deque>
#include <queue>
#include <stack>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <algorithm>
#include <functional>
#include <numeric>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cassert>
#include <climits>
#include <cfloat>
#include <cctype>
#include <cstdio>
#include <cstring>
#include <bitset>
#include <iterator>
#include <utility>
#include <typeinfo>
#include <exception>
#include <stdexcept>
#include <memory>
#include <random>
#include <chrono>
using namespace std;

// Problem link: https://cses.fi/problemset/task/1083
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// You are given all numbers between 1,2,...,n except one. Your task is to find the missing number.
// Input
// The first input line contains an integer n.
// The second line contains n-1 numbers. Each number is distinct and between 1 and n (inclusive).
// Output
// Print the missing number.
// Constraints
// 
// 2 <= n <= 2 \cdot 10^5
// 
// Example
// Input:
// 5
// 2 3 1 5
// 
// Output:
// 4

// time: nlog(n) space (n) 
void func1()
{
    int n;
    cin>>n;
    int arrlen=n-1;
    int arr[arrlen];
    for (int i=0;i<n-1;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+arrlen);
    for(int i=0;i<arrlen;i++)
    {
       if(arr[i]!=(i+1))
       {
         cout << (i+1);
         return ;
       }
    }
    cout<<n;
}

// time: n space: n 
void func2()
{
    int n; 
    cin>>n; 
    vector<int> arr(n, 0);
    for(int i=0;i<(n-1);i++)
    {
        int t;
        cin>>t;
        arr[(t-1)]=1;
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            cout<<(i+1);
            return;
        }
    }
}
// space : 1 time n
void func3()
{
    int n; 
    cin>>n;
    int xor_val=0;
    // 1 to n-1
    // 
    for(int i=0;i<(n-1);i++)
    {
        int t;
        cin>>t;
        xor_val=xor_val^t;
        xor_val=xor_val^(i+1);
    }
    xor_val=xor_val^(n);
    cout<<xor_val;
}
int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    // func1();
    //func2();
    func3();
	return 0;
}
