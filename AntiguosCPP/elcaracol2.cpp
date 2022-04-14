#include<iostream>
#include<vector>


using namespace std;

int main(){
	int p ;
	int s;
	int r;
	vector<int> vec;
	int b=0;
	int d=0;

	cin>> p>> s>> r;

	while(b<=p){
		b=b+s;
		d++;
		if(b>=p){
			vec.push_back(d);
		}
		b=b-r;


	}
	

	cout<< vec[0];
	
	
	return 0;
}