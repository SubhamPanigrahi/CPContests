#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int a,b,n,m;
		cin>>a>>b>>n>>m;

		string ans ;

		if(n+m>a+b)
		{
			ans = "No";
		}
		else
		{
			if(m>=min(a,b))
			{
				if(m==min(a,b)==0)
				{
					ans = "No";
				}
				else
				{
					ans = "Yes";
				}
				
			}
			else
			{
				ans = "Yes";
			}
		}
		cout<<ans<<endl;

	}
	return 0;
}