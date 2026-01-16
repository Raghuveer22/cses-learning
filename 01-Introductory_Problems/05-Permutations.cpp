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

// Problem link: https://cses.fi/problemset/task/1070
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// A permutation of integers 1,2,...,n is called beautiful if there are no adjacent elements whose difference is 1.
// Given n, construct a beautiful permutation if such a permutation exists.
// Input
// The only input line contains an integer n.
// Output
// Print a beautiful permutation of integers 1,2,...,n. If there are several solutions, you may print any of them. If there are no solutions, print "NO SOLUTION".
// Constraints
// 
// 1 <= n <= 10^6
// 
// Example 1
// Input:
// 5
// 
// Output:
// 4 2 5 3 1
// Example 2
// Input:
// 3
// 
// Output:
// NO SOLUTION

void func1()
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<"1";
        return;   
    }
    else if(n<4)
    {
        cout<<"NO SOLUTION";
    }
    else
    {
        for(int i=2;i<=n;i+=2)
        {
            cout<<i<<" ";
        }
        for(int i=1;i<=n;i+=2)
        {
            cout<<i<<" ";
        }
    }
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
	func1();
	return 0;
}
