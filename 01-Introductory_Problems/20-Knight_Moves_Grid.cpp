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

// Problem link: https://cses.fi/problemset/task/3217
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// There is a knight on an n x n chessboard. For each square, print the minimum number of moves the knight needs to do to reach the top-left corner.
// Input
// The only line has an integer n.
// Output
// Print the number of moves for each square.
// Constraints
// 
// 4 <= n <= 1000
// 
// Example
// Input:
// 8
// 
// Output:
// 0 3 2 3 2 3 4 5 
// 3 4 1 2 3 4 3 4 
// 2 1 4 3 2 3 4 5 
// 3 2 3 2 3 4 3 4 
// 2 3 2 3 4 3 4 5 
// 3 4 3 4 3 4 5 4 
// 4 3 4 3 4 5 4 5 
// 5 4 5 4 5 4 5 6

void func1()
{
    int n;
    cin>>n;
    vector<vector<int>>ans(n,vector<int>(n,-1));
    
    queue<pair<pair<int,int>,int>>q; 

    vector<pair<int,int>>dir={{1,2},{1,-2},{-1,2},{-1,-2},{2,1},{2,-1},{-2,1},{-2,-1}};
    ans[0][0]=0;
    q.push({{0,0},0});

    while(!q.empty())
    {
        auto tope = q.front().first;
        auto lev = q.front().second;
        for(auto nex:dir)
        {
            int x= tope.first+nex.first;
            int y= tope.second+nex.second; 
            if( x>=0 && x<n && y>=0 && y<n && ans[x][y]==-1)
            {
                // valid points
                ans[x][y]=lev+1;
                q.push({{x,y},lev+1});
            }           
        } 
        q.pop();
    } 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }
}
int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    func1();
	// Your code goes here
	return 0;
}
