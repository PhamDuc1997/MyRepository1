#include <stdio.h>
int main(){
	int a,b,c;
	printf("nhap lan luot ba so a,b,c\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	while(!(((a+b)>c)&&((a+c)>b)&&((b+c)>a)&&a>0&&b>0&&c>0)){
		printf("day khong phai ba canh tam giac,vui long nhap lai\n");
		scanf("%d",&a);
		scanf("%d",&b);
		scanf("%d",&c);
	}printf("day la ba canh tam giac");
	return 0;}
	

