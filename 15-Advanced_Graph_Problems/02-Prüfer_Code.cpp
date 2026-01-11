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

// Problem link: https://cses.fi/problemset/task/1134
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// A Prüfer code of a tree of n nodes is a sequence of n-2 integers that uniquely specifies the structure of the tree.
// The code is constructed as follows: As long as there are at least three nodes left, find a leaf with the smallest label, add the label of its only neighbor to the code, and remove the leaf from the tree.
// Given a Prüfer code of a tree, your task is to construct the original tree.
// Input
// The first input line contains an integer n: the number of nodes. The nodes are numbered 1,2,...,n.
// The second line contains n-2 integers: the Prüfer code.
// Output
// Print n-1 lines describing the edges of the tree. Each line has to contain two integers a and b: there is an edge between nodes a and b. You can print the edges in any order.
// Constraints
// 
// 3 <= n <= 2 \cdot 10^5
// 1 <= a,b <= n
// 
// Example
// Input:
// 5
// 2 2 4
// 
// Output:
// 1 2
// 2 3
// 2 4
// 4 5

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
