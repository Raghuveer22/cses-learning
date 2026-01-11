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

// Problem link: https://cses.fi/problemset/task/1687
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// A company has n employees, who form a tree hierarchy where each employee has a boss, except for the general director.
// Your task is to process q queries of the form: who is employee x's boss k levels higher up in the hierarchy?
// Input
// The first input line has two integers n and q: the number of employees and queries. The employees are numbered 1,2,...,n, and employee 1 is the general director.
// The next line has n-1 integers e_2,e_3,...,e_n: for each employee 2,3,...,n their boss.
// Finally, there are q lines describing the queries. Each line has two integers x and k: who is employee x's boss k levels higher up?
// Output
// Print the answer for each query. If such a boss does not exist, print -1.
// Constraints
// 
// 1 <= n,q <= 2 \cdot 10^5
// 1 <= e_i <= i-1
// 1 <= x <= n
// 1 <= k <= n
// 
// Example
// Input:
// 5 3
// 1 1 3 3
// 4 1
// 4 2
// 4 3
// 
// Output:
// 3
// 1
// -1

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
