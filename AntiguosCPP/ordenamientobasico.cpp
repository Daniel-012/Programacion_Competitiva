#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int a;
	int num;
	cin>> a;
	vector<int> vec;
	
	for(int i=0;i<a; i++){
		cin>> num;
		vec.push_back(num);
	}
	
	sort(vec.begin(),vec.end());
	
	for(int i=0;i<vec.size();i++){
		cout<<vec[i]<<"\n";
	}
	
	
	
	
	
	
	
	return 0;
}
