#include <stdio.h>
int main(){
	int n;
	printf("nhap so n mong muon\n");
	scanf("%d",&n);
	int so[n];
	for(int i=0;i<n;++i){
		printf("nhap so[%d]\n",i);
		scanf("%d",&so[i]);
	}	int s=0,count=0;
	for(int i=0;i<n;++i){ 
		if(so[i]%2==1){
			s+=so[i];
			count++;
		}
	}float x=(float)s/count;
	printf("trung binh cong cac so le trong mang la: %f\n",x);
	return 0;
}
