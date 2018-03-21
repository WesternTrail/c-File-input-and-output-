#include <iostream>
#include <math.h>
#include <stdio.h>
#define LOCAL
using namespace std;

int main()
{
	//方法1：文件输入输出 
	#ifdef LOCAL
	FILE *fin,*fout;
	fin = fopen("datain.txt","rb");
	fout = fopen("dataout.txt","wb");
	#endif
	
	int i;
	for(i = 1;;i++)
	{
		if(i==1)
			fprintf(fout,"%d",i);
		else if(i%2==0)
			fprintf(fout,"-%lf",1.0/(2*i-1));
		else if(i%2==1)
			fprintf(fout,"+%lf",1.0/(2*i-1));
		if(1.0/(2*i-1) < pow(10,-6))
			break;
	}
	return 0;
}
