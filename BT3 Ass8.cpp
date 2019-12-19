#include <stdio.h>
int timmaxhang(int a[][4],unsigned int n){
	int sum1=0,sum2=0,sum3=0,sum4=0;
	for(int i=0;i<4;i++){
		sum1+=a[0][i];
	}
	for(int i=0;i<4;i++){
		sum2+=a[1][i];

	}
	for(int i=0;i<4;i++){
		sum3+=a[2][i];
	}
	for(int i=0;i<4;i++){
		sum4+=a[3][i];
	}
	int max1=sum1;
	int max2=sum3;
	if(sum1<sum2){
		max1=sum2;
	}
	if(sum3<sum4){
		max2=sum4;
	}
	int max=max1;
	if(max1<max2){
		max=max2;
		printf("max la %d\n",max);
	}else {
		max=max1;
		printf("max la %d\n.max");
	}
	return max;
}
int main(){
	int ary[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	timmaxhang(ary,4);
	return 0;
}
