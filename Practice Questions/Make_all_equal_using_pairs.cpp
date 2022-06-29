/*Problem
Chef has an array A of length N.
In one operation, Chef can choose any two distinct indices i, j and either change A_i to A_j or change A_j to A_i.
Find the minimum number of operations required to make all the elements of the array equal.

Input Format
First line will contain T, number of test cases. Then the test cases follow.
First line of each test case consists of an integer N - denoting the size of array A.
Second line of each test case consists of N space-separated integers denoting the array A.
	
Output Format
For each test case, output the minimum number of operations required to make all the elements equal.
*/


#include<iostream>

using namespace std;

int main()
{
	int tc;
	cin>>tc;			

	for(int i=0;i<tc;i++)			//loop for test cases
	{
		int size;
		cin>>size;
		int arr[size];
		for(int j=0;j<size;j++)		//loop for array input
		{
			cin>>arr[j];
		}

		//linear sort of array

		for(int k=0;k<size;k++)
		{
			for(int l=k+1;l<size;l++)
			{
				if(arr[k]>arr[l])
				{
					arr[k]=arr[k]+arr[l];
					arr[l]=arr[k]-arr[l];
					arr[k]=arr[k]-arr[l];
				}
			}
		}


		//selecting maximum appearance of a number
		
		int key,app,appn;
		key=arr[0];
		app=1;
		appn=app;

		for(int m=1;m<size;m++)
		{
			if(arr[m]==key)
				appn++;
			else if(arr[m]!=key)
			{
				if(appn>app)
				{
					
					app=appn;
					key=arr[m];
					appn=1;
				}
				else
				{
					key=arr[m];
					appn=1;
				}
			}
		}

		//Displaying the output
		
		if(app>appn)
			cout<<size-app<<"\n";
		else
			cout<<size-appn<<"\n";
	}
	return 0;
}
