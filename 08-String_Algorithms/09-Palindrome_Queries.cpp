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

// Problem link: https://cses.fi/problemset/task/2420
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// You are given a string that consists of n characters between a–z. The positions of the string are indexed 1,2,...,n.
// Your task is to process m operations of the following types:
// 
// Change the character at position k to x
// Check if the substring from position a to position b is a palindrome
// 
// Input
// The first input line has two integers n and m: the length of the string and the number of operations.
// The next line has a string that consists of n characters.
// Finally, there are m lines that describe the operations. Each line is of the form "1 k x" or "2 a b".
// Output
// For each operation 2, print YES if the substring is a palindrome and NO otherwise.
// Constraints
// 
// 1 <= n, m <= 2 \cdot 10^5
// 1 <= k <= n
// 1 <= a <= b <= n
// 
// Example
// Input:
// 7 5
// aybabtu
// 2 3 5
// 1 3 x
// 2 3 5
// 1 5 x
// 2 3 5
// 
// Output:
// YES
// NO
// YES

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
