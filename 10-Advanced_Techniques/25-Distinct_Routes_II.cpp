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

// Problem link: https://cses.fi/problemset/task/2130
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// A game consists of n rooms and m teleporters. At the beginning of each day, you start in room 1 and you have to reach room n.
// You can use each teleporter at most once during the game. You want to play the game for exactly k days. Every time you use any teleporter you have to pay one coin. What is the minimum number of coins you have to pay during k days if you play optimally?
// Input
// The first input line has three integers n, m and k: the number of rooms, the number of teleporters and the number of days you play the game. The rooms are numbered 1,2,...,n.
// After this, there are m lines describing the teleporters. Each line has two integers a and b: there is a teleporter from room a to room b.
// There are no two teleporters whose starting and ending room are the same.
// Output
// First print one integer: the minimum number of coins you have to pay if you play optimally. Then, print k route descriptions according to the example. You can print any valid solution.
// If it is not possible to play the game for k days, print only -1.
// Constraints
// 
// 2 <= n <= 500
// 1 <= m <= 1000
// 1 <= k <= n-1
// 1 <= a,b <= n
// 
// Example
// Input:
// 8 10 2
// 1 2
// 1 3
// 2 5
// 2 4
// 3 5 
// 3 6
// 4 8
// 5 8
// 6 7 
// 7 8
// 
// Output:
// 6
// 4
// 1 2 4 8 
// 4
// 1 3 5 8

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
