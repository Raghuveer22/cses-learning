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

// Problem link: https://cses.fi/problemset/task/1693
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// A game has n levels and m teleportes between them. You win the game if you move from level 1 to level n using every teleporter exactly once.
// Can you win the game, and what is a possible way to do it?
// Input
// The first input line has two integers n and m: the number of levels and teleporters. The levels are numbered 1,2,...,n.
// Then, there are m lines describing the teleporters. Each line has two integers a and b: there is a teleporter from level a to level b.
// You can assume that each pair (a,b) in the input is distinct.
// Output
// Print m+1 integers: the sequence in which you visit the levels during the game. You can print any valid solution.
// If there are no solutions, print "IMPOSSIBLE".
// Constraints
// 
// 2 <= n <= 10^5
// 1 <= m <= 2 \cdot 10^5
// 1 <= a,b <= n
// 
// Example
// Input:
// 5 6
// 1 2
// 1 3
// 2 4
// 2 5
// 3 1
// 4 2
// 
// Output:
// 1 3 1 2 4 2 5

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
