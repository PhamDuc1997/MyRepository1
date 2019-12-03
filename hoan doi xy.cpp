#include <stdio.h>
int main(){
	int x;
	int y;
	int t;
	printf("input the first number x= ");
	scanf("%d",&x);
	printf("input the second number y= ");
	scanf("%d",&y);
	t=x;
	x=y;
	y=t;
	printf("interchange x=%d, y=%d\n",x,y);
}

