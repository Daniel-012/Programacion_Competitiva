#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int can;
	int juego;
	int n;
	
	cin>> can>> juego; 
	
	vector<int > num;
	
	for(int i=0;i<can;i++){
		cin>> n;
		num.push_back(n);
	}
	
	sort(num.begin(),num.end());
	
	for(int i=0;i<num.size();i++){
		if(num[i]== juego){
			cout<<i+1;
		}	
	}
	
	
	return 0;
}
