#include <iostream>
#include <stdio.h>
#define LOCAL
using namespace std;

int main()
{
	//����1����������ض��� 
	#ifdef LOCAL
		freopen("datain.txt","rb",stdin);
		freopen("dataout.txt","wb",stdout);
	#endif
	
	int a,i;
	scanf("%d",&a);
	
	for(i = 0;a != 0;i++)
	{
		a /= 10;
	}
	
	printf("%d\n",i);
	return 0;
}
