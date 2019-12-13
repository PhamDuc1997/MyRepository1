#include <stdio.h>
int main(){
	int n;
	printf("nhap so n tu ban phim\n");
	scanf("%d",&n);
	if(n<2){printf("khong kiem duoc\n");
	}else if(n<3){
		printf("so nguyen to gan n nhat la %d\n",n);
	}else if(n<4){printf("so nguyen to gan n nhat la %d\n",n);
	}else{
		int num1=1,num2=1,num3=2;
		for(;num3<n;){
			num1=num2;
			num2=num3;
			num3=num1+num2;
		}printf("so nguyen to gan n nhat la %d\n",num2);
	}
	return 0;
}
