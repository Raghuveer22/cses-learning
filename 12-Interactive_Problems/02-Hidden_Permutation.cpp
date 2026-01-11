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

// Problem link: https://cses.fi/problemset/task/3139
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// There is a hidden permutation a_1, a_2,..., a_n of integers 1, 2,..., n. Your task is to find this permutation.
// To do this, you can ask questions: you can choose two indices i and j and you will be told if a_i < a_j.
// Interaction
// This is an interactive problem. Your code will interact with the grader using standard input and output. You should start by reading a single integer n: the length of the permutation.
// On your turn, you can print one of the following:
// 
// "?\ i\ j", where 1 <= i, j <= n: ask if a_i < a_j. The grader will return YES if a_i < a_j and NO otherwise.
// "!\ a_1\ a_2 ... a_n": report that the hidden permutation is a_1, a_2,..., a_n. Your program must terminate after this.
// 
// Each line should be followed by a line break. You must make sure the output gets flushed after printing each line.
// Constraints
// 
// 1 <= n <= 1000
// you can ask at most 10^4 questions of type ?
// 
// Example3
// ? 3 2
// NO
// ? 3 1
// YES
// ! 3 1 2
// 
// Explanation: The hidden permutation is [3, 1, 2]. The first question asks if a_3 < a_2 which is false, so the answer is NO. The second question asks if a_3 < a_1 which is true, so the answer is YES.

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
