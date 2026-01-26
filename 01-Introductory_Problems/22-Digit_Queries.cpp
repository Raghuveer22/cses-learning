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

// Problem link: https://cses.fi/problemset/task/2431
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// Consider an infinite string that consists of all positive integers in increasing order:
// 12345678910111213141516171819202122232425...
// Your task is to process q queries of the form: what is the digit at position k in the string?
// Input
// The first input line has an integer q: the number of queries.
// After this, there are q lines that describe the queries. Each line has an integer k: a 1-indexed position in the string.
// Output
// For each query, print the corresponding digit.
// Constraints
// 
// 1 <= q <= 1000
// 1 <= k <= 10^{18}
// 
// Example
// Input:
// 3
// 7
// 19
// 12
// 
// Output:
// 7
// 4
// 1
/*
    first find the range for the k 

    range        nums       digits    k 
    1-9          9           1      [1-9]
    10-99        90          2      [10-189]
    100-999      900         3      [190-2899]
    1000-9999    9000        4      [2900-38899]
*/
void func1()
{
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
    {
        long long k;
        cin>>k;
        // implentation logic 
        long long start = 1; 
        long long count = 9;
        long long digit = 1;

        while(k> (start+count*digit -1))
        {
            // update to new values 
            start+=count*digit;
            count=count*10LL;
            digit+=1;
        }
        
        // caluclate the numbers offset
        long long firstnum=pow(10,digit-1);
        long long offset=(k-start)/digit;
        long long finalnum=firstnum+offset;
    
        long long startidx=start+(offset*digit);
        string finalnumstr=to_string(finalnum);
        int val=k-startidx;
        cout<<finalnumstr[val]<<endl;
    }
}
int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    func1();
	// Your code goes here
	return 0;
}
