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

// Problem link: https://cses.fi/problemset/task/1736
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// Your task is to maintain an array of n values and efficiently process the following types of queries:
// 
// Increase the first value in range [a,b] by 1, the second value by 2, the third value by 3, and so on.
// Calculate the sum of values in range [a,b].
// 
// Input
// The first input line has two integers n and q: the size of the array and the number of queries.
// The next line has n values t_1,t_2,...,t_n: the initial contents of the array.
// Finally, there are q lines describing the queries. The format of each line is either "1 a b" or "2 a b".
// Output
// Print the answer to each sum query.
// Constraints
// 
// 1 <= n, q <= 2 \cdot 10^5
// 1 <= t_i <= 10^6
// 1 <= a <= b <= n
// 
// Example
// Input:
// 5 3
// 4 2 3 1 7
// 2 1 5
// 1 1 5
// 2 1 5
// 
// Output:
// 17
// 32

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
