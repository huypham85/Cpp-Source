#include<bits/stdc++.h>

using namespace std;
int n;
long long s,t[1000];
long long cnt = 0,Min = 1e10;
void init()
{
	cin >> n >> s;
	for(int i =0 ; i < n;i++)
	{
		cin >> t[i];
	}
	//sort(t,t+n); 
}
void process(int i, long long res)
{
	if(res == s)
	{
		Min = min(cnt,Min);
	}
	else
	{
		for(int j = i; j < n; j++)
		{
			if(res + t[j] <= s )
			{
				cnt++;
				res += t[j];
				process(j+1 , res);
				res -= t[j];
				cnt--;
			}
			else break;
		}
	}
}
int main()
{
	init();
	process(0,0);
	if(Min == 1e10) cout << "-1";
	else cout << Min;
}

