#include <iostream>
#include <stdio.h>
char a[100][100];
using namespace std;

int main()
{
	char temp;
	int n;
	//ʹ���ļ��������
	FILE *fin,*fout;
	fin = fopen("datain.txt","rb"); 
	fout = fopen("dataout.txt","wb");
	scanf("%d",&n);
	
	//ѭ����������Ԫ�� 
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++)
		{
			fscanf(fin,"%d",&a[i][j]);
		}
	}
	//�ԶԽ�����Ϊ�Գ��ᣬ������
	for(int i = 0;i < n;i++){
		for(int j = i;j < n;j++)
		{
			temp = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = temp;
		}
	} 
	
	//�������
	for(int i = n-1;i >= 0;i--){
		for(int j = 0; j < n;j++)
		{
			fprintf(fout,"%d ",a[i][j]);
			if(j == n-1)
				fprintf(fout,"\r\n");
		}
	} 
	
	return 0;
}
