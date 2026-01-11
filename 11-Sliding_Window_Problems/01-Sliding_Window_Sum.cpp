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

// Problem link: https://cses.fi/problemset/task/3220
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// You are given an array of n integers. Your task is to calculate the sum of each window of k elements, from left to right.
// In this problem the input data is large and it is created using a generator.
// Input
// The first line contains two integers n and k: the number of elements and the size of the window.
// The next line contains four integers x, a, b and c: the input generator parameters. The input is generated as follows:
// 
// x_1=x
// x_i=(ax_{i-1}+b) \bmod c for i=2,3,...,n
// 
// Output
// Print the xor of all window sums.
// Constraints
// 
// 1 <= k <= n <= 10^7
// 0 <= x, a, b <= 10^9
// 1 <= c <= 10^9
// 
// Example
// Input:
// 8 5
// 3 7 1 11
// 
// Output:
// 12
// 
// Explanation: The input array is [3,0,1,8,2,4,7,6]. The windows are [3,0,1,8,2], [0,1,8,2,4], [1,8,2,4,7] and [8,2,4,7,6], and their sums are 14, 15, 22 and 27. Thus, the answer is 14 \oplus 15 \oplus 22 \oplus 27 = 12.

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
