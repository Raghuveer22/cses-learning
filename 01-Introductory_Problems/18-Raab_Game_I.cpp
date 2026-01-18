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

// Problem link: https://cses.fi/problemset/task/3399
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// Consider a two player game where each player has n cards numbered 1,2,...,n. On each turn both players place one of their cards on the table. The player who placed the higher card gets one point. If the cards are equal, neither player gets a point. The game continues until all cards have been played.
// You are given the number of cards n and the players' scores at the end of the game, a and b. Your task is to give an example of how the game could have played out.
// Input
// The first line contains one integer t: the number of tests.
// Then there are t lines, each with three integers n, a and b.
// Output
// For each test case print YES if there is a game with the given outcome and NO otherwise.
// If the answer is YES, print an example of one possible game. Print two lines representing the order in which the players place their cards. You can give any valid example.
// Constraints
// 
// 1 <= t <= 1000
// 1 <= n <= 100
// 0 <= a,b <= n
// 
// Example
// Input:
// 5
// 4 1 2
// 2 0 1
// 3 0 0
// 2 1 1
// 4 4 1
// 
// Output:
// YES
// 1 4 3 2
// 2 1 3 4
// NO
// YES
// 1 2 3
// 1 2 3
// YES
// 1 2
// 2 1
// NO
// this is a correct solution but not accepted
// at any case there are each get a confirmed win 

void func1()
{
    int t;
    cin>>t;
    for(int h=0;h<t;h++)
    {
        int n,a,b;
        cin>>n>>a>>b;
        if(a+b>n||(a==0 &&b!=0)|| (a!=0 && b==0))
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            int draws=n-a-b;
            vector<int>team_a(n,0);
            vector<int>team_b(n,0);

            for(int i=0;i<draws;i++)
            {
                team_a[i]=i+1;
                team_b[i]=i+1;
            }

            for(int i=0;i<(a-1);i++)
            {
                team_a[i+draws]=i+draws+2;
                team_b[i+draws]=i+draws+1;
            }

            // 1 win for b any ways
            team_a[draws+a-1]=draws+1;
            team_b[draws+a-1]=draws+a;

            // b-1 wins adding to team b 
            for(int i=0;i<(b-1);i++)
            {
                team_a[draws+a+i]=i+a+draws+1;
                team_b[draws+a+i]=i+a+draws+2;
            }

            // 1 win to a any ways
            team_a[n-1]=n;
            team_b[n-1]=draws+a+1;

            for(auto i:team_a)
            {
                cout<<i<<" ";
            }
            cout<<endl;
            for(auto i:team_b)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }
}

void func2()
{
    int t;
    cin>>t;
    for(int h=0;h<t;h++)
    {
        int n,a,b;
        cin>>n>>a>>b;
        if(a+b>n||(a==0 &&b!=0)|| (a!=0 && b==0))
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            int off_set=n-a-b;
            for(int i=0;i<n;i++)
            {
                cout<<i+1<<" ";
            }
            cout<<endl;
            // tie in these cases
            for(int i=0;i<off_set;i++)
            {
                cout<<i+1<<" ";
            }
            // b will all these cases upto b times
            for(int i=off_set+a;i<n;i++)
            {
                cout<<i+1<<" ";
            }
            for(int i=off_set;i<off_set+a;i++)
            {
                cout<<i+1<<" ";
            }
            cout<<endl;
        }
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
