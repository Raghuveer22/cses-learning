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

// Problem link: https://cses.fi/problemset/task/2190
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// There are two line segments: the first goes through the points (x_1,y_1) and (x_2,y_2), and the second goes through the points (x_3,y_3) and (x_4,y_4).
// Your task is to determine if the line segments intersect, i.e., they have at least one common point.
// Input
// The first input line has an integer t: the number of tests.
// After this, there are t lines that describe the tests. Each line has eight integers x_1, y_1, x_2, y_2, x_3, y_3, x_4 and y_4.
// Output
// For each test, print "YES" if the line segments intersect and "NO" otherwise.
// Constraints
// 
// 1 <= t <= 10^5
// -10^9 <= x_1, y_1, x_2, y_2, x_3, y_3, x_4, y_4 <= 10^9
// (x_1,y_1) != (x_2,y_2)
// (x_3,y_3) != (x_4,y_4)
// 
// Example
// Input:
// 5
// 1 1 5 3 1 2 4 3
// 1 1 5 3 1 1 4 3
// 1 1 5 3 2 3 4 1
// 1 1 5 3 2 4 4 1
// 1 1 5 3 3 2 7 4
// 
// Output:
// NO
// YES
// YES
// YES
// YES

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
