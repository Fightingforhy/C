#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
	double a, b, c,s,area;
	while(cin>>a){
		cin>>b>>c;
		area=sqrt((a+b+c)/2*((a+b+c)/2-a)*((a+b+c)/2-b)*((a+b+c)/2-c));
		cout<<setiosflags(ios::fixed)<<setprecision(2);
		cout<<area<<endl;
	}
	return 0;
}
