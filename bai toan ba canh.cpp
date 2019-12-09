#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	printf("insert number a,b,c\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
		if(((a+b)>c)&&((a+c)>b)&&((b+c)>a)){
		int v=a+b+c;
		float p=(float)(a+b+c)/2;
		float s= sqrt((p*(p-a)*(p-b)*(p-c)));
		printf("day la ba canh tam giac va chu vi la v=%d\n",v);
		printf("dien tich la s=%f\n",s);
	}else{printf("day khong phai ba canh tam giac\n");
	}
	
	
	return 0;
}

