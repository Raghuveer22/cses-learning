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

// Problem link: https://cses.fi/problemset/task/1749
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// You are given a list consisting of n integers. Your task is to remove elements from the list at given positions, and report the removed elements.
// Input
// The first input line has an integer n: the initial size of the list. During the process, the elements are numbered 1,2,...,k where k is the current size of the list.
// The second line has n integers x_1,x_2,...,x_n: the contents of the list.
// The last line has n integers p_1,p_2,...,p_n: the positions of the elements to be removed.
// Output
// Print the elements in the order they are removed.
// Constraints
// 
// 1 <= n <= 2 \cdot 10^5
// 1 <= x_i <= 10^9
// 1 <= p_i <= n-i+1
// 
// Example
// Input:
// 5
// 2 6 1 4 2
// 3 1 3 1 1
// 
// Output:
// 1 2 2 6 4
// 
// Explanation: The contents of the list are [2,6,1,4,2], [2,6,4,2], [6,4,2], [6,4], [4] and [].

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
