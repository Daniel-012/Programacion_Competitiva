#include<bits/stdc++.h>

using namespace std;

int main() {
    int countMin = 2;
    int digito = 5;
    vector<int> vec ;

    for(int i = 11098; i <= 98123; i+=1){
        int num = i;
        int antNum = num / 10;
        bool yes = true;
        int count = num % 10 == 5 ? 1 : 0 ;
        while (antNum > 0){
            if ( num % 10 < antNum % 10 ){
                yes = false;
              break;
            }else{
                if ( antNum %10 == 5){
                    count +=1;
                }
                num = antNum;
                antNum = antNum / 10;
            }
        }

        if ( yes  && count >= countMin){
              vec.push_back(i);
        }
        
    }

    for (int i = 0; i < vec.size(); i += 1){
        cout << i << '-' << vec[i] << '\n';
    }

    return 0;
}