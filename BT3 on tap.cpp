#include <stdio.h>
int main(){
	int n;
	printf("nhap so n=\n");
	scanf("%d",&n);
	if(n<0){printf("khong kiem duoc\n");
	}else if(n<3){
		printf("so thu %d=%d\n",n,1);
	}else if(n<4){printf("so thu %d=%d\n",n,4);
	}else{
		int x1=1,x2=1,x3=2;
		for(int i=4;i<=n;++i){
			x1=x2;
			x2=x3;
			x3=x1+x2;
		}printf("so thu %d la %d",n,x3);
	}
	return 0;
}
