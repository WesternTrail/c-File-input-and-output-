#include <iostream>
#include <math.h>
#include <stdio.h>
#define LOCAL
using namespace std;

int main()
{
	//方法1： 文件数输入输出
	#ifdef LOCAL
	freopen("datain.txt","r",stdin);
	freopen("dataout.txt","w",stdout);
	#endif
	
	int n,m;
	double sum;
	scanf("%d %d",&n,&m);
	for(int i = n;i <= m;i++)
	{
		sum += 1.0/(pow(i,2));
	}
	
	printf("%.5lf\n",sum);
	return 0;
}
