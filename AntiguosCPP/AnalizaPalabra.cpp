#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string pa;
    int a=0, e=0, i=0, o=0, u=0;

    cin>> pa;

    for(int j=0; j<pa.size(); j++){
        if(pa[j]== 'a' || pa[j]=='A'){
            a++;
        }else if(pa[j]== 'e' || pa[j]=='E'){
            e++;
        }else if(pa[j]== 'i' || pa[j]=='I'){
            i++;
        }else if(pa[j]== 'o' || pa[j]=='O'){
            o++;
        }else if(pa[j]== 'u' || pa[j]=='U'){
            u++;
        }

    }
    cout<<pa.size()<<"\n";
    cout<<a+e+i+o+u<<"\n";
    reverse(pa.begin(), pa.end());
    cout<<pa;



    return 0;
}