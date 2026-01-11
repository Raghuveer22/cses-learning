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

// Problem link: https://cses.fi/problemset/task/3402
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// Given an array of n integers, consider pairings of k pairs. Each number can appear in at most one pair, and the cost of a pair (a,b) is |a-b|. The cost of a pairing is the sum of all costs of the pairs.
// Calculate the minimum costs of pairings for k=1,2,...,\lfloor n/2 \rfloor.
// Input
// The first line has an integer: the array size.
// The next line has n integers x_1,x_2,...,x_n: the array contents.
// Output
// Print \lfloor n/2 \rfloor integers: the minimum costs of pairings.
// Constraints
// 
// 2 <= n <= 2 \cdot 10^5
// 1 <= x_i <= 10^9
// 
// Example
// Input:
// 8
// 3 1 2 7 9 3 4 7
// 
// Output:
// 0 0 1 6
// 
// Explanation: Possible minimum-cost pairings are [(3,3)], [(3,3),(7,7)], [(1,2),(3,3),(7,7)] and [(1,2),(3,3),(4,7),(7,9)].

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
