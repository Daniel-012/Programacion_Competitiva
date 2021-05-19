#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
	int a;
	int b;
	cin>> a>> b;
	cout<< fixed<<setprecision(3)<<sqrt(a*a+b*b);
	return 0;
}
