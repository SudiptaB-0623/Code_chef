/*
Problem
There are 100100 questions in a paper. Each question carries +3 marks for correct answer, -1 marks for incorrect answer and 0 marks for unattempted question.

It is given that Chef received exactly X(0≤X≤100) marks. Determine the minimum number of problems Chef marked incorrect.

Input Format
First line will contain T, number of test cases. Then the test cases follow.
Each testcase contains of a single integer X, marks that Chef received.

Output Format
For each test case, output the minimum number of problems Chef marked incorrect.

*/

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int tc,X;
	cin>>tc;

	for(int i=0;i<tc;i++)
	{
		cin>>X;
		
		int a=X%3;

		if(X==0 || a==0)
			cout<<0<<"\n";
		else
			cout<<3-a<<"\n";
	}
	return 0;
}

