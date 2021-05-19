#include<iostream>
#include<iomanip>

using namespace std;

int main(){
	long long int p;
	float d;
	
	cin>>p>>d;
	
	cout<<fixed<<setprecision(2)<<p- (p*d/100);
	
	
	return 0;
}
