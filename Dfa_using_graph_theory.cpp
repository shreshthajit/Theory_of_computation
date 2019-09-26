#include<bits/stdc++.h>

using namespace std;

int a[1000][1000];

int main()
{
	int n;

	cin >> n;

	char start,end;

	cin >> start >> end;

	int finl,init;
	init=start-48;
	finl=end-48;
	for (int i = 0; i < n; ++i)
	{
		char u,v,w;
		cin >> u >> v >> w;
		a[u-48][w-48]=v-48;
	}
	int p;
	cin >> p;
 	for (int i = 0; i < p; ++i)
	{
		int cnt=0;
		string s;
		cin >> s;
		int now=init;
		for (int i = 0; i < s.length(); ++i)
		{
			int x=s[i]-48;
			now=a[now][x];
			if(now==finl)
			{
				cnt=1;
				cout << "CORRECT" << endl;
				break;
			}
		}
		if(!cnt)
		{
			cout <<"INCORRECT" << endl;

		}
	}
}
