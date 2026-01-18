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

// Problem link: https://cses.fi/problemset/task/2205
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// A Gray code is a list of all 2^n bit strings of length n, where any two successive strings differ in exactly one bit (i.e., their Hamming distance is one).
// Your task is to create a Gray code for a given length n.
// Input
// The only input line has an integer n.
// Output
// Print 2^n lines that describe the Gray code. You can print any valid solution.
// Constraints
// 
// 1 <= n <= 16
// 
// Example
// Input:
// 2
// 
// Output:
// 00
// 01
// 11
// 10
// timecomplexity 2^n and space complexity  stack n
vector<string> recfunc1(int n)
{
    // f(n) sequence of length n in ascending order
    // f'(n) sequence of length n in descending order
    // f(n+1)= 0_f(n)+1_f'(n)
    if(n==1)
        return {"0","1"};

    vector<string>res=recfunc1(n-1);    
    vector<string>res2=res;
    reverse(res2.begin(),res2.end());

    for(auto &p:res)
    {
        p.insert(p.begin(),'0');
    }
    for(auto &p:res2)
    {
        p.insert(p.begin(),'1');
    }
    res.insert(res.end(),res2.begin(),res2.end());
    return res;
}
void func1()
{
    int n;
    cin>>n;
    vector<string>res=recfunc1(n);
    for(auto &p: res)
    {
        cout<<p<<endl;
    }
}

void func2()
{

    // The idea is to use the mathematical property that a binary number's Gray code can be obtained by XORing the number with itself shifted right by one position (i.e., n ^ (n>>1)).
    int n;
    cin>>n;
    for(int i=0;i<(1<<n);i++)
    {
        int grey= i^(i>>1);
        for(int j=n-1;j>=0;j--)
        {
            char ch= ((1<<j)&(grey)) ? '1':'0';
            cout<<ch;
        }
        cout<<endl;
    }
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    //func1();   
    func2();
	// Your code goes here
	return 0;
}
