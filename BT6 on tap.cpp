#include <stdio.h>
int main(){
	int a,b;
	printf("nhap lan luot hai so a va b\n");
	scanf("%d",&a);
	scanf("%d",&b);
	if (a>=b){printf("phep toan khong thuc hien duoc\n");
	}else {
	int s=0;
	for (int i=a;i<=b;i++){
		s+=i;
	}printf("tong so tu a den b la %d\n",s);
	}return 0;
}
