#include <stdio.h>
int main(){
	int a,n=0;
	printf("vui long nhap so a\n");
	scanf("%d",&a);
	if(a<2){
		printf("day khong phai so nguyen to\n");
	}else{
	for(int x=1;x<=a;x++){
		if(a%x==0){
			n++;
		}
	}if(n==2){printf("%d la so nguyen to",a);
	}else{printf("%d khong phai la so nguyen to",a);
	}	
	}
	return 0;
}
