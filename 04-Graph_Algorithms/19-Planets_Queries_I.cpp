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

// Problem link: https://cses.fi/problemset/task/1750
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// You are playing a game consisting of n planets. Each planet has a teleporter to another planet (or the planet itself).
// Your task is to process q queries of the form: when you begin on planet x and travel through k teleporters, which planet will you reach?
// Input
// The first input line has two integers n and q: the number of planets and queries. The planets are numbered 1,2,...,n.
// The second line has n integers t_1,t_2,...,t_n: for each planet, the destination of the teleporter. It is possible that t_i=i.
// Finally, there are q lines describing the queries. Each line has two integers x and k: you start on planet x and travel through k teleporters.
// Output
// Print the answer to each query.
// Constraints
// 
// 1 <= n, q <= 2 \cdot 10^5
// 1 <= t_i <= n
// 1 <= x <= n
// 0 <= k <= 10^9
// 
// Example
// Input:
// 4 3
// 2 1 1 4
// 1 2
// 3 4
// 4 1
// 
// Output:
// 1
// 2
// 4

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
