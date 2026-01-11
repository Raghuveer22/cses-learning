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

// Problem link: https://cses.fi/problemset/task/3169
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// Given two integers n and k, your task is to count the number of arrays a_1, a_2,..., a_n of positive integers where \operatorname{lcm}(a_i, a_{i+1}) = k for all 1 <= i < n.
// Input
// The first line has an integer t: the number of test cases.
// The next t lines have two integers n and k: the length of the array and the value of lcm.
// Output
// Print t integers: the answer to each test case modulo 10^9 + 7.
// Constraints
// 
// 1 <= t <= 1000
// 2 <= n <= 10^9
// 1 <= k <= 10^9
// 
// Example
// Input:
// 3
// 3 4
// 4 6
// 1337 42
// 
// Output:
// 11
// 64
// 602746233
// 
// Explanation: The arrays for the first test case are [1, 4, 1], [1, 4, 2], [1, 4, 4], [2, 4, 1], [2, 4, 2], [2, 4, 4], [4, 1, 4], [4, 2, 4], [4, 4, 1], [4, 4, 2] and [4, 4, 4].

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
