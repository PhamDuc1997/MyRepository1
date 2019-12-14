#include <stdio.h>
int main(){
	int so[10];
	
	for(int i=0;i<10;i++){
		do{
		printf("nhap so so[%d]\n",i);
		scanf("%d",&so[i]);
	}while(so[i]%2==0);
	}for (int i=0;i<10;i++){
	printf("so[%d]=%d\n",i,so[i]);
	}
return 0;
		}
