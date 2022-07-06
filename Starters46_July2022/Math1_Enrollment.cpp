/*
Problem
For the upcoming semester, the admins of your university decided to keep a total of X seats for the MATH-1 course. A student interest survey was
conducted by the admins and it was found that Y students were interested in taking up the MATH-1 course.

Find the minimum number of extra seats that the admins need to add into the MATH-1 course to make sure that every student who is interested in taking
the course would be able to do so.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two-space separated integers on a single line, XX and Y — the current number of seats up for enrolment and the number of
students interested in taking up the course in the upcoming semester, respectively.

Output Format
For each test case, output on a new line the minimum number of seats required to be added.
*/

#include <iostream>
using namespace std;

int main()
{
	int tc,X,Y;
	cin>>tc;
	
	for(int i=0;i<tc;i++)
	{
	    cin>>X>>Y;
	    if((X==Y)||(X>Y))
	        cout<<0<<"\n";
	    else
	        cout<<Y-X<<"\n";
	}
	return 0;
}


