#include<bits/stdc++.h>
using namespace std;
int main()
{
	long n,i,j,k=0,sticks,area,u=-1,p;
	cin>>n;
	int a[1001],b[1001],c[1001];
	for(i=0;i<n;i++)
	{
		cin>>sticks;
		for(p=0;p<=1000;p++)
		{
			b[p]=0;
		}
		for(j=0;j<sticks;j++)
		{
			cin>>a[j];
			b[a[j]]++;
		}
		
		for(p=1000;p>=0;p--)
		{	
		if(b[p]>=4 && k==0)
			{
				c[0]=p;
				c[1]=p;
				break;
			}
			if(b[p]>=2 )
			{
				c[k]=p;
				k++;
			}
			
			
	    }
			if(c[0]!=0 && c[1]!=0)
		    {
		    	
			area=c[0]*c[1];
			cout<<area<<endl;
       		}
       		else
       		{
       			cout<<u<<endl;
			   }
		c[0]=0;
		c[1]=0;
		k=0;
		
	}
	return 0;
}
