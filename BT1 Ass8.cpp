#include <stdio.h>
int timx(int a[],unsigned int n,int x){
	int i;
	for(i=0;i<n;++i){
		if(x==a[i]){
			break;
		}
	}
	if(i<n){
		printf("so %d o vi tri %d\n",x,i);
	}else{
		printf("so %d khong co trong mang\n",x);
	}
	return 1;
}
int main(){
	int b[7]={1,2,3,4,5,6,70};
	timx(b,7,10);
 	return 0;
}

