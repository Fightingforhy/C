#include<stdio.h>
void swap1(int a,int b){
	int c;
	c=a;
	a=b;
	b=c;
	printf("swap1中的a=%d,b=%d",a,b);
}
void swap2(int *a,int *b){
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
int main(){
	int x=100,y=800;
	swap1(x,y);
	printf("\n调用swap1后x=%d,y=%d",x,y);
	x=100,y=80;
	swap2(&x,&y);
	printf("\n调用swap2后x=%d,y=%d",x,y);
	return 0;
}
