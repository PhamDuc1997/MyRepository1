#include <stdio.h>
int main(){
	int n;
	printf("nhap n=\n");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;++i){
		printf("ary[%d]=",i);
		scanf("%d",&ary[i]);
	}
	int sum=0,max_sum=0;
	for(int i=0;i<n;++i){
		if(ary[i]>0){
			sum+=ary[i];
			if(sum>max_sum){
				max_sum=sum;
			}
		}else{
			sum=0;
		}
	}
	printf("tong chuoi so duong lon nhat la %d",max_sum);
	return 0;
}
