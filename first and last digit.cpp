
CodeChef is a non-commercial competitive programming community
Logout

    PRACTICE
    COMPETE
    DISCUSS
    COMMUNITY
    HELP
    ABOUT

Home  » First and Last Digit » All Submissions » ram8104 [17140143]
Solution: 17140143

CodeChef submission 17140143 (C++ 6.3) plaintext list. Status: AC, problem FLOW004, contest CODECHEF. By ram8104 (ram8104), 2018-01-23 22:50:04.

    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
    	int i,j,n,k,a,b,l,u;
    	int c=0;
    	cin>>n;
    	for(i=0;i<n;i++)
      {
    	cin>>k;
    	l=k;
    	while(k!=0)
    	{
    		k=k/10;
    	  	c++;
    	}
    	if(c==1)
    	{
    		cout<<l;
    	}
    	else
    	{
    		a=l%10;
    		u=pow(10,c-1);
    		b=l/u;
    		//cout<<b<<u<<endl;
    		cout<<a+b<<endl;
    		c=0;
    		
    	}
      }
    	return 0;
    } 



