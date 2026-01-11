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

// Problem link: https://cses.fi/problemset/task/2086
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// Given an array of n elements, your task is to divide into k subarrays. The cost of each subarray is the square of the sum of the values in the subarray. What is the minimum total cost if you act optimally?
// Input
// The first input line has two integers n and k: the array elements and the number of subarrays. The array elements are numbered 1,2,...,n.
// The second line has n integers x_1,x_2,...,x_n: the contents of the array.
// Output
// Print one integer: the minimum total cost.
// Constraints
// 
// 1 <= k <= n <= 3000
// 1 <= x_i <= 10^5
// 
// Example
// Input:
// 8 3
// 2 3 1 2 2 3 4 1
// 
// Output:
// 110
// 
// Explanation: An optimal solution is [2,3,1], [2,2,3], [4,1], whose cost is (2+3+1)^2+(2+2+3)^2+(4+1)^2=110.

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
