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

// Problem link: https://cses.fi/problemset/task/2184
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// You have n coins with positive integer values. The coins are numbered 1,2,...,n.
// Your task is to process q queries of the form: "if you can use coins a ... b, what is the smallest sum you cannot produce?"
// Input
// The first input line has two integers n and q: the number of coins and queries.
// The second line has n integers x_1,x_2,...,x_n: the value of each coin.
// Finally, there are q lines that describe the queries. Each line has two values a and b: you can use coins a ... b.
// Output
// Print the answer for each query.
// Constraints
// 
// 1 <= n, q <= 2 \cdot 10^5
// 1 <= x_i <= 10^9
// 1 <= a <= b <= n
// 
// Example
// Input:
// 5 3
// 2 9 1 2 7
// 2 4
// 4 4
// 1 5
// 
// Output:
// 4
// 1
// 6
// 
// Explanation: First you can use coins [9,1,2], then coins [2] and finally coins [2,9,1,2,7].

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
