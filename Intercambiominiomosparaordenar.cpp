#include<iostream>
#include<vector>

using namespace std;

void burbuja(vector <int> vec){
	long long int c=0;
	for(int j=0;j<vec.size();j++){
		for(int i=0; i<vec.size()-1;i++){
			if(vec[i]>vec[i+1]){
				long long int tem=vec[i];
				vec[i]=vec[i+1];
				vec[i+1]=tem;
				c++;
			}
		}
	}

	cout<<c;
}


int main(){
	long long  int n;

	vector<int> vec;
	cin>> n;
	
	for(int i=0;i<n;i++){
		long long int b;
		cin>>b;
		vec.push_back(b);
	}
	
	burbuja(vec);
	
	
	return 0;
}
