#include<stdio.h>
void swap1(int a,int b){
	int c;
	c=a;
	a=b;
	b=c;
	printf("swap1�е�a=%d,b=%d",a,b);
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
	printf("\n����swap1��x=%d,y=%d",x,y);
	x=100,y=80;
	swap2(&x,&y);
	printf("\n����swap2��x=%d,y=%d",x,y);
	return 0;
}
