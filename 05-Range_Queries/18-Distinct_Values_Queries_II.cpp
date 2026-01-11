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

// Problem link: https://cses.fi/problemset/task/3356
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// Given an array of n integers, your task is to process q queries of the following types:
// 
// update the value at position k to u
// check if every value in range [a, b] is distinct
// 
// Input
// The first line has two integers n and q: the number of values and queries.
// The second line has n integers x_1, x_2,..., x_n: the array values.
// Finally, there are q lines describing the queries. Each line has three integers: either "1 k u" or "2 a b".
// Output
// For each query of type 2, print YES if every value in the range is distinct and NO otherwise.
// Constraints
// 
// 1 <= n, q <= 2 \cdot 10^5
// 1 <= x_i, u <= 10^9
// 1 <= k <= n
// 1 <= a <= b <= n
// 
// Example
// Input:
// 5 4
// 3 2 7 2 8
// 2 3 5
// 2 2 5
// 1 2 9
// 2 2 5
// 
// Output:
// YES
// NO
// YES

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
