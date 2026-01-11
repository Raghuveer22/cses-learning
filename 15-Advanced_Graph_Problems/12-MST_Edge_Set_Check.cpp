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

// Problem link: https://cses.fi/problemset/task/3408
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// Given an undirected weighted graph and edge sets, determine for each set if the edges can be included in a minimum spanning tree.
// Input
// The first line has three integers n,  m and q: the number of nodes, edges and edge sets. The nodes are numbered 1,2,...,n.
// The following m lines describe the edges. Each line has three integers a, b, w: there is an edge between nodes a and b with weight w. The edges are numbered 1,2,...,m in the input order.
// The following 2q lines describe the edge sets. For each set, the first line contains its size and the second line contains its edges. The total number of edges in all sets is at most m.
// You can assume that the graph is connected and simple and each edge appears at most once in the graph.
// Output
// For each edge set, print YES if the edges can be included in the minimum spanning tree and NO otherwise.
// Constraints
// 
// 1 <= n <= 10^5
// 1 <= m, q <= 2 \cdot 10^5
// 1 <= a,b <= n
// 1 <= w <= 10^9
// 
// Example
// Input:
// 5 6 4
// 1 2 4
// 1 3 2
// 2 4 2
// 3 4 1
// 3 5 3
// 4 5 3
// 3
// 2 3 4
// 1
// 1
// 2
// 2 6
// 2
// 5 6
// 
// Output:
// YES
// NO
// YES
// NO

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
