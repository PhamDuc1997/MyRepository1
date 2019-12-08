#include <stdio.h>
int main (){
	int a,b;
	printf("nhap hai so a,b lan luot\n");
	scanf("%d",&a);
	scanf("%d",&b);
	if (a<b){
		int p=a*b;
		printf("a<b va tich hai so la p=%d\n",p);
	}else{
		if(b!=0){
		float x=(float)a/b;
		printf("a>=b va thuong hai so la x=%d\n",x);
	}else{printf("phep tinh khong thuc hien duoc\n");
	}
	}
	return 0;
}
