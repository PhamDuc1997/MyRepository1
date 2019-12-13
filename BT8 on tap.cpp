#include <stdio.h>
int main(){
	int x,inv,s=0;
	printf("nhap vao so nguyen x\n");
	scanf("%d",&x);
	for(;x>0;x/=10){
		inv=x%10;
		s+=inv;}
	printf("tong cac chu so cua so nhap vao la %d\n",s);
	return 0;
}
	
