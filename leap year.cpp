#include <stdio.h>
int main ()
{
	printf("������һ�����\n");
	int x;
	scanf("%d",&x);
	if(x%4!=0)
	{printf("ƽ��\n");
	}
	else if(x%100!=0)
	{printf("����\n");
	}
	else if(x%400==0)
	{printf("����\n");
	}else{
	printf("ƽ��\n");
	}
	return 0;
}
