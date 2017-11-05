#include  <stdio.h >
int main ()
{

printf("请输入三个不同的数字\n");
double x,y,z,m,n;
scanf("%lf%lf%lf",&x,&y,&z);
if(x>y)
{m=x;
n=y;

}
else
{m=y;
n=x;
}
if(z>m)
{printf("%lf\n%lf\n%lf\n",z,m,n);
}
else if(z>n)
{printf("%lf\n%lf\n%lf\n",m,z,n);
}
else
{printf("%lf\n%lf\n%lf\n",m,n,z);
}
return 0;
}
