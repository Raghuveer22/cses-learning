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

// Problem link: https://cses.fi/problemset/task/3401
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// You are given n sticks with lengths a_1,a_2,...,a_n.
// You must make exactly k cuts to the sticks, so that
// the number of sticks becomes n + k.
// After making the cuts, the difference between the length of the longest and shortest sticks should be as small as possible. Your task is to compute the smallest possible difference for all amounts k=1,2,...,m.
// The cuts must keep the lengths of the sticks positive integers. You may assume that the sticks can be cut m times.
// Input
// The first line contains two integers n,m: the number of sticks and the maximum number of cuts.
// The second line contains n integers a_1,a_2,...,a_n:
// the lengths of the sticks.
// Output
// Print one line with m integers: the smallest possible difference if exactly k=1,2,...,m cuts are made.
// Constraints
// 
// 1 <= n <= 10^5
// 1 <= m <= 2 \cdot 10^5
// 1 <= a_i <= 10^9
// 
// Example
// Input:
// 3 3
// 7 3 2
// 
// Output:
// 2 1 2
// 
// Explanation: When k=1, you can cut the first stick into two sticks of lengths 3 and 4. After this, the stick lengths are [3,4,3,2] and the maximum difference is 2.

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
