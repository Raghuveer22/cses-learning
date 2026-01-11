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

// Problem link: https://cses.fi/problemset/task/3163
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// Given an array x of n integers, your task is to process q queries of the form: how many integers i satisfy a <= i <= b and c <= x_i <= d?
// Input
// The first line has two integers n and q: the number of values and queries.
// The second line has n integers x_1,x_2,...,x_n: the array values.
// Finally, there are q lines describing the queries. Each line has four integers a, b, c and d: how many integers i satisfy a <= i <= b and c <= x_i <= d?
// Output
// Print the result of each query.
// Constraints
// 
// 1 <= n,q <= 2 \cdot 10^5
// 1 <= x_i <= 10^9
// 1 <= a <= b <= n
// 1 <= c <= d <= 10^9
// 
// Example
// Input:
// 8 4
// 3 2 4 5 1 1 5 3
// 2 4 2 4
// 5 6 2 9
// 1 8 1 5
// 3 3 4 4
// 
// Output:
// 2
// 0
// 8
// 1

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
