#include <iostream>


using namespace std;

int main(){
	int x1;
	int y1;
	int x2;
	int y2;
	int x3;
	int y3;
	int x4;
	int y4;	
	
	cin>> x1>> y1 >> x2>>y2;
	cin>> x3>> y3>> x4 >> y4;
	
	int l1 = x2-x1;
	int l2 = y2-y1;
	int a1 = l1*l2;
	
	int l3 = x4-x3;
	int l4 = y4-y3;
	int a2 = l3*l4;
	
	int l5 = x2-x3;
	int l6 = y2-y3;
	int a3 = l5*l6;	
	
	int at= a1+a2-a3;
	
	cout << at;
	
	return 0;
}
