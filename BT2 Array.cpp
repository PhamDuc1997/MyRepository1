#include <stdio.h>
int main(){
	int n;
	printf("nhap so n mong muon\n");
	scanf("%d",&n);
	int so[n];
	for(int i=0;i<n;++i){
		printf("nhap so[%d]\n",i);
		scanf("%d",&so[i]);
	}for(int i=0;i<n;++i){
		if(so[i]%2==1){
			printf("so le trong day: %d\n",so[i]);
		}
	}printf("khong co so le\n");
	return 0;
}
