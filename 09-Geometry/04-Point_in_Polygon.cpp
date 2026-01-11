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

// Problem link: https://cses.fi/problemset/task/2192
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// You are given a polygon of n vertices and a list of m points. Your task is to determine for each point if it is inside, outside or on the boundary of the polygon.
// The polygon consists of n vertices (x_1,y_1),(x_2,y_2),...,(x_n,y_n). The vertices (x_i,y_i) and (x_{i+1},y_{i+1}) are adjacent for i=1,2,...,n-1, and the vertices (x_1,y_1) and (x_n,y_n) are also adjacent.
// Input
// The first input line has two integers n and m: the number of vertices in the polygon and the number of points.
// After this, there are n lines that describe the polygon. The ith such line has two integers x_i and y_i.
// You may assume that the polygon is simple, i.e., it does not intersect itself.
// Finally, there are m lines that describe the points. Each line has two integers x and y.
// Output
// For each point, print "INSIDE", "OUTSIDE" or "BOUNDARY".
// Constraints
// 
// 3 <= n,m <= 1000
// 1 <= m <= 1000
// -10^9 <= x_i, y_i <= 10^9
// -10^9 <= x, y <= 10^9
// 
// Example
// Input:
// 4 3
// 1 1
// 4 2
// 3 5
// 1 4
// 2 3
// 3 1
// 1 3
// 
// Output:
// INSIDE
// OUTSIDE
// BOUNDARY

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
