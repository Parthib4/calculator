#include<stdio.h>
int add (int x, int y){
	return x+y;
}
int subt(int x, int y){
	return x-y;
}
int multi ( int x , int y){
	return x*y;
}
int div (int x, int y){
	return x/y;
}
int main (){
	int a,b,c,d,e,f,g;
	printf("enter the case\n");
	scanf("%d",&g);
	printf("enter the first number\n");
	scanf("%d",&a);
	printf("enter the second number \n");
	scanf("%d",&b);
	if(g==1){
		c=add(a,b);
		printf("the number is:\n");
		printf("%d",c);
	}
	if(g==2){
	d=subt(a,b);
	printf("the number is :\n");
	printf("%d",d);
}
if(g==3){
	e=multi(a,b);
	printf("the number is :\n");
	printf("%d",e);
}
if(g==4){
	f=div(a,b);
	printf("the number is :\n");
	printf("%d",f);
}
	return 0;
}
