#include <stdio.h>
int timfibo(int a){
	if(a<0){printf("khong kiem duoc\n");
	}else if(a<3){
		printf("so thu %d=%d\n",a,1);
	}else if(a<4){printf("so thu %d=%d\n",a,4);
	}else{
		int x1=1,x2=1,x3=2;
		for(int i=4;i<=a;++i){
			x1=x2;
			x2=x3;
			x3=x1+x2;
		}printf("so thu %d la %d",a,x3);
	}
	return 1;
}
int main(){
	int n;
	printf("nhap n mong muon\n");
	scanf("%d",&n);
	timfibo(n);
	return 0;
}
