#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;

		int x;
		string ans = "";
		while(n--)
		{
			cin>>x;
			if(x%k == 0)
			{
				ans += "1";
			}
			else
			{
				ans += "0";
			}
		}

		cout<<ans<<endl;

	}
	return 0;
}