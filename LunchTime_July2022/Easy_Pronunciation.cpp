/*
Problem
Words that contain many consecutive consonants, like "schtschurowskia", are generally considered somewhat hard to pronounce.

We say that a word is hard to pronounce if it contains 4 or more consonants in a row; otherwise it is easy to pronounce. For example,
"apple" and "polish" are easy to pronounce, but "schtschurowskia" is hard to pronounce.

You are given a string SS consisting of NN lowercase Latin characters. Determine whether it is easy to pronounce or not based on the
rule above — print YES if it is easy to pronounce and NO otherwise.

For the purposes of this problem, the vowels are the characters {a,e,i,o,u} and the consonants are the other 21 characters.

Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of two lines of input.
The first line of each test case contains a single integer N, the length of string S.
The second line of each test case contains the string S.

Output Format
For each test case, output on a new line the answer — YES if S is easy to pronounce, and NO otherwise.

Each character of the output may be printed in either uppercase or lowercase. For example, the strings YES, yeS, yes, and YeS will all be treated as identical.

*/

#include <iostream>
using namespace std;

int main()
{
    int tc,n;
    string s;
    
    cin>>tc;
    
    for(int i=0;i<tc;i++)
    {
        cin>>n;
        cin>>s;
        
        int count=0;
        
        for(int j=0;j<n;j++)
        {
            if((s[j]=='a') || (s[j]=='e') || (s[j]=='i') || (s[j]=='o') || (s[j]=='u'))
	           {
                count=0;
	            }
            else
	          {
                count++;
	           }
            
            if(count>=4)
            {
                cout<<"NO\n";
                count=-1;
                break;
            }
        }
       
        if((count!=-1) && (count<4))
            cout<<"YES\n";
        
    }
	return 0;
}
