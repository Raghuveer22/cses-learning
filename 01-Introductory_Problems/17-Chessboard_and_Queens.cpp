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

// Problem link: https://cses.fi/problemset/task/1624
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// Your task is to place eight queens on a chessboard so that no two queens are attacking each other. As an additional challenge, each square is either free or reserved, and you can only place queens on the free squares. However, the reserved squares do not prevent queens from attacking each other.
// How many possible ways are there to place the queens?
// Input
// The input has eight lines, and each of them has eight characters. Each square is either free (.) or reserved (*).
// Output
// Print one integer: the number of ways you can place the queens.
// Example
// Input:
// ........
// ........
// ..*.....
// ........
// ........
// .....**.
// ...*....
// ........
// 
// Output:
// 65
// please use 2 seperate arrays as they consider 2 different diagonals 
// there are 3 arrays states which we need to consider

int recfunc1(int x, vector<int>&pres,vector<int>&diag1,vector<int>&diag2,vector<string>&arr) 
{
    if(x==8)
    {
        int sum=0;

        for(auto p:pres)
        {
            sum+=p;
        }
        if(sum==8)
        {
            return 1*1LL;
        }
        else
        {
            return 0;
        }
    }

    long long total_ways=0;

    for(int y=0;y<8;y++)
    {
        // shouldn't be placed
        if(pres[y] || arr[x][y]=='*')
        {
            continue;
        }
        if(diag1[x+y])
        {
            continue;
        }
        if(diag2[x-y+8])
        {
            continue;
        }
        pres[y]=1;  
        diag1[x+y]=1;
        diag2[x-y+8]=1;
        long long ways = recfunc1(x+1,pres,diag1,diag2,arr);
        pres[y]=0;
        diag1[x+y]=0;
        diag2[x-y+8]=0;
        total_ways+=ways;
    }
    return total_ways;
}
void func1()
{
    vector<string>arr(8,"");
    for(int i=0;i<8;i++)
    {
        cin>>arr[i];
    }
    vector<int>pres(8,0);
    vector<int>diag1(16,0);
    vector<int>diag2(16,0);
    long long ways=recfunc1(0,pres,diag1,diag2,arr);
    cout<<ways;
}
int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    func1();
	// Your code goes here
	return 0;
}
