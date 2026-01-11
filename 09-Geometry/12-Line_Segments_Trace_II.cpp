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

// Problem link: https://cses.fi/problemset/task/3428
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// There are n line segments whose endpoints have integer coordinates. Each x-coordinate is between 0 and m. The slope of each segment is an integer.
// For each x-coordinate 0,1,...,m, find the maximum point in any line segment. If there is no segment at some point, the maximum is -1.
// Input
// The first line has two integers n and m: the number of line segments and the maximum x-coordinate.
// The next n lines describe the line segments. Each line has four integers x_1, y_1, x_2 and y_2: there is a line segment between points (x_1,y_1) and (x_2,y_2).
// Output
// Print m+1 integers: the maximum points for x=0,1,...,m.
// Constraints
// 
// 1 <= n, m <= 10^5
// 0 <= x_1 < x_2 <= m
// 0 <= y_1,y_2 <= 10^9
// 
// Example
// Input:
// 4 5
// 1 1 3 3
// 1 2 4 2
// 2 4 5 7
// 2 8 5 2
// 
// Output:
// -1 2 8 6 6 7

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
