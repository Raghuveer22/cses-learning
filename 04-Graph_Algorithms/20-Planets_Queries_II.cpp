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

// Problem link: https://cses.fi/problemset/task/1160
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// You are playing a game consisting of n planets. Each planet has a teleporter to another planet (or the planet itself).
// You have to process q queries of the form: You are now on planet a and want to reach planet b. What is the minimum number of teleportations?
// Input
// The first input line contains two integers n and q: the number of planets and queries. The planets are numbered 1,2,...,n.
// The second line contains n integers t_1,t_2,...,t_n: for each planet, the destination of the teleporter.
// Finally, there are q lines describing the queries. Each line has two integers a and b: you are now on planet a and want to reach planet b.
// Output
// For each query, print the minimum number of teleportations. If it is not possible to reach the destination, print -1.
// Constraints
// 
// 1 <= n, q <= 2 \cdot 10^5
// 1 <= a,b <= n
// 
// Example
// Input:
// 5 3
// 2 3 2 3 2
// 1 2
// 1 3
// 1 4
// 
// Output:
// 1
// 2
// -1

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
