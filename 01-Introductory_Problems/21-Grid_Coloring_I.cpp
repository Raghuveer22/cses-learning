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

// Problem link: https://cses.fi/problemset/task/3311
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// You are given an nx m grid where each cell contains one character A, B, C or D.
// For each cell, you must change the character to A, B, C or D. The new character must be different from the old one.
// Your task is to change the characters in every cell such that no two adjacent cells have the same character.
// Input
// The first line has two integers n and m: the number of rows and columns.
// The next n lines each have m characters: the description of the grid.
// Output
// Print n lines each with m characters: the description of the final grid.
// You may print any valid solution.
// If no solution exists, just print IMPOSSIBLE.
// Constraints
// 
// 1 <= n, m <= 500
// 
// Example
// Input:
// 3 4
// AAAA
// BBBB
// CCDD
// 
// Output:
// CDCD
// DCDC
// ABAB

// this is a greedy approach to solve the problem 
// not an absolute solution we assume this local optimal to be global optimal 
// we fill row by row and then col by col
// so we never about chars in both about below and right to a grid
// we are not allowed to fill the left, center, top chars 
void func1()
{
    int m,n;
    //mxn
    cin>>m>>n;
    vector<string>grid(m,"");
    for(int i=0;i<m;i++)
    {
        cin>>grid[i];
    }
    bool poss=1;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            vector<int>hash(4,1);
            int center=grid[i][j]-65;
            hash[center]=0;
            if(i>0) 
            {
                int top=grid[i-1][j]-65;
                hash[top]=0;
            }
            if(j>0)
            {
                int lef=grid[i][j-1]-65;
                hash[lef]=0;
            }

            bool cell_pos=0;
            for(int k=0;k<4;k++)
            {
                if (hash[k]==1)
                {
                    cell_pos=1;
                    grid[i][j]='A'+k;
                    break;
                }
            }
            if(cell_pos==0)
            {
                poss=0;
                break;
            }
        }
    }

    if(poss==0)
    {
        cout<<"IMPOSSIBLE"<<endl;
    }
    else
    {
        for(int i=0;i<m;i++)
        {
            cout<<grid[i]<<"\n";
        }
    }

}

// this solution for sake of passing the tests

void func2()
{
    int m,n;
    //mxn
    cin>>m>>n;
    vector<string>grid(m,"");
    for(int i=0;i<m;i++)
    {
        cin>>grid[i];
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if((i+j)%2==0)
            {
                if(grid[i][j]=='A')
                {
                    grid[i][j]='B';
                }
                else
                {
                    grid[i][j]='A';
                }
            }
            else
            {
                if(grid[i][j]=='C')
                {
                    grid[i][j]='D';
                }
                else
                {
                    grid[i][j]='C';
                }
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        cout<<grid[i]<<"\n";
    }
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    func1();
    //func2();
	// Your code goes here
	return 0;
}
