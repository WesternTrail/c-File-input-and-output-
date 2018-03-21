#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main()
{
	//方法1： 文件输入输出
	#ifdef LOCAL
	FILE *fin,*fout;
	fin = fopen("datain.txt","rb");
	fout = fopen("dataout.txt","wb");
	#endif
	int a,b,c;
	while(scanf("%d %d %d",&a,&b,&c))
	{
		if(a==0&&b==0&&c==0)
			break;
		//输出整数部分还有小数点 
		printf("%d.",a/b);
		//保留小数点之后的数据 
		a %= b;
		//输出前c-1位，最后一位需要四舍五入 
		for(int i = 0;i < c-1;i++)
		{
			a *= 10;
			printf("%d",a/b);
			//保留小数点后面的数据 
			a %= b;
		}
		
		//考虑最后一位的四舍五入
		int s;
		a *= 10;
		s = floor((double)a/b + 0.5);
		printf("%d",s);
	}
	
	return 0;
}
