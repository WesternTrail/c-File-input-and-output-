#include <iostream>
//包含一个文件操作输出控制流的头文件 
#include <fstream>
#include <time.h>
#define INF 1000000
ifstream fin("aplusb.in");
ofstream fout("aplusb.out");

using namespace std;

int main()
{
	#ifdef LOCAL
	//方法1：输入输出重定向
	freopen("data.in","r",stdin);
	freopen("data.out","w",stdout); 
	#endif
	
	//方法2:文件输入输出
	FILE *fin,*fout;
	fin = fopen("data.in","rb");
	fout = fopen("data.out","wb");
	 
	int x, n = 0,min = INF,max = -INF,s = 0;
	while(fscanf(fin,"%d",&x) == 1)
	{
		s += x;
		if(x < min)	min = x;
		if(x > max) max = x;
		
		printf("x = %d\n,min = %d\n,max = %d\n",x,min,max);
		
		
		n++;
		
		fprintf(fout,"%d %d %.3lf\n",min,max,(double) s/n);
		fclose(fin);
		fclose(fout);
		//输出程序的运行时间
		printf("Time used = %.2lf\n",(double) clock()/CLOCKS_PER_SEC) 
	}
	return 0;
}


