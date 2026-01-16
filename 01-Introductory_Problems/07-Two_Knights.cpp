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

// Problem link: https://cses.fi/problemset/task/1072
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// Your task is to count for k=1,2,...,n the number of ways two knights can be placed on a k x k chessboard so that they do not attack each other.
// Input
// The only input line contains an integer n.
// Output
// Print n integers: the results.
// Constraints
// 
// 1 <= n <= 10000
// 
// Example
// Input:
// 8
// 
// Output:
// 0
// 6
// 28
// 96
// 252
// 550
// 1056
// 1848
// logic: only requires immediate attacking positions
// (x,y) => (x+1,y-2),(x-1,y-2), (x+1,y+2),(x-1,y+2), (x+2,y-1),(x-2,y-1), (x+2,y+1),(x-2,y+1) 
// total no of combinations (nC2) = (n,2)
// possible immediate attack positions = 8 for each corner from above
// answer = nC2-(possible attack pos)

// time complexity O(n^3)
// space complexity 1
void func1() 
{
    int n;
    cin>>n;
    for(int t=1;t<=n;t++)
    {
        long long sq = t*t*1LL;
        long long pos = (sq*(sq-1))/2;  // number of possible positions
        long long not_pos=0; 
        for(int x=1;x<=t;x++)
        {
            for(int y=1;y<=t;y++)
            {
                if(x-1>0)
                {         
                    if(y-2>0)
                    {
                        not_pos++;
                    }
                    if(y+2<=t)
                    {
                        not_pos++;
                    }       
                }
                if (x+1<=t)
                {        
                    if(y-2>0)
                    {
                        not_pos++;
                    }
                    if(y+2<=t)
                    {
                        not_pos++;
                    }       
                }
                if(x-2>0)
                {
                    if(y-1>0)
                    {
                        not_pos++;
                    }
                    if(y+1<=t)
                    {
                        not_pos++;
                    }       
                }
                if (x+2<=t)
                {
                    if(y-1>0)
                    {
                        not_pos++;
                    }
                    if(y+1<=t)
                    {
                        not_pos++;
                    }      
                }
            }
        }
        long long not_pos_1= not_pos/2;
        cout<<pos-not_pos_1<<endl;
    }
}

// time complexity O(n*n)
// space complexity 1
void func2() 
{
    int n;
    cin>>n;
    for(int t=1;t<=n;t++)
    {
        long long sq = t*t*1LL;
        long long pos = (sq*(sq-1))/2;  // number of possible positions
        long long not_pos=0; 
        for(int x=1;x<=t;x++)
        {
            if(x-1>0)
            {         
                not_pos+=2*max(0,t-2);  
            }
            if (x+1<=t)
            {        
                not_pos+=2*max(0,t-2);    
            }
            if(x-2>0)
            {
                not_pos+=2*max(0,t-1);   
            }
            if (x+2<=t)
            {
                not_pos+=2*max(0,t-1); 
            }
        }
        long long not_pos_1= not_pos/2;
        cout<<pos-not_pos_1<<endl;
    }
}

// time complexity O(n)
// space complexity 1
void func3() 
{
    int n;
    cin>>n;
    for(int t=1;t<=n;t++)
    {
        long long sq = t*t*1LL;
        long long pos = (sq*(sq-1))/2;  // number of possible positions
        long long not_pos=0; 
        not_pos= 8*max(0,t-2)*(max(0,t-1));
        long long not_pos_1= not_pos/2;
        cout<<pos-not_pos_1<<endl;
    }
}


int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    //func1();
    //func2();
    func3();
	// Your code goes here
	return 0;
}
