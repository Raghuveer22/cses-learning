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

// Problem link: https://cses.fi/problemset/task/2416
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// You are given an array that consists of n integers. The array elements are indexed 1,2,...,n.
// You can modify the array using the following operation: choose an array element and increase its value by one.
// Your task is to process q queries of the form: when we consider a subarray from position a to position b, what is the minimum number of operations after which the subarray is increasing?
// An array is increasing if each element is greater than or equal with the previous element.
// Input
// The first input line has two integers n and q: the size of the array and the number of queries.
// The next line has n integers x_1,x_2,...,x_n: the contents of the array.
// Finally, there are q lines that describe the queries. Each line has two integers a and b: the starting and ending position of a subarray.
// Output
// For each query, print the minimum number of operations.
// Constraints
// 
// 1 <= n,q <= 2\cdot10^5
// 1 <= x_i <= 10^9
// 1 <= a <= b <= n
// 
// Example
// Input:
// 5 3
// 2 10 4 2 5
// 3 5
// 2 2
// 1 4
// 
// Output:
// 2
// 0
// 14

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
