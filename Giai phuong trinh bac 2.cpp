#include <stdio.h>
#include <math.h>
int main(){
	int a;
	int b;
	int c;
	float d;
	float x;
	float x1;
	float x2;
	printf("input numbers for a,b,c respectively\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	d=b*b-(4*a*c);
	if (a==0){
		x=-c/b;
		printf("the equation has one root x=%f",x);
		}else{if (d<0){
		printf("the equation has no root");
		}else{if(d==0){
			x=-b/(2*a);
			printf("the equation has one root x=%f",x);
		}else{
			x1=(-b+sqrt(d))/(2*a);
			x2=(-b-sqrt(d))/(2*a);
			printf("the equation has two roots x1=%f, x2 =%f",x1,x2);
		}
		}
	}
}
