#include <iostream>
#include <vector>

using namespace std;

int main(){
	int a;
	cin>> a;
	
	
	vector<int> vec;
	vector<int> vec2;
	
	if(a == 1 ){
		cout<< 10 <<" "<< 1024;
	}else if( a == 2){
			cout<< 9 <<" "<< 1024;
	}else{
		for(int i=0;i<11;i++){
		if(a == 1 ){
			cout<< 10 <<" "<< 1024;
		}else if( a == 2){
			cout<< 9 <<" "<< 1024;
		}
		 if(a % 11-1 != 1){
			vec2.push_back(a);
			a=a*2;
			
		}else{
			vec.push_back(i);
		}
	}
}
	cout << vec[0]-1<<" "<<vec2[vec[0]-1] ;
	
	
	return 0;
}
