#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

int main()
{
	//����1�� �ļ��������
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
		//����������ֻ���С���� 
		printf("%d.",a/b);
		//����С����֮������� 
		a %= b;
		//���ǰc-1λ�����һλ��Ҫ�������� 
		for(int i = 0;i < c-1;i++)
		{
			a *= 10;
			printf("%d",a/b);
			//����С������������ 
			a %= b;
		}
		
		//�������һλ����������
		int s;
		a *= 10;
		s = floor((double)a/b + 0.5);
		printf("%d",s);
	}
	
	return 0;
}
