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

// Problem link: https://cses.fi/problemset/task/3397
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// Let p(n,k) denote the kth permutation (in lexicographical order) of 1 ... n. For example, p(4,1)=[1,2,3,4] and p(4,2)=[1,2,4,3].
// Your task is to process two types of tests:
// 
// Given n and k, find p(n,k)
// Given n and p(n,k), find k
// 
// Input
// The first line has an integer t: the number of tests.
// Each test is either "1 n k" or "2 n p(n,k)".
// Output
// For each test, print the answer according to the example.
// Constraints
// 
// 1 <= t <= 1000
// 1 <= n <= 20
// 1 <= k <= n!
// 
// Example
// Input:
// 6
// 1 4 1
// 1 4 2
// 2 4 1 2 3 4
// 2 4 1 2 4 3
// 1 5 42
// 2 5 2 4 5 3 1
// 
// Output:
// 1 2 3 4
// 1 2 4 3
// 1
// 2
// 2 4 5 3 1
// 42

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
