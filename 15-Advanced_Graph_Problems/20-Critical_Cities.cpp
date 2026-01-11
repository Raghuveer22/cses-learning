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

// Problem link: https://cses.fi/problemset/task/1703
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// There are n cities and m flight connections between them. A city is called a critical city if it appears on every route from a city to another city.
// Your task is to find all critical cities from Syrjälä to Lehmälä.
// Input
// The first input line has two integers n and m: the number of cities and flights. The cities are numbered 1,2,...,n. City 1 is Syrjälä, and city n is Lehmälä.
// Then, there are m lines describing the connections. Each line has two integers a and b: there is a flight from city a to city b. All flights are one-way.
// You may assume that there is a route from Syrjälä to Lehmälä.
// Output
// First print an integer k: the number of critical cities. After this, print k integers: the critical cities in increasing order.
// Constraints
// 
// 2 <= n <= 10^5
// 1 <= m <= 2 \cdot 10^5
// 1 <= a,b <= n
// 
// Example
// Input:
// 5 5
// 1 2
// 2 3
// 2 4
// 3 5
// 4 5
// 
// Output:
// 3
// 1 2 5

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
