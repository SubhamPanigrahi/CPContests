#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,m,x,y;
		cin>>n>>m>>x>>y;
		long long int ans = 0;
		if(m*n == 1)
		{
			ans = x;
		}
		else
			{
				if((m%2 == 0) || (n%2 == 0))
				{
					if(x >= y)
					{
						ans = ((m*n)/2)*y;
					}
					else
					{
						if(x <= (y/2))
						{
							ans = (m*n*x);
						}
						else
						{
							ans = ((m*n)/2)*y;
						}
					}
				}
				else
				{
					if(x >= y)
					{
						ans = (((m*n)/2) + 1)*y;
					}
					else
					{
						if(x<=(y/2))
						{
							ans = (m*n*x);
						}
						else
						{
							ans = ((m*n)/2)*y + x;
						}
					}
				}
			}

		cout<<ans<<endl;
	}
	return 0;
}