#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int p, d, q;

    cin>> p>> d>>q;

    vector<int> vec(p+1);
    vector<bool> actu(p+1, false);
    vector<bool> todos(p+1, false);
    vector<vector<int>> mat(p+1);

    int a;
    int j;
    int x;

    for(int i=0; i<d; i++){
        cin>> a>> j;
        while (j!=0){
            cin>> x;
            mat[a].push_back(x);
            j--;
        }
    }
    int k=0;
    int z=0;
    int c=0;

    for(int i=0; i<q; i++){
        todos= actu;
        cin>> j;
        while( j!=0){
            cin>> x;
            todos[x]= true;
            vec.push_back(x);
            j--;
        }

        for(k=0; k<vec.size(); k++){
            todos[vec[k]]= false;
            for(z=0; z<mat[vec[k]].size(); z++){
                todos[mat[vec[k]][z]]= true;
            }
        }
        c=0;
        for(j=0; j<p; j++ ){
            if(todos[j]== false){
                c++;
            }
        }

        if(c== p){
            cout<<"S\n";
        }else{
            cout<<"N\n";
        }


    }




    return 0;
}