#include <stdio.h>
#include <math.h>
double perimetre(double a,double b,double c){
	double p;
	p=a+b+c;
	return p;
}
double area(double a,double b,double c){
	double s;
	double p=(perimetre(a,b,c))/2;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	return s;
}
int main(){
	double a,b,c;
	do{
		printf("nhap do dai ba canh\n");
		scanf("%lf",&a);
		scanf("%lf",&b);
		scanf("%lf",&c);
	}while(!(((a+b)>c)&&((a+c)>b)&&((b+c)>a)&&a>0&&b>0&&c>0));
	printf("Chu vi la %lf\n",perimetre(a,b,c));
	printf("dien tich la %lf\n",area(a,b,c));
	return 0;
}
