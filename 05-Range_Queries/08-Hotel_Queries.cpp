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

// Problem link: https://cses.fi/problemset/task/1143
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// There are n hotels on a street. For each hotel you know the number of free rooms. Your task is to assign hotel rooms for groups of tourists. All members of a group want to stay in the same hotel.
// The groups will come to you one after another, and you know for each group the number of rooms it requires. You always assign a group to the first hotel having enough rooms. After this, the number of free rooms in the hotel decreases.
// Input
// The first input line contains two integers n and m: the number of hotels and the number of groups. The hotels are numbered 1,2,...,n.
// The next line contains n integers h_1,h_2,...,h_n: the number of free rooms in each hotel.
// The last line contains m integers r_1,r_2,...,r_m: the number of rooms each group requires.
// Output
// Print the assigned hotel for each group. If a group cannot be assigned a hotel, print 0 instead.
// Constraints
// 
// 1 <= n,m <= 2 \cdot 10^5
// 1 <= h_i <= 10^9
// 1 <= r_i <= 10^9
// 
// Example
// Input:
// 8 5
// 3 2 4 1 5 5 2 6
// 4 4 7 1 1
// 
// Output:
// 3 5 0 1 1

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
