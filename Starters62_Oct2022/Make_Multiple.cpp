/*
Problem
Chef has two integers A and B (A≤B).

Chef can choose any non-negative integer X and add them to both A and B. Find whether it is possible to make A a divisor of B.

Input Format

The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two integers A and B.

Output Format
For each test case, output YES if it is possible to make A a factor of B, NO otherwise.

You can print each character of the string in uppercase or lowercase. For example, the strings Yes, YES, yes, and yEs, are all considered identical.

*/

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int tc,a,b;
	cin>>tc;
	
	for(int i=0;i<tc;i++)
	{
	   cin>>a>>b;
	   if(b%a>0)
	   {
	       if(b>(2*a))
	       {
	           cout<<"Yes\n";
	       }
	       else
	       {
	           cout<<"No\n";
	       }
	   }
	   else
	   {
	       cout<<"Yes\n";
	   }
	}
	return 0;
}
