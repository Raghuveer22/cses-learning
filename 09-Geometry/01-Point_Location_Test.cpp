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

// Problem link: https://cses.fi/problemset/task/2189
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// There is a line that goes through the points p_1=(x_1,y_1) and p_2=(x_2,y_2). There is also a point p_3=(x_3,y_3).
// Your task is to determine whether p_3 is located on the left or right side of the line or if it touches the line when we are looking from p_1 to p_2.
// Input
// The first input line has an integer t: the number of tests.
// After this, there are t lines that describe the tests. Each line has six integers: x_1, y_1, x_2, y_2, x_3 and y_3.
// Output
// For each test, print "LEFT", "RIGHT" or "TOUCH".
// Constraints
// 
// 1 <= t <= 10^5
// -10^9 <= x_1, y_1, x_2, y_2, x_3, y_3 <= 10^9
// x_1 != x_2 or y_1 != y_2
// 
// Example
// Input:
// 3
// 1 1 5 3 2 3
// 1 1 5 3 4 1
// 1 1 5 3 3 2
// 
// Output:
// LEFT
// RIGHT
// TOUCH

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
