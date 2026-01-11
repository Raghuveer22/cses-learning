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

// Problem link: https://cses.fi/problemset/task/3294
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// Your task is to construct an array x_1,x_2,...,x_n consisting of n integers.
// The array must satisfy m constraints of the form (l,r,s): the sum x_l + x_{l+1} + ...  + x_r must equal s.
// Input
// The first line has two integers n and m: the length of the array and the number of constraints.
// The next m lines each have three integers l, r and s: the description of the constraints.
// Output
// If a solution exists, print YES on the first line.
// On the second line, print n integers x_1, x_2,..., x_n: the contents of the array. All elements of the array must satisfy -10^{15} <= x_i <= 10^{15} and the array must satisfy all given constraints. You can print any valid solution.
// If no solution exists, just print NO.
// Constraints
// 
// 1 <= n <= 5000
// 0 <= m <= 2 \cdot 10^5
// 1 <= l <= r <= n
// -10^9 <= s <= 10^9
// 
// Example
// Input:
// 5 3
// 1 3 3
// 3 5 3
// 4 4 -1
// 
// Output:
// YES
// 0 2 1 -1 3

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
