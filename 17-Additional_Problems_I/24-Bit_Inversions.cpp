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

// Problem link: https://cses.fi/problemset/task/1188
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// There is a bit string consisting of n bits. Then, there are some changes that invert one given bit. Your task is to report, after each change, the length of the longest substring whose each bit is the same.
// Input
// The first input line has a bit string consisting of n bits. The bits are numbered 1,2,...,n.
// The next line contains an integer m: the number of changes.
// The last line contains m integers x_1,x_2,...,x_m describing the changes.
// Output
// After each change, print the length of the longest substring whose each bit is the same.
// Constraints
// 
// 1 <= n <= 2 \cdot 10^5
// 1 <= m <= 2 \cdot 10^5
// 1 <= x_i <= n
// 
// Example
// Input:
// 001011
// 3
// 3 2 5
// 
// Output:
// 4 2 3
// 
// Explanation: The bit string first becomes 000011, then 010011, and finally 010001.

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
