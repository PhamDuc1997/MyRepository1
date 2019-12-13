#include <stdio.h>
int main(){
	int a,b;
	printf("nhap lan luot hai so a va b\n");
	scanf("%d",&a);
	scanf("%d",&b);
	if(a==b){printf("uoc chung lon nhat hai so la %d\n",a);
	}else{while(a!=b){
		if (a>b){a-=b;
		}else b-=a;
	}printf("uoc chung lon nhat hai so la %d",a);
	}return 0;
	}
	
