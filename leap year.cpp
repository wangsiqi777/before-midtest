#include <stdio.h>
int main ()
{
	printf("请输入一个年份\n");
	int x;
	scanf("%d",&x);
	if(x%4!=0)
	{printf("平年\n");
	}
	else if(x%100!=0)
	{printf("闰年\n");
	}
	else if(x%400==0)
	{printf("闰年\n");
	}else{
	printf("平年\n");
	}
	return 0;
}
