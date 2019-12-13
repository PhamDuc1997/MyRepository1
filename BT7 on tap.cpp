#include <stdio.h>
int main(){
	int x,inv,n;
	printf("nhap vao so nguyen x\n");
	scanf("%d",&x);
	while(x!=0){
		inv=x%10;
		x/=10;
		n++;}
	printf("so chu so la %d\n",n);
	return 0;
}
