# include <stdio.h>
int main()
{
	int n,N,cnt=0;
	printf("ÇëÊäÈëÒ»¸öN\n");
	scanf("%d",&N);
	for(n=1;n<=N;n++)
	  {
		int t=n;
		while(t!=0)
		{if (t%10==1)
		  {cnt++;}
		  t/=10;
		}
		if (n==cnt)
		{printf("%d\n",n);
		}
   	}
return 0;	
}

