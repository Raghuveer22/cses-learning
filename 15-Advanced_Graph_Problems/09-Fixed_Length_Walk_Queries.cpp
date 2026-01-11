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

// Problem link: https://cses.fi/problemset/task/3357
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// You are given an undirected graph with n nodes and m edges. The graph is simple and connected.
// You start at a specific node, and on each turn
// you must move through an edge to another node.
// Your task is to answer q queries of the form: "is it possible to start at node a and end up on node b after exactly x turns?"
// Input
// The first line contains three integers n, m and q:
// the number of nodes, edges and queries. The nodes are numbered 1,2,...,n.
// After this, there are m lines which describe the edges. Each line contains two integers a and b: there is an edge between nodes a and b.
// Finally, there are q lines, each describing a query.
// Each line contains three integers a, b and x.
// Output
// For each query, print the answer (YES or NO) on its own line.
// Constraints
// 
// 2 <= n <= 2500
// 1 <= m <= 5000
// 1 <= q <= 10^5
// 0 <= x <= 10^9
// 
// Example
// Input:
// 4 5 6
// 1 2
// 2 3
// 1 3
// 2 4
// 3 4
// 1 2 2
// 1 4 1
// 1 4 5
// 2 2 1
// 2 2 2
// 3 4 8
// 
// Output:
// YES
// NO
// YES
// NO
// YES
// YES
// 
// Explanation:
// 
// In query 1, a possible route is 1 -> 3 -> 2.
// In query 3, a possible route is 1 -> 3 -> 2 -> 1 -> 3 -> 4.
// In query 6, a possible route is 3 -> 4 -> 2 -> 3 -> 4 -> 2 -> 1 -> 3 -> 4.

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
