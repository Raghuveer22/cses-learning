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

// Problem link: https://cses.fi/problemset/task/2169
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// Given n ranges, your task is to count for each range how many other ranges it contains and how many other ranges contain it.
// Range [a,b] contains range [c,d] if a <= c and d <= b.
// Input
// The first input line has an integer n: the number of ranges.
// After this, there are n lines that describe the ranges. Each line has two integers x and y: the range is [x,y].
// You may assume that no range appears more than once in the input.
// Output
// First print a line that describes for each range (in the input order) how many other ranges it contains.
// Then print a line that describes for each range (in the input order) how many other ranges contain it.
// Constraints
// 
// 1 <= n <= 2 \cdot 10^5
// 1 <= x < y <= 10^9
// 
// Example
// Input:
// 4
// 1 6
// 2 4
// 4 8
// 3 6
// 
// Output:
// 2 0 0 0
// 0 1 0 1

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
