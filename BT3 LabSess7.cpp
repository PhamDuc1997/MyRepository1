#include <stdio.h>
int main(){
	int n;
	printf("nhap vao n=\n");
	scanf("%d",&n);
	int ary[n];
	for(int i=0;i<n;++i){
	printf("ary[%d]=",i);
	scanf("%d",&ary[i]);
}
	int count=0,max_count=0;
	for(int i=0;i<n;++i){
		if(ary[i]>0){
			count++;
			if(count>max_count){
				max_count=count;
			}
		}else{
			count=0;
		}
	}printf("so luong so duong lien tiep nhieu nhat la: %d",max_count);
	return 0;
}
