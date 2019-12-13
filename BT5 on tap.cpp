#include <stdio.h>
#include <math.h>
int main(){
	int n,count=0;
	printf("nhap so n=\n");
	scanf("%d",&n);
	if(n<=2){printf("so nguyen to gan n nhat la %d",1);
	}else for( int i=2;i<=n;i++){	
			int count=0;
			for(int r=1;r<=i;r++){
				if(i%r==0){
				count++;
				}
				}if (count==2){printf("so nguyen to gan n nhat la %d\n",i);
				}
			}
		return 0;
	}
		

