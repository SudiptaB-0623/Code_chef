/*
Problem
You are given an array AA containing N integers. Find if it is possible to choose exactly M elements from the array such that the MEX of the chosen
elements is exactly K.

Recall that the MEX of an array is the smallest non-negative integer that does not belong to the array. For example, the MEX of [2, 2, 1] is 0
because 0 does not belong to the array, the MEX of [3, 1, 0, 1] is 2 because 0 and 1 belong to the array, but 2 does not.

Input Format
The first line contains an integer T, denoting the number of test cases. The T test cases then follow:
The first line of each test case contains an integer N, M, KN,M,K, denoting the length of the array, the number of elements to be chosen, and 
the required MEX respectively.
The second line of each test case contains N space-separated integers A_1,A_2,....,A_N , denoting the elements of the array.

Output Format

For each test case, print YES if it is possible to choose M elements from the array A so that the MEX of the chosen elements is exactly K and NO otherwise.

*/

#include<iostream>

using namespace std;

int main()
{
	int tc,N,M,K;
	cin>>tc;

	for(int i=0;i<tc;i++)
	{
		cin>>N>>M>>K;
		int array[N];
		for(int j=0;j<N;j++)
			cin>>array[j];
		
		if(M<K)
			cout<<"No\n";
		else
		{
			//Selection Sort
			
			for(int k=0;k<N;k++)
			{
				for(int l=k+1;l<N;l++)
				{
					if(array[l]<array[k])
					{
						int temp=array[k];
						array[k]=array[l];
						array[l]=temp;
					}
				}
			}

		
			
			int mex=1;
			
			//Determining if K can be the MEX
			
			for(int a=0;a<K;a++)
			{
				int key=0;
				for(int b=0;b<N;b++)
				{
					if(array[b]==a)
					{
						key++;
					//	cout<<"Key= "<<key;
						for(int c=b;c<N-1;c++)
							array[c]=array[c+1];
						N--;
						M--;
						break;
					}

				}
				if(key==0)
				{
					cout<<"No\n";
					mex=0;
					break;
				}	
			}

			//Deciding if M numbers can be selected with K as MEX
			
			if(mex!=0)
			{	
				if(M==0)
					cout<<"Yes\n";
				else if((M!=0)&&(N==0))
					cout<<"No\n";
					
				else
				{
					for(int d=0;d<N;d++)
					{
						if(array[d]!=K)
						{
							M--;
						}
					}
					if(M<=0)
						cout<<"Yes\n";
					else
						cout<<"No\n";
				}
			}
		}

	}
	return 0;
}

