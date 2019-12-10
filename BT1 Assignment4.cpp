#include <stdio.h>
int main(){
	int n,s=1;
	printf("nhap so n mong muon\n");
	scanf("%d",&n);
	for(int x=1;x<=n;x++){
		s=s*x;
	}printf("n!=%d",s);
}
