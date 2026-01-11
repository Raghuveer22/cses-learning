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

// Problem link: https://cses.fi/problemset/task/3150
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// You are given an array x_1,x_2,...,x_n. Let d(a,b) denote the number of distinct values in the subarray x_a,x_{a+1},...,x_b.
// Your task is to calculate the sum \sum_{a=1}^n \sum_{b=a}^n d(a,b), i.e., the sum of d(a,b) for all subarrays.
// Input
// The first line has an integer n: the array size.
// The next line has n integers x_1,x_2,...,x_n: the array contents.
// Output
// Print one integer: the required sum.
// Constraints
// 
// 1 <= n <= 2 \cdot 10^5
// 1 <= x_i <= 10^9
// 
// Example
// Input:
// 5
// 1 2 3 1 1
// 
// Output:
// 29
// 
// Explanation: In this array, 6 subarrays have 1 distinct value, 4 subarrays have 2 distinct values and 5 subarrays have 3 distinct values. Thus, the sum is 6\cdot1+4\cdot2+5\cdot3=29.

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
