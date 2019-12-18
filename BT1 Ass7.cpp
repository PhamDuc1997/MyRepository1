#include <stdio.h>
int main(){
	int n;
	printf("nhap so n\n");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;++i){
		printf("ary[%d]=",i);
		scanf("%d",&ary[i]);
	}
	int x;
	printf("nhap so x");
	scanf("%d",&x);
	int tmp,k,j;
	for(k=1;k<n;++k){
		j=k-1;
		tmp=ary[k];
		while((j>=0)&&(tmp<ary[j])){
			ary[j+1]=ary[j];
			j--;
		}
		ary[j+1]=tmp;
	}
	int low=0;
	int high=n-1;
	int searchValue=x;
	int flag=0;
	while(low<=high){
		int mid=(high+low)/2;
		if(searchValue==ary[mid]){
			flag=1;
			printf("so %d o vi tri %d\n",x,mid);
			break;
		}else if(searchValue<ary[mid]){
			high=mid-1;
		}else if(searchValue>ary[mid]){
			low=mid+1;
		}
	}printf("vi tri gan nhat la %d va %d\n",low+1);
	if(flag==0){
		printf("so %d khong tim thay duoc\n",x);
	}
	return 0;
}
