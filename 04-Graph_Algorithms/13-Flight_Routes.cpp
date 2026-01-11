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

// Problem link: https://cses.fi/problemset/task/1196
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// Your task is to find the k shortest flight routes from Syrjälä to Metsälä. A route can visit the same city several times.
// Note that there can be several routes with the same price and each of them should be considered (see the example).
// Input
// The first input line has three integers n, m, and k: the number of cities, the number of flights, and the parameter k. The cities are numbered 1,2,...,n. City 1 is Syrjälä, and city n is Metsälä.
// After this, the input has m lines describing the flights. Each line has three integers a, b, and c: a flight begins at city a, ends at city b, and its price is c. All flights are one-way flights.
// You may assume that there are at least k distinct routes from Syrjälä to Metsälä.
// Output
// Print k integers: the prices of the k cheapest routes sorted according to their prices.
// Constraints
// 
// 2 <= n <= 10^5
// 1 <= m <= 2 \cdot 10^5
// 1 <= a,b <= n
// 1 <= c <= 10^9
// 1 <= k <= 10
// 
// Example
// Input:
// 4 6 3
// 1 2 1
// 1 3 3
// 2 3 2
// 2 4 6
// 3 2 8
// 3 4 1
// 
// Output:
// 4 4 7
// 
// Explanation: The cheapest routes are 1 -> 3 -> 4 (price 4), 1 -> 2 -> 3 -> 4 (price 4) and 1 -> 2 -> 4 (price 7).

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
