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

// Problem link: https://cses.fi/problemset/task/1757
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// You want to complete n courses that have requirements of the form "course a has to be completed before course b".
// You want to complete course 1 as soon as possible. If there are several ways to do this, you want then to complete course 2 as soon as possible, and so on.
// Your task is to determine the order in which you complete the courses.
// Input
// The first input line has two integers n and m: the number of courses and requirements. The courses are numbered 1,2,...,n.
// Then, there are m lines describing the requirements. Each line has two integers a and b: course a has to be completed before course b.
// You can assume that there is at least one valid schedule.
// Output
// Print one line having n integers: the order in which you complete the courses.
// Constraints
// 
// 1 <= n <= 10^5
// 1 <= m <= 2 \cdot 10^5
// 1 <= a,b <= n
// 
// Example
// Input:
// 4 2
// 2 1
// 2 3
// 
// Output:
// 2 1 3 4

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
