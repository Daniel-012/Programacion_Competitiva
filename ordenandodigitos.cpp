#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int n;
	int a;
	cin>> n;
	vector<int> num;
	
	for(int i=0;i<n;i++){
		cin>> a;
		num.push_back(a);
		
	}
		
	sort(num.begin(),num.end());
	
	
	for(int i=0; i<num.size();i++){
	cout<< num[i]<<"\n";
}
return 0;	
}
