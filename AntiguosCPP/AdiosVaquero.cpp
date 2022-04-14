#include<iostream>

using namespace std;


int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	unsigned long long int a;

	cin>> a;
	unsigned long long int res= a*(a+1)/2;
	
	cout<< res;

	
	return 0;
}