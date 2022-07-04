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

		//	for(int j=0;j<N;j++)
		//		cout<<"\n"<<array[j];

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

