#include<bits/stdc++.h>




using namespace std;

int main(){
    int n;
    vector<char> vec= {'a', 'b', 'c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

    cin>> n;
    int y= n*2-2;
    int x= n*3;
    int j;
    int i;
    cout<<"Matriz Z:"<<"\n";
    for(i=0; i<x-2; i++){
        cout<< vec[i]<<" ";
        if( i> n-2){
            cout<<"\n";
            i++;
            for(i; i<x-2; i++){
                 y= y-2;
                for(j=y; j!=0; j--){
                    cout<<" ";
                }
                cout<< vec[i]<<"\n";
               
                if( i> (n*2)-4){
                    i++;
                    for(i; i<x-2; i++){
                        cout<< vec[i]<<" ";
                    }
                }
            }
        }
    }

    cout<<"\n"<<"La matriz Z invertida es:"<<"\n";
    y=0;
    for(i=n-1; i!=-1; i--){
        cout<<vec[i]<<" ";
    }
    cout<<"\n";
    for(i= n; i<n*2-2; i++){
        y+=2;
        for(j=0; j<y; j++){
            cout<<" ";
        }
        cout<< vec[i]<<"\n";
    }
    for(i=n*3-3; i!=n*2-3; i--){
        cout<<vec[i]<<" ";
    }


    return 0;
}