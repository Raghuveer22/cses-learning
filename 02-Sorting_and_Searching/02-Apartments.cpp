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

// Problem link: https://cses.fi/problemset/task/1084
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// There are n applicants and m free apartments. Your task is to distribute the apartments so that as many applicants as possible will get an apartment.
// Each applicant has a desired apartment size, and they will accept any apartment whose size is close enough to the desired size.
// Input
// The first input line has three integers n, m, and k: the number of applicants, the number of apartments, and the maximum allowed difference.
// The next line contains n integers a_1, a_2, ..., a_n: the desired apartment size of each applicant. If the desired size of an applicant is x, they will accept any apartment whose size is between x-k and x+k.
// The last line contains m integers b_1, b_2, ..., b_m: the size of each apartment.
// Output
// Print one integer: the number of applicants who will get an apartment.
// Constraints
// 
// 1 <= n, m <= 2 \cdot 10^5
// 0 <= k <= 10^9
// 1 <= a_i, b_i <= 10^9
// 
// Example
// Input:
// 4 3 5
// 60 45 80 60
// 30 60 75
// 
// Output:
// 2

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
