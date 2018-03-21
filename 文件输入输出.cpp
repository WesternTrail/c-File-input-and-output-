#include <iostream>
//����һ���ļ����������������ͷ�ļ� 
#include <fstream>
#include <time.h>
#define INF 1000000
ifstream fin("aplusb.in");
ofstream fout("aplusb.out");

using namespace std;

int main()
{
	#ifdef LOCAL
	//����1����������ض���
	freopen("data.in","r",stdin);
	freopen("data.out","w",stdout); 
	#endif
	
	//����2:�ļ��������
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
		//������������ʱ��
		printf("Time used = %.2lf\n",(double) clock()/CLOCKS_PER_SEC) 
	}
	return 0;
}


