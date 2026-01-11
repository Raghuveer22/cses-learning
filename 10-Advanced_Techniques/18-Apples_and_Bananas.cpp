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

// Problem link: https://cses.fi/problemset/task/2111
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// There are n apples and m bananas, and each of them has an integer weight between 1 ... k. Your task is to calculate, for each weight w between 2 ... 2k, the number of ways we can choose an apple and a banana whose combined weight is w.
// Input
// The first input line contains three integers k, n and m: the number k, the number of apples and the number of bananas.
// The next line contains n integers a_1,a_2,...,a_n: weight of each apple.
// The last line contains m integers b_1,b_2,...,b_m: weight of each banana.
// Output
// For each integer w between 2 ... 2k print the number of ways to choose an apple and a banana whose combined weight is w.
// Constraints
// 
// 1 <= k,n,m <= 2 \cdot 10^5
// 1 <= a_i <= k
// 1 <= b_i <= k
// 
// Example
// Input:
// 5 3 4
// 5 2 5
// 4 3 2 3
// 
// Output:
// 0 0 1 2 1 2 4 2 0  
// 
// Explanation: For example for w = 8 there are 4 different ways: we can pick an apple of weight 5 in two different ways and a banana of weight 3 in two different ways.

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
