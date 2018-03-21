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
	
	int i,j,n;
	fscanf(fin,"%d",&n);
	
	for(i = n;i > 0;i--)
	{
		for(int j = 0;j < n - i;j++)
			fprintf(fout," ");
			
		for(j = 1;j <= 2*i - 1;j++)
		{
			fprintf(fout,"#");
		}
			fprintf(fout,"\r\n");
	}
	return 0;
}
