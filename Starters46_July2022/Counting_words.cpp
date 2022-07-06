/* 
Problem
Harsh was recently gifted a book consisting of N pages. Each page contains exactly M words printed on it. As he was bored, he decided to count the number 
of words in the book.
Help Harsh find the total number of words in the book.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two space-separated integers on a single line, NN and M — the number of pages and the number of words on each page, respectively.

Output Format
For each test case, output on a new line, the total number of words in the book.
*/

#include <iostream>
using namespace std;

int main()
{
    int tc,N,M;
    cin>>tc;
    
    for(int i=0;i<tc;i++)
    {
        cin>>N>>M;
        cout<<N*M<<"\n";
    
    }
	
	return 0;
}
