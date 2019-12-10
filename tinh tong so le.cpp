#include <stdio.h>
int main(){
	int s=0;
	for(int i=0,n=0;i<100;n++){
		if(n%2!=0){
			s+=n;
			++i;
		}
		}
		printf("tong 100 so le dau tien la %d\n",s);
	return 0;
	
}
