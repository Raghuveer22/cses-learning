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

// Problem link: https://cses.fi/problemset/task/1069
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.
// Input
// The only input line contains a string of n characters.
// Output
// Print one integer: the length of the longest repetition.
// Constraints
// 
// 1 <= n <= 10^6
// 
// Example
// Input:
// ATTCGGGA
// 
// Output:
// 3


void func1(){
   string str;
   cin >> str;
   int n=str.size();

   int a=0;
   int g=0;
   int c=0;
   int t=0;
   int max_val=0;
  for(int i=0;i<n;i++)
  {
        if(str[i]=='A')
        {
            a++;
            g=0;
            c=0;
            t=0;
        }
        else if(str[i]=='G')
        {
            g++;
            a=0;
            c=0;
            t=0;
        }
        else if(str[i]=='T')
        {
            c++;
            a=0;
            g=0;
            t=0;
        }
        else
        {
            a=0;
            g=0;
            c=0;
            t++;
        }
        max_val=max(max_val,max(a,max(g,max(c,t))));
   }
   cout<<max_val;
}

void func2()
{
    string str;
    cin>>str;
    int n=str.size();
    char curr_char=str[0];
    int curr_count=1;
    int max_count=1;
    for(int i=1;i<n;i++)
    { 
        if(str[i]==curr_char)
        {
            curr_count++;
            max_count=max(max_count,curr_count);
        }
        else
        {
            curr_char=str[i];
            curr_count=1;
        }
    }
    cout<<max_count;
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    //func1();
	func2();
	return 0;
}
