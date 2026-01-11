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

// Problem link: https://cses.fi/problemset/task/2078
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// You are given an undirected graph that has n nodes and m edges.
// We consider subgraphs that have all nodes of the original graph and some of its edges. A subgraph is called Eulerian if each node has even degree.
// Your task is to count the number of Eulerian subgraphs modulo 10^9+7.
// Input
// The first input line has two integers n and m: the number of nodes and edges. The nodes are numbered 1,2,...,n.
// After this, there are m lines that describe the edges. Each line has two integers a and b: there is an edge between nodes a and b. There is at most one edge between two nodes, and each edge connects two distinct nodes.
// Output
// Print the number of Eulerian subgraphs modulo 10^9+7.
// Constraints
// 
// 1 <= n <= 10^5
// 0 <= m <= 2 \cdot 10^5
// 1 <= a,b <= n
// 
// Example
// Input:
// 4 3
// 1 2
// 1 3
// 2 3
// 
// Output:
// 2
// 
// Explanation: You can either keep or remove all edges, so there are two possible Eulerian subgraphs.

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
