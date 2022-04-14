#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    
    long int c=0;

    getline( cin, s);

    long int i=s.size()-1;

    while(s[i] == 'a' ){
        c++;
        i--;
    }
    cout<< c;

    return 0;
}