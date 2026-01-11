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

// Problem link: https://cses.fi/problemset/task/1699
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// There are n cities with airports but no flight connections. You are given m requests which routes should be possible to travel.
// Your task is to determine the minimum number of one-way flight connections which makes it possible to fulfil all requests.
// Input
// The first input line has two integers n and m: the number of cities and requests. The cities are numbered 1,2,...,n.
// After this, there are m lines describing the requests. Each line has two integers a and b: there has to be a route from city a to city b. Each request is unique.
// Output
// Print one integer: the minimum number of flight connections.
// Constraints
// 
// 1 <= n <= 10^5
// 1 <= m <= 2 \cdot 10^5
// 1 <= a, b <= n
// 
// Example
// Input:
// 4 5
// 1 2
// 2 3
// 2 4
// 3 1
// 3 4
// 
// Output:
// 4
// 
// Explanation: You can create the connections 1 -> 2, 2 -> 3, 2 -> 4 and 3 -> 1. Then you can also fly from city 3 to city 4 using the route 3 -> 1 -> 2 -> 4.

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
