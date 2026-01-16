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

// Problem link: https://cses.fi/problemset/task/1071
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// A number spiral is an infinite grid whose upper-left square has number 1. Here are the first five layers of the spiral:
// 
// Your task is to find out the number in row y and column x.
// Input
// The first input line contains an integer t: the number of tests.
// After this, there are t lines, each containing integers y and x.
// Output
// For each test, print the number in row y and column x.
// Constraints
// 
// 1 <= t <= 10^5
// 1 <= y,x <= 10^9
// 
// Example
// Input:
// 3
// 2 3
// 1 1
// 4 2
// 
// Output:
// 8
// 1
// 15


void func1()
{
  int t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    long long x;
    long long y;
    cin>>y>>x;
    long long m=max(x,y);

    if(m&1) //odd
    {
        if(x>y)
        {
            cout<<(m*m)*1LL-y+1<<endl;
        }
        else
        {
            cout<<((m-1)*(m-1))*1LL+x<<endl;
        }
    }
    else
    {
        if(y>x)
        {
            cout<<(m*m)*1LL-x+1<<endl;
        }
        else
        {
            cout<<((m-1)*(m-1))*1LL+y<<endl;
        }
    }
  }
}
int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    func1();
	// Your code goes here
	return 0;
}
