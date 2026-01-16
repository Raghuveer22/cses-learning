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

// Problem link: https://cses.fi/problemset/task/1754
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// You have two coin piles containing a and b coins. On each move, you can either remove one coin from the left pile and two coins from the right pile, or two coins from the left pile and one coin from the right pile.
// Your task is to efficiently find out if you can empty both the piles.
// Input
// The first input line has an integer t: the number of tests.
// After this, there are t lines, each of which has two integers a and b: the numbers of coins in the piles.
// Output
// For each test, print "YES" if you can empty the piles and "NO" otherwise.
// Constraints
// 
// 1 <= t <= 10^5
// 0 <= a, b <= 10^9
// 
// Example
// Input:
// 3
// 2 1
// 2 2
// 3 3
// 
// Output:
// YES
// NO
// YES

void func1()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        long long a;
        long long b;
        cin>>a>>b;        
        // coin pile A 2*x+y
        // coin pile B 2*y+x
        // if y>x then min_ele=2*x+y max_ele=2*y+x.  
        if((a+b)%3==0 && 2*min(a,b)>=max(a,b)) // 4x+2y>=2y+x => 3x>=0
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
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
