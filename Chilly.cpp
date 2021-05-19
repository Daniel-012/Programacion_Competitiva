#include <bits/stdc++.h>

using namespace std;

struct nodo
{
    int pos;
    double contador=0;
};

bool poruna(string x, string y)
{
    short int c = 0;
    for (int i = 0; i < x.size(); i++)
    {
        if (x[i] != y[i])
        {
            c++;
        }
        if (c >= 2)
        {
            return false;
        }
    }

    return true;
}

bool menor(string mayor, string menor)
{
    bool u = true;
    bool b = true;
    for (int i = 0; i < menor.size(); i++)
    {
        if (mayor[i] != menor[i])
        {
            u = false;
            break;
        }
    }

    int j=menor.size()-1;
    

    for (int i = mayor.size()-1; i >=0; i-- )
    {
        if (mayor[i] != menor[j] && j>=0)
        {
            b = false;
            break;
        }
        j--;
    }
    
    if( u==b){
        return false;
    }else{
        return true;
    }

    
}

double busca( vector<vector<nodo>>& combi, vector<int>& vec){
    int i=0;
    double c=0;
    queue<nodo> cola;
    vector<bool> pas(combi.size(), false);
    vector<bool> ant(combi.size(), false);


    cola.push(combi[vec[i]][0]);


    while( i<= vec.size()){
        
        nodo actual= cola.front();
        cola.pop();


        if( actual.pos== vec[i]){
            if( actual.pos== vec[vec.size()-1]){
                return actual.contador;
            }
            
            c = actual.contador+0.2;
            //cout<<actual.contador<<" ";
            pas= ant;
            i++;


            while( !cola.empty()){
                cola.pop();
            }
            cola.push(combi[vec[i]][0]);
            actual= cola.front();
            actual.contador=c;
            cola.pop();


        }

        for(int l=0; l< combi[actual.pos].size(); l++){
        nodo vecino= combi[actual.pos][l];
        vecino.contador= actual.contador+ 0.2;
        
        if(  pas[vecino.pos]== true  ){
            continue;
        }
        pas[vecino.pos]= true;
        //cout<<vecino.contador<<" ";
        cola.push(vecino);

        
            
        }


    }


    return c;

}





int main()
{
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);

    int a;
    int b;
    int i = 0;
    int j = 0;

    cin >> a >> b;

    vector<string> rap(a);
    vector<vector<nodo>> combi(a);
    vector<int> vec(b);

    nodo g;

    for (i = 0; i < a; i++)
    {
        cin >> rap[i];
    }

    for (i = 0; i < b; i++)
    {
        cin >> j;
        j--;
        vec[i] = j;
    }

    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a; j++)
        {
            if (i == j)
            {
                continue;
            }

            if (rap[i].size() == rap[j].size())
            {
                if (poruna(rap[i], rap[j]))
                {
                    g.pos=j;
                    combi[i].push_back(g);
                }
            }

            if (rap[j].size() < rap[i].size())
            {
                if (menor(rap[i], rap[j]))
                {
                    g.pos=j;
                    combi[i].push_back(g);
                }
            }

            if (rap[j].size() > rap[i].size())
            {
                if (menor(rap[j], rap[i]))
                {
                    g.pos=j;
                    combi[i].push_back(g);
                }
            }
        }
    }

    double fg =busca(combi, vec);


    cout<<fixed<<setprecision(1)<<fg;

    return 0;
}