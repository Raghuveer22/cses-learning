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

// Problem link: https://cses.fi/problemset/task/3427
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// There are n line segments whose endpoints have integer coordinates. The left x-coordinate of each segment is 0 and the right x-coordinate is m. The slope of each segment is an integer.
// For each x-coordinate 0,1,...,m, find the maximum point in any line segment.
// Input
// The first line has two integers n and m: the number of line segments and the maximum x-coordinate.
// The next n lines describe the line segments. Each line has two integers y_1 and y_2: there is a line segment between points (0,y_1) and (m,y_2).
// Output
// Print m+1 integers: the maximum points for x=0,1,...,m.
// Constraints
// 
// 1 <= n, m <= 10^5
// 0 <= y_1,y_2 <= 10^9
// 
// Example
// Input:
// 4 5
// 1 6
// 7 2
// 5 5
// 10 0
// 
// Output:
// 10 8 6 5 5 6

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
