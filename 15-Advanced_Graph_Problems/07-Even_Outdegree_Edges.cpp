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

// Problem link: https://cses.fi/problemset/task/2179
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// Given an undirected graph, your task is to choose a direction for each edge so that in the resulting directed graph each node has an even outdegree. The outdegree of a node is the number of edges coming out of that node.
// Input
// The first input line has two integers n and m: the number of nodes and edges. The nodes are numbered 1,2,...,n.
// After this, there are m lines describing the edges. Each line has two integers a and b: there is an edge between nodes a and b.
// You may assume that the graph is simple, i.e., there is at most one edge between any two nodes and every edge connects two distinct nodes.
// Output
// Print m lines describing the directions of the edges. Each line has two integers a and b: there is an edge from node a to node b. You can print any valid solution.
// If there are no solutions, only print IMPOSSIBLE.
// Constraints
// 
// 1 <= n <= 10^5
// 1 <= m <= 2 \cdot 10^5
// 1 <= a,b <= n
// 
// Example
// Input:
// 4 4
// 1 2
// 2 3
// 3 4
// 1 4
// 
// Output:
// 1 2
// 3 2
// 3 4
// 1 4

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
