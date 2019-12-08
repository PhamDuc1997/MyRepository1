#include <stdio.h>
int main(){
	int a;
	printf("nhap so a\n");
	scanf("%d",&a);
	if ((a>=2)&&(a<=8)){
		if(a==8){
			printf("day la ngay chu nhat");
		}else {
			printf("day la ngay thu %d",a);
		}
		}else{
			printf("day khong phai ngay trong tuan");
		}
		return 0;
	}

