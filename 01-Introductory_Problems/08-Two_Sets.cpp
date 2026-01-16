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

// Problem link: https://cses.fi/problemset/task/1092
// Time limit: 1.00 s
// Memory limit: 512 MB
// 
// Your task is to divide the numbers 1,2,...,n into two sets of equal sum.
// Input
// The only input line contains an integer n.
// Output
// Print "YES", if the division is possible, and "NO" otherwise.
// After this, if the division is possible, print an example of how to create the sets. First, print the number of elements in the first set followed by the elements themselves in a separate line, and then, print the second set in a similar way.
// Constraints
// 
// 1 <= n <= 10^6
// 
// Example 1
// Input:
// 7
// 
// Output:
// YES
// 4
// 1 2 4 7
// 3
// 3 5 6
// Example 2
// Input:
// 6
// 
// Output:
// NO

void func1()
{

    int n; 
    cin>>n;
    if((n%4==1)||(n%4==2))
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        cout<<n/2<<endl;
        int t=n;
        cout<<t;
        int i=0;

        while(t>3)
        {
            if(i%2==0)
            {
                t-=3;
            }else
            {
                t-=1;
            }
            cout<<" "<<t;
            i++;
        }

        cout<<endl;
        cout<<(n+1)/2<<endl;
        
        i=0;
        t=n-1;
        cout<<t;
        while(t>1)
        {
            if(i%2==0)
            {
                t-=1;
            }
            else
            {
                t-=3;
            }
            if(t<0)break;
            cout<<" "<<t;
            i++;
        }       
        cout<<endl;
    }
}

int main() {
    cin.tie(nullptr);
    ios::sync_with_stdio(false);    
    func1();    
	// Your code goes here
	return 0;
}
