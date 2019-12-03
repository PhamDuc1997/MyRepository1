#include <stdio.h>
int main(){
	int a;
	int b;
	int c;
	printf("Input numbers, please\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if (a>b){
		if(a>c){
			printf("%d is max\n",a);
			}else{
				printf("%d is max\n",c);
			}
	}else{if(b>c){
		printf("%d is max\n",b);
	}else{
		printf("%d is max\n",c);}
}
}
