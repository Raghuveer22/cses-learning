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

// Problem link: https://cses.fi/problemset/task/1617
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// Your task is to calculate the number of bit strings of length n.
// For example, if n=3, the correct answer is 8, because the possible bit strings are 000, 001, 010, 011, 100, 101, 110, and 111.
// Input
// The only input line has an integer n.
// Output
// Print the result modulo 10^9+7.
// Constraints
// 
// 1 <= n <= 10^6
// 
// Example
// Input:
// 3
// 
// Output:
// 8



void func2()
{
    int n;
    cin>>n;
    long long res=1;
    long long MOD=1000000007;
    for(int i=0;i<n;i++)
    {
        res=(res*2)%MOD;
    }     
    cout<<res<<endl;
}

void func1()
{
    int n;
    cin>>n;
    long long res=1;
    long long MOD=1000000007;
    for(int i=0;i<n;i++)
    {
        res=res*2;
    }     

    cout<<res%MOD<<endl;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
   // func1();
    func2();
	// Your code goes here
	return 0;
}
