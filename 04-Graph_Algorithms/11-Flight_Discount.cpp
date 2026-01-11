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

// Problem link: https://cses.fi/problemset/task/1195
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// Your task is to find a minimum-price flight route from Syrjälä to Metsälä. You have one discount coupon, using which you can halve the price of any single flight during the route. However, you can only use the coupon once.
// When you use the discount coupon for a flight whose price is x, its price becomes \lfloor x/2 \rfloor (it is rounded down to an integer).
// Input
// The first input line has two integers n and m: the number of cities and flight connections. The cities are numbered 1,2,...,n. City 1 is Syrjälä, and city n is Metsälä.
// After this there are m lines describing the flights. Each line has three integers a, b, and c: a flight begins at city a, ends at city b, and its price is c. Each flight is unidirectional.
// You can assume that it is always possible to get from Syrjälä to Metsälä.
// Output
// Print one integer: the price of the cheapest route from Syrjälä to Metsälä.
// Constraints
// 
// 2 <= n <= 10^5
// 1 <= m <= 2 \cdot 10^5
// 1 <= a,b <= n
// 1 <= c <= 10^9
// 
// Example
// Input:
// 3 4
// 1 2 3
// 2 3 1
// 1 3 7
// 2 1 5
// 
// Output:
// 2

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
