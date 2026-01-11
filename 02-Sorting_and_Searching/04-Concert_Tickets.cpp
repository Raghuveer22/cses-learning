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

// Problem link: https://cses.fi/problemset/task/1091
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// There are n concert tickets available, each with a certain price. Then, m customers arrive, one after another.
// Each customer announces the maximum price they are willing to pay for a ticket, and after this, they will get a ticket with the nearest possible price such that it does not exceed the maximum price.
// Input
// The first input line contains integers n and m: the number of tickets and the number of customers.
// The next line contains n integers h_1,h_2,...,h_n: the price of each ticket.
// The last line contains m integers t_1,t_2,...,t_m: the maximum price for each customer in the order they arrive.
// Output
// Print, for each customer, the price that they will pay for their ticket. After this, the ticket cannot be purchased again.
// If a customer cannot get any ticket, print -1.
// Constraints
// 
// 1 <= n, m <= 2 \cdot 10^5
// 1 <= h_i, t_i <= 10^9
// 
// Example
// Input:
// 5 3
// 5 3 7 8 5
// 4 8 3
// 
// Output:
// 3
// 8
// -1

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
