#include <stdio.h>

int main(void)
{
	int a=2, b=-3, c=5, d=-7;
	printf("%d %d \n",a+b-c, (a+b)-c);
	a=2, b=-3, c=5, d=-7;
	printf("%d \n", 7+c * --d);
	a=2, b=-3, c=5, d=-7;
	printf("%d \n", 7+(c*--d));
	a=2, b=-3, c=5, d=-7;
	printf("%d %d \n",2*a%-b,(2*a)%-b);
	a=2, b=-3, c=5, d=-7;
	printf("%d %d \n",a+=b+=1,(1+b)+a);
	a=2, b=-3, c=5, d=-7;
	printf("%d %d \n",a+=b+= 1+2,(1+2)+(a+b));
	return 0;
}

