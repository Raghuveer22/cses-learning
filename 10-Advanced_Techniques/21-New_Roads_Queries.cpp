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

// Problem link: https://cses.fi/problemset/task/2101
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// There are n cities in Byteland but no roads between them. However, each day, a new road will be built. There will be a total of m roads.
// Your task is to process q queries of the form: "after how many days can we travel from city a to city b for the first time?"
// Input
// The first input line has three integers n, m and q: the number of cities, roads and queries. The cities are numbered 1,2,...,n.
// After this, there are m lines that describe the roads in the order they are built. Each line has two integers a and b: there will be a road between cities a and b.
// Finally, there are q lines that describe the queries. Each line has two integers a and b: we want to travel from city a to city b.
// Output
// For each query, print the number of days, or -1 if it is never possible.
// Constraints
// 
// 1 <= n, m, q <= 2 \cdot 10^5
// 1 <= a,b <= n
// 
// Example
// Input:
// 5 4 3
// 1 2
// 2 3
// 1 3
// 2 5
// 1 3
// 3 4
// 3 5
// 
// Output:
// 2
// -1
// 4

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
