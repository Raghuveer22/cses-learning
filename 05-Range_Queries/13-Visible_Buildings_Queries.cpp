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

// Problem link: https://cses.fi/problemset/task/3304
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// There are n buildings in a row numbered 1, 2,..., n from left to right. You are standing to the left of the first building. You can see a building if it is taller than all buildings to its left.
// Your task is to process q queries: If only buildings in range [a, b] existed, how many buildings would you see?
// Input
// The first line has two integers n and q: the number of buildings and queries.
// The second line has n integers h_1, h_2, ..., h_n: the heights of the buildings.
// Finally, there are q lines describing the queries. Each line has two integers a and b.
// Output
// For each query, print one integer: the number of visible buildings.
// Constraints
// 
// 1 <= n <= 10^5
// 1 <= q <= 2 \cdot 10^5
// 1 <= h_i <= 10^9
// 1 <= a <= b <= n
// 
// Example
// Input:
// 5 3
// 4 1 2 2 3
// 1 5
// 2 5
// 3 4
// 
// Output:
// 1
// 3
// 1

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
