#include <iostream>
#include <stdio.h>
#define LOCAL
using namespace std;

int main()
{
	//方法1：输入输出重定向 
	#ifdef LOCAL
	FILE *fin,*fout;
	fin = fopen("datain.txt","rb");
	fout = fopen("dataout.txt","wb");
	#endif
	
	int a,b,c,x;
	while(fscanf(fin,"%d %d %d",&a,&b,&c) == 3)
	{
		int flag = 0;
		for(x = 10;x <= 100;x++)
		{
			if(x % 3 == a && x % 5 == b && x % 7 == c)
			{
				flag = 1;
				break;
			}
		}
		
		if(flag == 0)
			fprintf(fout,"No answer\n");
		else
			fprintf(fout,"%d\n",x);
	}
	return 0;
}
