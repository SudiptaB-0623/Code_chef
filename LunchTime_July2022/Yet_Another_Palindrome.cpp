/*Problem
Chef has a string A (containing lowercase Latin letters only) of length N where N is even. He can perform the following operation any number of times:

Swap A_i and A_{i + 2} for any 1≤i≤(N−2)
Determine if Chef can convert string A to a palindromic string.

Note: A string is called a palindrome if it reads the same backwards and forwards.
For example, noon and level are palindromic strings but ebb is not.

Input Format
The first line contains a single integer T — the number of test cases. Then the test cases follow.
The first line of each test case contains an integer N — the length of the string A.
The second line of each test case contains a string A of length N containing lowercase Latin letters only.

Output Format
For each test case, output YES if Chef can convert the string A to a palindromic string. Otherwise, output NO.

You may print each character of YES and NO in either uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).
  
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{

	int tc,N;
	string s;

	cin>>tc;

	for(int i=0;i<tc;i++)
	{
		cin>>N;
		cin>>s;
	
    //Dividing the string into two halves of even and odd placed alphabets
    
		char arr1[(N/2)+1]={};
		char arr2[(N/2)+1]={};

		for(int j=0,k=0,l=0;j<N;j++)
		{
	
			if(j%2==0)
			{
				arr1[k]=s[j];
				k++;
			}
			else
			{
				arr2[l]=s[j];
				l++;
			}
		}

    //Sorting the two new arrays
    
		sort(arr1,arr1+(N/2));
		sort(arr2,arr2+(N/2));

		int res=strcmp(arr1,arr2);

		if(res==0)
			cout<<"Yes\n";
		else
			cout<<"No\n";
	}

	return 0;
}
