#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,r;
		cin>>n>>r;

		long long int ans = 0;

		if(r>=n)
		{
			n = n-1;
			ans = (n*(n+1)/2);
			ans++;
		}
		else if(r < n)
		{
			ans += (r*(r+1)/2);
		}

		cout<<ans<<endl;
	}
	return 0;
}