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

// Problem link: https://cses.fi/problemset/task/1743
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// Your task is to reorder the characters of a string so that no two adjacent characters are the same. What is the lexicographically minimal such string?
// Input
// The only line has a string of length n consisting of characters A–Z.
// Output
// Print the lexicographically minimal reordered string where no two adjacent characters are the same. If it is not possible to create such a string, print -1.
// Constraints
// 
// 1 <= n <= 10^6
// 
// Example
// Input:
// HATTIVATTI
// 
// Output:
// AHATITITVT
// solution https://www.youtube.com/watch?v=5HdxUOxaCjc&list=PLcXpkI9A-RZLNzhkMB3SyNfagr1LzIGrp&index=23
bool is_possible1(map<char,int>mp,char ch)
{
    char mode_ch=ch;
    int chars_to_fill=0;
    for(auto it:mp)
    {
        if(mp[it.first]>mp[mode_ch])
        {
            mode_ch=it.first;
        }
        chars_to_fill+=it.second;
    }
    // Case 1 checks if the mode is not the element we choose 
    // case 2 if the mode is exactly the elemet we choose for this place 

    return (mp[mode_ch]<=(chars_to_fill+1)/2) && (mp[ch]<=(chars_to_fill/2));
}



// getting TLE for this solution 
void func1()
{
    string str;
    cin>> str;
    map<char,int>mp;
    int max_ele=0;
    
    for(int i=0;i<str.size();i++)
    {
        mp[str[i]]++;
    }
    string ans="";
    
    char last='\0';
 
    for(int i=0;i<str.size();i++)
    {
        for(int k=0;k<=25;k++)
        {
            char ch='A'+k;
 
            if(ch==last)
            {
                continue;
            }
            if(mp.find(ch)!=mp.end() && mp[ch]!=0)
            {
                
                mp[ch]--;
                if(is_possible1(mp,ch))
                {
                    ans.push_back(ch);
                    last=ch;
                    break;
                }
                else
                {
                    mp[ch]++;
                }
            }
        }
    }
 
    if(ans.size()!=str.size())
    {
        cout<<-1;
    }
    else
    {
        cout<<ans;
    }
}



bool is_possible2(vector<int> freq,char ch)
{
    char mode_ch=ch;
    int chars_to_fill=0;
    for(int d=0;d<26;d++)
    {
        if(freq[d]>freq[mode_ch-'A'])
        {
            mode_ch='A'+d;
        }
        chars_to_fill+=freq[d];
    }



    // Case 1 checks if the mode is not the element we choose 
    // case 2 if the mode is exactly the elemet we choose for this place 
    return (freq[mode_ch-'A']<=(chars_to_fill+1)/2) && (freq[ch-'A']<=(chars_to_fill/2));
}



// getting TLE for this solution 
void func2()
{
    string str;
    cin>> str;
    vector<int>freq(26,0);
    int max_ele=0;
    
    for(int i=0;i<str.size();i++)
    {
        freq[str[i]-'A']++;
    }

    string ans="";

    char last='\0';

    for(int i=0;i<str.size();i++)
    {
        for(int k=0;k<=25;k++)
        {
            char ch='A'+k;
 
            if(ch==last)
            {
                continue;
            }
            if(freq[ch-'A']!=0)
            {
                freq[ch-'A']--;
                if(is_possible2(freq,ch))
                {
                    ans.push_back(ch);
                    last=ch;
                    break;
                }
                else
                {
                    freq[ch-'A']++;
                }
            }
        }
    }
 
    if(ans.size()!=str.size())
    {
        cout<<-1;
    }
    else
    {
        cout<<ans;
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

