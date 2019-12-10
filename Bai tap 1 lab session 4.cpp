#include <stdio.h>
int main(){
	float s=0;
	int n;
	printf("nhap so n\n");
	scanf("%d",&n);
	for (float i=1;i<=n;++i){
		s+= (float)1/i;
	}printf("tong theo yeu cau dau bai la %f",s);
	return 0;	
}
