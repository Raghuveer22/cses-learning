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

// Problem link: https://cses.fi/problemset/task/3301
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// You are given an array of n integers. For each i = 1, 2,..., n, your task is to find the subarray ending at index i with the largest average. If there are multiple subarrays with the largest average, you should find the longest one.
// Input
// The first line has an integer n: the size of the array.
// The next line has n integers x_1, x_2,..., x_n: the contents of the array.
// Output
// Print n integers: the length of the subarray ending at index i with the largest average for each i = 1, 2,..., n.
// Constraints
// 
// 1 <= n <= 2 \cdot 10^5
// 1 <= x_i <= 10^6
// 
// Example
// Input:
// 7
// 1 6 4 6 2 5 5
// 
// Output:
// 1 1 2 1 4 1 2
// 
// Explanation: Consider i = 5. The averages of all subarrays ending at index 5 are \frac{1 + 6 + 4 + 6 + 2}{5} = 3.8, \frac{6 + 4 + 6 + 2}{4} = 4.5, \frac{4 + 6 + 2}{3} = 4, \frac{6 + 2}{2} = 4 and \frac{2}{1} = 2. The largest average is 4.5 and the length of the corresponding subarray is 4.

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
