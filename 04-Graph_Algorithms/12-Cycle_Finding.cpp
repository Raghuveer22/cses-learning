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

// Problem link: https://cses.fi/problemset/task/1197
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// You are given a directed graph, and your task is to find out if it contains a negative cycle, and also give an example of such a cycle.
// Input
// The first input line has two integers n and m: the number of nodes and edges. The nodes are numbered 1,2,...,n.
// After this, the input has m lines describing the edges. Each line has three integers a, b, and c: there is an edge from node a to node b whose length is c.
// Output
// If the graph contains a negative cycle, print first "YES", and then the nodes in the cycle in their correct order. If there are several negative cycles, you can print any of them. If there are no negative cycles, print "NO".
// Constraints
// 
// 1 <= n <= 2500
// 1 <= m <= 5000
// 1 <= a,b <= n
// -10^9 <= c <= 10^9
// 
// Example
// Input:
// 4 5
// 1 2 1
// 2 4 1
// 3 1 1
// 4 1 -3
// 4 3 -2
// 
// Output:
// YES
// 1 2 4 1

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
