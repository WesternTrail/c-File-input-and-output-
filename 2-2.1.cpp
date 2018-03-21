#include <iostream>
#include <stdio.h>
#include <math.h>
#define LOCAL
using namespace std;

int main()
{
	//方法1：输入输出重定向 
	#ifdef LOCAL
	FILE *fout;
	fout = fopen("dataout.txt","wb");
	#endif
	
	int i,j,k,x,y;
	for(i = 1;i <= 9;i++)
	{
		for(j = 0;j <= 9;j++)
		{
			for(k = 0;k <= 9;k++)
			{
				x = k + j*10 + i*100;
				y = pow(i,3) + pow(j,3) + pow(k,3);
				if(x == y)
				{
					goto here;
				}
			}
		}
	}
	here:
	fprintf(fout,"%d\n",x);
	return 0;
}
