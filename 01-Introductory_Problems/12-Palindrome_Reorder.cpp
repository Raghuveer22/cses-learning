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

// Problem link: https://cses.fi/problemset/task/1755
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// Given a string, your task is to reorder its letters in such a way that it becomes a palindrome (i.e., it reads the same forwards and backwards).
// Input
// The only input line has a string of length n consisting of characters A–Z.
// Output
// Print a palindrome consisting of the characters of the original string. You may print any valid solution. If there are no solutions, print "NO SOLUTION".
// Constraints
// 
// 1 <= n <= 10^6
// 
// Example
// Input:
// AAAACACBA
// 
// Output:
// AACABACAA

void func1()
{
    string str;
    cin>>str;
    map<char,int>mp;
    for(int i=0;i<str.size();i++)
    {
        mp[str[i]]++;
    }
    int odd_count=0;
    char odd_char;
    for(auto &p :mp)
    {
        if(p.second&1) //odd
        {
            odd_count++;
            if(odd_count==1)
            {
                odd_char=p.first;
            }
        }
    }
    if(odd_count>1)
    {
        cout<<"NO SOLUTION"<<endl;
        return;
    }
    string partA="";
    for(auto & p: mp)
    {
        if(p.second>0)
        {
            partA+=string(p.second/2,p.first);
        }
    }
    string partB=partA;
    reverse(partB.begin(),partB.end());
    if(odd_count==1)
    {
        cout<<partA<<odd_char<<partB;
    }
    else
    {
        cout<<partA<<partB;
    }
}
int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    func1();
	// Your code goes here
	return 0;
}
