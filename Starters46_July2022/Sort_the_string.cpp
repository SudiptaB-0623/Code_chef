/*
Problem
You have a binary string S of length N. In one operation you can select a substring of S and reverse it. For example, on reversing the
substring S[2,4] for S=11000, we change 11000→10010.

Find the minimum number of operations required to sort this binary string.
It can be proven that the string can always be sorted using the above operation finite number of times.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of 2 lines of input.
The first line of each test case contains a single integer N — the length of the binary string.
The second line of each test case contains a binary string S of length N.

Output Format
For each test case, output on a new line — the minimum number of operations required to sort the binary string.

*/

#include <iostream>

using namespace std;

int main()
{
	int tc;
	cin>>tc;
	for(int i=0;i<tc;i++)
	{
    	int N,count = 0;
    	cin>>N;
    	string s;
    	cin>>s;
    	for(int j = 0; j< N ; j++)
    	{
    	    if(s[j]== '1' && s[j+1] == '0')
    	    {
    	        count++;
    	    }
    	}
    	    cout<<count<<"\n";
    	    
    	}
	return 0;
}
