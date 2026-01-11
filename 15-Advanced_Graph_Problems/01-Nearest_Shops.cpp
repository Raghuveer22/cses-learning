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

// Problem link: https://cses.fi/problemset/task/3303
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// There are n cities and m roads. Each road is bidirectional and connects two cities. It is also known that k cities have an anime shop.
// If you live in a city, you of course know the local anime shop well if there is one. You would like to find the nearest anime shop that is not in your city.
// For each city, determine the minimum distance to another city that has an anime shop.
// Input
// The first line has three integers n, m and k: the number of cities, roads and anime shops. The cities are numbered 1,2,...,n.
// The next line contains k integers: the cities that have an anime shop.
// Finally, there are m lines that describe the roads. Each line has two integers a and b: there is a road between cities a and b.
// Output
// Print n integers: for each city, the minimum distance to another city with an anime shop. If there is no such city, print -1 instead.
// Constraints
// 
// 1 <= k <= n <= 10^5
// 0 <= m <= 2 \cdot 10^5
// 
// Example
// Input:
// 9 6 4
// 2 4 5 7
// 1 2
// 1 3
// 1 8
// 2 4
// 3 4
// 5 6
// 
// Output:
// 1 1 1 1 -1 1 -1 2 -1

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
