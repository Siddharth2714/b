#include<stdio.h>
void main()
{
	int a,b,c;
	a = 20; 
	b = 10;
	c = 30;
    printf("%d>%d<%d --> %d\n",a,b,c,(a>b)&&(b<c));
    printf("%d>%d>%d --> %d\n",a,b,c,(a>b)&&(b>c));
    printf("%d==%d==%d --> %d\n",a,b,c,(a==b)&&(b==c));
    printf("%d>=%d>=%d --> %d\n",a,b,c,(a>=b)&&(b>=c));
    printf("%d<=%d<=%d --> %d\n",a,b,c,(a<=b)&&(b<=c));
    printf("%d!=%d!=%d --> %d",a,b,c,(a!=b)&&(b!=c));
}
