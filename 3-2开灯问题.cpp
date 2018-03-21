#include <iostream>
#include <string.h>
#define MAXN 1010
using namespace std;

int a[MAXN];
int main()
{
	//原先全部都是关掉的 
	memset(a,0,sizeof(a));
	int n,k,first = 1;
	cin>>n>>k;
	for(int i = 1; i <= k;i++)
		for(int j = 1;j <= n;j++)
			if(j%i==0)
				a[j] = !a[j];
	
	for(int i = 1;i <= n;i++)
	{
		if(a[i])
		{
			if(first)
				first = 0;
			else
				cout<<" ";
			cout<<i;
		}
	}
	return 0;
}
