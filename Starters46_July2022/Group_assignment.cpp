/*
Problem
Chef is hosting a party at his house and NN people are invited to it. Everyone has arrived and they are eager to make a group and chit-chat.

The i^{th} person prefers to be in a group of exactly P_i people (including himself). A person who is not in a group of preferred size gets upset.
Find whether Chef would be able to assign every person to a group such that everyone remains happy.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains an integer N — the number of people at the party.
The next line contains the array P — where P_{i} denotes the preferred group size for i^{th} person.

Output Format
For each test case, output YES, if Chef can assign every person to a group such that everyone remains happy. Otherwise output NO.

The output is case-insensitive, meaning that outputs such as yES, YeS, YES and yes mean the same.

*/

#include<iostream>

using namespace std;

int main()
{

	int tc,N;
	cin>>tc;

	for(int i=0;i<tc;i++)
	{
		cin>>N;
		int array[N];

		for(int j=0;j<N;j++)
			cin>>array[j];

		int count =1;
		int key=array[0];
		int flag=1;
		int res=0;

		for(int k=1;k<N;k++)
		{
			if(array[k]==key)
			{
				swap(array[k],array[flag]);
				flag++;
				count++;
			}
			if(key==count)
			{
				key=array[flag];
				count=1;
				flag++;
				k=flag-1;

			}
			if((k==N-1)&&(key!=count))
			{
				cout<<"No\n";

				res++;
				break;
			}

		}
		if(res==0)
			cout<<"Yes\n";
	

	}
	return 0;
}
