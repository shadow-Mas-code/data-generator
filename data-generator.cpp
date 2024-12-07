#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	bool ref[n + 1];
	srand(time(NULL));
	ref[0] = 1;
	while(1)
	{
		bool isok = 1;
		for(int i = 1;i <= n;i++)
		{
			if(!ref[i])isok = 0;
		}
		if(isok)break;
		int num = rand() % (n + 1);
		if(!ref[num])
		{
			cout<<num<<" ";
			ref[num] = 1;
		}
	}
	return 0;
}

