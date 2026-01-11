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

// Problem link: https://cses.fi/problemset/task/2206
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// There are n buildings on a street, numbered 1,2,...,n. Each building has a pizzeria and an apartment.
// The pizza price in building k is p_k. If you order a pizza from building a to building b, its price (with delivery) is p_a+|a-b|.
// Your task is to process two types of queries:
// 
// The pizza price p_k in building k becomes x.
// You are in building k and want to order a pizza. What is the minimum price?
// 
// Input
// The first input line has two integers n and q: the number of buildings and queries.
// The second line has n integers p_1,p_2,...,p_n: the initial pizza price in each building.
// Finally, there are q lines that describe the queries. Each line is either "1 k x" or "2 k".
// Output
// Print the answer for each query of type 2.
// Constraints
// 
// 1 <= n,q <= 2 \cdot 10^5
// 1 <= p_i, x <= 10^9
// 1 <= k <= n
// 
// Example
// Input:
// 6 3
// 8 6 4 5 7 5
// 2 2
// 1 5 1
// 2 2
// 
// Output:
// 5
// 4

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
