#include <stdio.h>
int main(){
	int n,s;
	printf("please insert n=\n");
	scanf("%d",&n);
	if (n<=0){printf("no result\n");
	}else if(n==1){
		s=1;printf("the sum would be %d\n",s);
	}else if(n==2){s=2;printf("the sum would be %d\n",s);
	}else if(n==3){s=4;printf("the sum would be %d\n",s);
	}else{
		int x1=1,x2=1,x3=2;
		s=4;
		for(int i=4;i<=n;i++){
			x1=x2;
			x2=x3;
			x3=x1+x2;
			s=s+x3;
		}printf("the sum of n numbers in fibonacci sequence is %d\n",s);
	}
	return 0;}
