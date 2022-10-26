/*

Problem
You have a binary string S. You can perform the following operation on S:

Select any substring S_L…R (1≤L≤R≤∣S∣) which is sorted in non-decreasing order and remove it from S. (Both the left and right halves are concatenated 
after performing the operation)

Find the minimum number of operations required so that the final binary string S is sorted in non-decreasing order.

Note that a substring is formed by deleting some (possibly zero) characters from the beginning and some (possibly zero) characters from the end of the string.

Input Format

The first line contains a single integer T — the number of test cases. Then the test cases follow.
The first line of each test case contains an integer N — the length of the binary string S.
The second line of each test case contains a binary string SS of length N containing 0s and 1s only.

Output Format
For each test case, output the minimum number of operations required so that the final binary string S is sorted in non-decreasing order.

*/

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// your code goes here
	int tc,n;
	string str;
	
	cin>>tc;
	
	for(int i=0;i<tc;i++)
	{
	   cin>>n>>str; 
	   int result = 0;
	   for(int i=1;i<n;i++)
	   {
	       if(str[i]=='0' && str[i-1]== '1')
	       {
	           result=result +1;
	       }
	   }
	   cout<<result<<"\n";
	}
	return 0;
}
