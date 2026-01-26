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

// Problem link: https://cses.fi/problemset/task/3419
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// Your task is to construct an n x n grid where each square has the smallest nonnegative integer that does not appear to the left on the same row or above on the same column.
// Input
// The only line has an integer n.
// Output
// Print the grid according to the example.
// Constraints
// 
// 1 <= n <= 100
// 
// Example
// Input:
// 5
// 
// Output:
// 0 1 2 3 4
// 1 0 3 2 5
// 2 3 0 1 6
// 3 2 1 0 7
// 4 5 6 7 0

// for func1 
int get_min_non_positive(vector<vector<int>>&arr,int hor,int ver)
{
    if(hor==0 && ver==0)
    {
        return 0;
    }
    vector<int>hash(210,0);

    for(int i=0;i<hor;i++)
    {
        hash[arr[ver][i]]=1;
    }

    for(int j=0;j<ver;j++)
    {
        hash[arr[j][hor]]=1;
    }

    for(int i=0;i<210;i++)
    {
        if(hash[i]==0)
        {
            return i;
        }
    }
    return -1;
}

void func1()
{
    int n;
    cin>>n;
    vector<vector<int>>ans(n,vector<int>(n,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            ans[i][j] = get_min_non_positive(ans,j,i);
        }
    }
    for(auto j:ans)
    {
        for(auto i:j)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
}


// func2 
struct Mex{
    int mex=0;

    // stores previously occured elemently
    // specifically elements >(mex+1)
    set<int>ele;

    void add(int x)
    {
        
        // you don't have to add
        if(x<mex)return;
        // if it's already in set no worries 
        if(ele.find(x)!=ele.end())return;

        ele.insert(x);

        // if x is greater than mex then we are fine about updating mex
        if(x!=mex)return;

        // if x==mex then it's should be front of the list 
        // clear it and also update the list till you get new mex
        while( !ele.empty() && *ele.begin()==mex)
        {
            ele.erase(ele.begin());
            mex++;
        }
    } 
};

Mex mexes[100][100];

void func2()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int mex=mexes[i][j].mex;
            cout<<mex<<" ";

            // you should be exluding the values across the row
            for(int k=0;k<n;k++)
            {
                mexes[i][k].add(mex);
            }
            // you should be exluding the values across the column 
            for(int k=0;k<n;k++)
            {
                mexes[k][j].add(mex);
            }
        }
        cout<<"\n";
    }
}


// func3 non trivial idea  https://www.youtube.com/watch?v=0JdizSAkdd8
void func3()
{
    int n;
    cin>>n;
    vector<vector<int>>ans(n,vector<int>(n,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<(i^j)<<" ";
        }
        cout<<"\n";
    }
}
int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);   
    func2();
    //func1();
    //func3();
	// Your code goes here
	return 0;
}
