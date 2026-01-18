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

// Problem link: https://cses.fi/problemset/task/1622
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// Given a string, your task is to generate all different strings that can be created using its characters.
// Input
// The only input line has a string of length n. Each character is between a–z.
// Output
// First print an integer k: the number of strings. Then print k lines: the strings in alphabetical order.
// Constraints
// 
// 1 <= n <= 8
// 
// Example
// Input:
// aabac
// 
// Output:
// 20
// aaabc
// aaacb
// aabac
// aabca
// aacab
// aacba
// abaac
// abaca
// abcaa
// acaab
// acaba
// acbaa
// baaac
// baaca
// bacaa
// bcaaa
// caaab
// caaba
// cabaa
// cbaaa


// time complexity n! space complexity n!
// algorithm using set 
// please go through this https://www.geeksforgeeks.org/dsa/write-a-c-program-to-print-all-permutations-of-a-given-string/

void recfunc1(int idx,string str,set<string>&ans)
{   
    if(str.size()==idx)
    {
        ans.insert(str);
        return;
    }
    for(int i=idx;i<str.size();i++)
    {
        swap(str[idx],str[i]);
        recfunc1(idx+1,str,ans);
        swap(str[idx],str[i]);
    }
}

void func1()
{
    string str;
    cin>>str;
    set<string>ans;
    recfunc1(0,str,ans);
    cout<<ans.size()<<endl;
    for(auto&p:ans)
    {
        cout<<p<<endl;
    }
}

// algorithm using vector 
void recfunc2(int idx, string&str,vector<string>&ans)
{
    if(idx==str.size())
    {
        ans.push_back(str);
        return;
    }  
    set<char>st;
    for(int i=idx;i<str.size();i++)
    {
        if(st.count(str[i]))
        continue;
        st.insert(str[i]);
        swap(str[idx],str[i]);
        recfunc2(idx+1,str,ans);
        swap(str[idx],str[i]);
    }
}

void func2()
{
    string str;
    cin>>str;
    vector<string>ans;
    recfunc2(0,str,ans);
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for(auto &p:ans)
    {
        cout<<p<<endl;
    }
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    //func1();
    func2();
	// Your code goes here
	return 0;
}
