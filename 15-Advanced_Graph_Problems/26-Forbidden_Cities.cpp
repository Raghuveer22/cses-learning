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

// Problem link: https://cses.fi/problemset/task/1705
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// There are n cities and m roads between them. Kaaleppi is currently in city a and wants to travel to city b.
// However, there is a problem: Kaaleppi has recently robbed a bank in city c and can't enter the city, because the local police would catch him. Your task is to find out if there is a route from city a to city b that does not visit city c.
// As an additional challenge, you have to process q queries where a, b and c vary.
// Input
// The first input line has three integers n, m and q: the number of cities, roads and queries. The cities are numbered 1,2,...,n.
// Then, there are m lines describing the roads. Each line has two integers a and b: there is a road between cities a and b. Each road is bidirectional.
// Finally, there are q lines describing the queries. Each line has three integers a, b and c: is there a route from city a to city b that does not visit city c?
// You can assume that there is a route between any two cities.
// Output
// For each query, print "YES", if there is such a route, and "NO" otherwise.
// Constraints
// 
// 1 <= n <= 10^5
// 1 <= m <= 2 \cdot 10^5
// 1 <= q <= 10^5
// 1 <= a,b,c <= n
// 
// Example
// Input:
// 5 6 3
// 1 2
// 1 3
// 2 3
// 2 4
// 3 4
// 4 5
// 1 4 2
// 3 5 4
// 3 5 2
// 
// Output:
// YES
// NO
// YES

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
