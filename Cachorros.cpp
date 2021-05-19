#include<iostream>

using namespace std;

int main(){

	int c;
	int p;
	int h;

	cin>> c>> p>> h;

	int suma= p;

	c= c-p;

	int res;

	res= c % (h+1);

	suma= suma + res;

	cout<<suma;


	return 0;
}
