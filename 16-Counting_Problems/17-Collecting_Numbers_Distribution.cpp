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

// Problem link: https://cses.fi/problemset/task/3157
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// You are given an array that contains each number between 1 ... n exactly once. You collect the numbers in increasing order from 1 to n. On each round, you traverse the array from left to right and collect as many consecutive numbers as possible, starting from the smallest number that has not been collected yet.
// Your task is to determine, for each k=1,2,...,n, the number of arrays that require exactly k rounds to collect all the numbers.
// Input
// The only line has an integer n.
// Output
// Print n numbers: for each k=1,2,...,n, the answer modulo 10^9+7.
// Constraints
// 
// 1 <= n <= 5000
// 
// Example
// Input:
// 3
// 
// Output:
// 1
// 4
// 1
// 
// Explanation: The arrays are [1,2,3] (1 round), [1,3,2] (2 rounds), [2,1,3] (2 rounds), [2,3,1] (2 rounds), [3,1,2] (2 rounds), and [3,2,1] (3 rounds).

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
