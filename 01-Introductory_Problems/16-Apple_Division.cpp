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

// Problem link: https://cses.fi/problemset/task/1623
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// There are n apples with known weights. Your task is to divide the apples into two groups so that the difference between the weights of the groups is minimal.
// Input
// The first input line has an integer n: the number of apples.
// The next line has n integers p_1,p_2,...,p_n: the weight of each apple.
// Output
// Print one integer: the minimum difference between the weights of the groups.
// Constraints
// 
// 1 <= n <= 20
// 1 <= p_i <= 10^9
// 
// Example
// Input:
// 5
// 3 2 7 4 1
// 
// Output:
// 1
// 
// Explanation: Group 1 has weights 2, 3 and 4 (total weight 9), and group 2 has weights 1 and 7 (total weight 8).

// this recursive combinations and not about permutation
long long recfunc1(int idx,long long cur_sum,long long sum,vector<long long>&arr)
{
    if(idx==arr.size())
    {
        long long set2_sum= sum-cur_sum;
        long long diff=set2_sum-cur_sum;    
        return abs(diff);
    }
    long long min_diff=INT_MAX;
    long long diff1 = recfunc1(idx+1,cur_sum+arr[idx],sum,arr);
    min_diff=min(min_diff,diff1);
    //not_take
    long long diff2 = recfunc1(idx+1,cur_sum,sum,arr);
    min_diff=min(min_diff,diff2);
    return min_diff;
}
void func1()
{
    int n;
    cin>>n;
    vector<long long>arr(n,0);
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }  
    long long min_diff=recfunc1(0,0,sum,arr);
    cout<<min_diff;
}

// this code is without recursive
void func2()
{
    int n;
    cin>>n;
    long long arr[n];
    long long sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    long long min_diff=INT_MAX;
    for(int j=0;j<(1<<n);j++)
    {   
        long long cur_sum=0;
        for(int k=n-1;k>=0;k--)
        {
            int pres= (1<<k)&j;
            if(pres)
            {
                cur_sum+=arr[k];
            } 
        }
        long long diff=abs(sum-(2*cur_sum));
        min_diff=min(diff,min_diff);
    }
    cout<<min_diff;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    //func1();
    func2();
	// Your code goes here
	return 0;
}
