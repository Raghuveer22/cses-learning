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

// Problem link: https://cses.fi/problemset/task/3228
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// There is a hidden permutation a_1, a_2,..., a_n of integers 1, 2,..., n. Your task is to find this permutation.
// To do this, you can ask questions: you can choose a binary string b_1b_2... b_n and you will receive the binary string b_{a_1}b_{a_2}... b_{a_n}.
// Interaction
// This is an interactive problem. Your code will interact with the grader using standard input and output. You should start by reading a single integer n: the length of the permutation.
// On your turn, you can print one of the following:
// 
// "?\ b_1b_2... b_n", where b_i\in\{0, 1\}: The grader will return the binary string b_{a_1}b_{a_2}... b_{a_n}.
// "!\ a_1\ a_2 ... a_n": report that the hidden permutation is a_1, a_2,..., a_n. Your program must terminate after this.
// 
// Each line should be followed by a line break. You must make sure the output gets flushed after printing each line.
// Constraints
// 
// 1 <= n <= 1000
// you can ask at most 10 questions of type ?
// 
// Example3
// ? 100
// 100
// ? 010
// 001
// ? 001
// 010
// ! 1 3 2
// 
// Explanation: The hidden permutation is [1, 3, 2]. In the first question b_1b_2b_3 = 100 and the grader returns b_{a_1}b_{a_2}b_{a_3} = b_1b_3b_2 = 100. In the second question b_1b_2b_3 = 010 and the grader returns b_1b_3b_2 = 001.

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    
	// Your code goes here
	return 0;
}
