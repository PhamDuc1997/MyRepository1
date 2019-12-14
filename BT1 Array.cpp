#include <stdio.h>
int main(){
	int so_nguyen[10];
	printf("nhap lan luot 10 gia tri\n");
	for(int i=0;i<10;++i){
		scanf("%d",&so_nguyen[i]);
	}int x=0;
	for(int i=0;i<10;i++){
		x+=so_nguyen[i];
	}float r=(float)x/10;
	printf("%f la so trung binh cua 10 so nhap\n",r);
	return 0;
}
