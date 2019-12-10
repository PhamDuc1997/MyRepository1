#include <stdio.h>
int main(){
	int x,rev=0,inv;
	printf("nhap vao so nguyen x\n");
	scanf("%d",&x);
	while(x>0){
		inv=x%10;
		rev=rev*10+inv;
		x/=10;
	}printf("so dao nghich la %d",rev);
	
	
	return 0;
}
