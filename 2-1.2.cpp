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
	
	int a,i;
	fscanf(fin,"%d",&a);
	
	for(i = 0;a != 0;i++)
	{
		a /= 10;
	}
	
	fprintf(fout,"%d\n",i);
	return 0;
}
