#include<iostream>
#include<string>

using namespace std;

int main(){
	string palabra1;
	string palabra2;
	
	getline(cin, palabra1);
	
	for(int i =1; i<=palabra1.size(); i++){
		palabra2.push_back(palabra1[palabra1.size()-i]);
			}
			
cout << palabra2;
	
	
	return 0;
}
