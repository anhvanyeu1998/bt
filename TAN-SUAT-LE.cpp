#include<iostream>
using namespace std ;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long a[n+1];
		for(int i=0;i<n;i++) cin>>a[i];
		int b[n+1]={0}; 
		for(int i=0;i<n;i++)
		{ 
		if(b[i]==0)
		{	
		b[i]=1;		 
		for(int j=i+1;j<n;j++)
		{			 
			if(a[j]==a[i]) 
			{
				b[i]++; b[j]=1; 
			}
		 }
		 if(b[i]%2!=0) 
		 {
		 	cout<<a[i]<<endl; break; 
		 }
		 }
	}
	 } 

	return 0;
}


