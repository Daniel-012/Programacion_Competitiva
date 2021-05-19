#include<iostream>
#include<string>

using namespace std;

int main(){
    string cadena;
    char x;
    int sum=0;
    cin>> cadena;

    for(int i=0; i<cadena.size(); i++){           
        if( cadena[i]== 'a' ||   'A'){
            sum=sum+65;
        }else if( cadena[i]== 'b' ||  'B'){
            sum=sum+66;
        }else if( cadena[i]== 'c' ||   'C'){
            sum=sum+67;
        }else if( cadena[i]== 'd' ||  'D'){
            sum=sum+68;
        }else if( cadena[i]== 'e' ||  'E'){
            sum=sum+69;
        }else if( cadena[i]== 'f' ||   'F'){
            sum=sum+70;
        }else if( cadena[i]== 'g' ||  'G'){
            sum=sum+71;
        }else if( cadena[i]== 'h' || 'H'){
            sum=sum+72;
        }else if( cadena[i]== 'i' ||  'I'){
            sum=sum+73;
        }else if( cadena[i]== 'j' ||  'J'){
            sum=sum+74;
        }else if( cadena[i]== 'k' || 'K'){
            sum=sum+75;
        }else if( cadena[i]== 'l' ||  'L'){
            sum=sum+76;
        }else if( cadena[i]== 'm' ||  'M'){
            sum=sum+77;
        }else if( cadena[i]== 'n' ||  'N'){
            sum=sum+78;
        }else if( cadena[i]== 'o' ||  'O'){
            sum=sum+79;
        }else if( cadena[i]== 'p' ||  'P'){
            sum=sum+80;
        }else if( cadena[i]== 'q' ||  'Q'){
            sum=sum+81;
        }else if( cadena[i]== 'r' ||  'R'){
            sum=sum+82;
        }else if( cadena[i]== 's' ||  'S'){
            sum=sum+83;
        }else if( cadena[i]== 't' ||  'T'){
            sum=sum+84;
        }else if( cadena[i]== 'u' ||  'U'){
            sum=sum+85;
        }else if( cadena[i]== 'v' ||  'V'){
            sum=sum+86;
        }else if( cadena[i]== 'w' ||  'W'){
            sum=sum+87;
        }else if( cadena[i]== 'x' ||  'X'){
            sum=sum+88;
        }else if( cadena[i]== 'y' ||  'Y'){
            sum=sum+89;
        }else if( cadena[i]== 'z' ||  'Z'){
            sum=sum+90;
        }
    }
    
    cout << sum;




    return 0;
}