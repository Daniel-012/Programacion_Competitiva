#include<bits/stdc++.h>

using namespace std;

int main(){
    int x=999;
    int i=0;
    int c;
    int f;
    int n;
    int mas=0;
    cin>>f;

    vector<char> actual(500);
    vector<char> des(500);
    vector<bool> vec(500);

    actual[499]= '2';
    vec[499]= true;

    for(i=0; i<f-1; i++){
        n=499;
        while(vec[n] != false){
            c=actual[n]-'0';
            c= c*2 + mas;
            if(c>= 10){
                c=c-10;
                mas=1;
            }else{
                mas=0;
            }

            des[n]= c + '0';
            vec[n]= true;
            n--;
        }
        actual= des;

        if(mas != 0){
            actual[n]= 1 + '0';
            vec[n]= true;
            mas=0;
        }
    }    

    if(f== 0){
        cout<<1;
    }else if( f== 1){
        cout<<2;
    }else{
        for(i=0; i<500; i++){
            if( vec[i]== true){
                cout<<actual[i];
            }
        
        }

    }

    

    
    
    


    return 0;
}