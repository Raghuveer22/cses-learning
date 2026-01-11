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

// Problem link: https://cses.fi/problemset/task/3149
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// You are given a tree with n nodes. Some nodes contain a coin.
// Your task is to answer q queries of the form: what is the shortest length of a path from node a to node b that visits all nodes with coins?
// Input
// The first line contains two integers n and q: the number of nodes and queries. The nodes are numbered 1, 2, ..., n.
// The second line contains n integers c_1, c_2,..., c_n. If c_i = 1, node i has a coin. If c_i = 0, node i doesn't have a coin. You can assume at least one node has a coin.
// Then there are n-1 lines describing the edges. Each line contains two integers a and b: there is an edge between nodes a and b.
// Finally, there are q lines describing the queries. Each line contains two integers a and b: the start and end nodes.
// Output
// Print q integers: the answers to the queries.
// Constraints
// 
// 1 <= n, q <= 2 \cdot 10^5
// 1 <= a, b <= n
// 
// Example
// Input:
// 5 4
// 1 0 0 1 0
// 2 4
// 2 3
// 1 3
// 3 5
// 1 5
// 3 2
// 4 4
// 5 5
// 
// Output:
// 6
// 5
// 6
// 8

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
