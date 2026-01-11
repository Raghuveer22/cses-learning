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

// Problem link: https://cses.fi/problemset/task/3398
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// There is a sorted array [1,2,...,n] and a permutation p_1,p_2,...,p_n. On each round, all elements move according to the permutation: the element at position i moves to position p_i.
// After how many rounds is the array sorted again for the first time?
// Input
// The first line has an integer n.
// The next line contains n integers p_1,p_2,...,p_n.
// Output
// Print the number of rounds modulo 10^9+7.
// Constraints
// 
// 1 <= n <= 2 \cdot 10^5
// 
// Example
// Input:
// 8
// 5 3 2 6 4 1 8 7
// 
// Output:
// 4
// 
// Explanation: The array changes as follows after the rounds:
// 
// Round 1: [6,3,2,5,1,4,8,7]
// Round 2: [4,2,3,1,6,5,7,8]
// Round 3: [5,3,2,6,4,1,8,7]
// Round 4: [1,2,3,4,5,6,7,8]

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
