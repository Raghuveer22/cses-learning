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

// Problem link: https://cses.fi/problemset/task/1158
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// You are in a book shop which sells n different books. You know the price and number of pages of each book.
// You have decided that the total price of your purchases will be at most x. What is the maximum number of pages you can buy? You can buy each book at most once.
// Input
// The first input line contains two integers n and x: the number of books and the maximum total price.
// The next line contains n integers h_1,h_2,...,h_n: the price of each book.
// The last line contains n integers s_1,s_2,...,s_n: the number of pages of each book.
// Output
// Print one integer: the maximum number of pages.
// Constraints
// 
// 1 <= n <= 1000
// 1 <= x <= 10^5
// 1 <= h_i, s_i <= 1000
// 
// Example
// Input:
// 4 10
// 4 8 5 3
// 5 12 8 1
// 
// Output:
// 13
// 
// Explanation: You can buy books 1 and 3. Their price is 4+5=9 and the number of pages is 5+8=13.

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
