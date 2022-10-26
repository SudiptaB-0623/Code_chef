/*

Problem

Chef has an array AA of length NN. In one operation, Chef can:
Choose any subarray [L,R] (1≤L≤R≤N);
Add 1 to A_L, subtract 1 from A_{L+1}, add 1 to A_{L+2}, subtract 1 from A_{L+3} and so on, till A_R.
Chef performed QQ such operations where the ith operation was performed on the subarray [L_i, R_i].

Determine the final sum of the array after these Q operations.

Note that a subarray is formed by deleting some (possibly zero) elements from the beginning and some (possibly zero) elements from the end of the array.

Input Format

The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains two integers N, Q number of elements and the number of queries.
The next line contains N space-separated integers A_1, A_2, ..., A_N - denoting the array A.
The next Q lines contains two space-separated integers with ith line containing L_i, R_i
.
Output Format
For each test case, output the final sum of the array after performing all the Q operations.

*/

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int tc,n,q;
	cin>>tc;
	
	for(int i=0;i<tc;i++)
	{
	    cin>>n>>q;
	    int vect[n],temp[q][2];
	    long long s = 0;
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>vect[i];
	        s = s + vect[i];
	    }
	    for(int i=0;i<q;i++)
	    {
	        cin>>temp[i][0]>>temp[i][1];
	    }
	    for(int i=0;i<q;i++)
	    {
	        int val = temp[i][1]-temp[i][0];
	        val = val+1;
	        if(val%2==0)
	        {
	            continue;
	        }
	        else
	        {
	            s++;
	        }
	    }
	    cout<<s<<"\n";
	    
	}
	return 0;
}
