#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	int n;
	int c=0;
	
	cin>> n;

    vector<int> vec(n);
	
	for(int i=0;i<n;i++){
		cin>>vec[i];
	}
	
	for(int j=0;j<vec.size();j++){
		for(int i=0; i<vec.size()-1;i++){
			if(vec[i]>vec[i+1]){
				int tem=vec[i];
				vec[i]=vec[i+1];
				vec[i+1]=tem;
				c++;
			}
		}
	}
	
	cout<<c;
	
	
	return 0;
}