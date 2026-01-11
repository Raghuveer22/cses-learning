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

// Problem link: https://cses.fi/problemset/task/2418
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// Given an n x m grid and two squares a=(y_1,x_1) and b=(y_2,x_2), create a path from a to b that visits each square exactly once.
// For example, here is a path from a=(1,3) to b=(3,6) in a 4 x 7 grid:
// 
// Input
// The first input line has an integer t: the number of tests.
// After this, there are t lines that describe the tests. Each line has six integers n, m, y_1, x_1, y_2 and x_2.
// In all tests 1 <= y_1,y_2 <= n and 1 <= x_1,x_2 <= m. In addition, y_1 != y_2 or x_1 != x_2.
// Output
// Print YES, if it is possible to construct a path, and NO otherwise.
// If there is a path, also print its description which consists of characters U (up), D (down), L (left) and R (right). If there are several paths, you can print any of them.
// Constraints
// 
// 1 <= t <= 100
// 1 <= n <= 50
// 1 <= m <= 50
// 
// Example
// Input:
// 5
// 1 3 1 1 1 3
// 1 3 1 2 1 3
// 2 2 1 1 2 2
// 2 2 1 1 2 1
// 4 7 1 3 3 6
// 
// Output:
// YES
// RR
// NO
// NO
// YES
// RDL
// YES
// RRRRDDDLLLLLLUUURDDRURDRURD

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
