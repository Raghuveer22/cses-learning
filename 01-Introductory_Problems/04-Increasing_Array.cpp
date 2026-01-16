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

// Problem link: https://cses.fi/problemset/task/1094
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// You are given an array of n integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.
// On each move, you may increase the value of any element by one. What is the minimum number of moves required?
// Input
// The first input line contains an integer n: the size of the array.
// Then, the second line contains n integers x_1,x_2,...,x_n: the contents of the array.
// Output
// Print the minimum number of moves.
// Constraints
// 
// 1 <= n <= 2 \cdot 10^5
// 1 <= x_i <= 10^9
// 
// Example
// Input:
// 5
// 3 2 5 1 7
// 
// Output:
// 5

// space n time n
void func1()
{ 
   int n;
   cin>>n;
   long long arr[n];

   long long min_moves=0;
   long long cur_ele=arr[0];
   
   for(int i=1;i<n;i++)
   { 
      cin>>arr[i];
      if(arr[i]<cur_ele)
      {
        min_moves+=cur_ele-arr[i];
      }
      else{
        cur_ele=arr[i];
      }
   }
   cout<< min_moves;
}

// space 1 time n
void func2()
{
    int n;
    cin>>n;
    long long t;
    cin>>t;
    long long min_moves=0;
    long long cur_ele= t;
    for(int i=1;i<n;i++)
    {
        cin>>t;
        if(t<cur_ele)
        {
          min_moves+=cur_ele-t;
        }else
        {
          cur_ele=t;
        }
    }
   cout<<min_moves;
}
int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    func2();
	return 0;
}
