#include<bits/stdc++.h>
#include<windows.h>

using namespace std;
void gotoxy(int x,int y);
void cuadro(int x1, int y1, int x2, int y2);
int vec[]= {101, 102, 103, 104, 105, 106,201, 202, 203, 204, 205, 206,301,302, 303, 304, 305, 306,3401, 402, 403, 404, 405, 406,501, 502, 503, 504, 505, 506,601, 602, 603, 604, 605, 606 };
int ho, mi, re;
bool sal= true;
string cl= "Maestro";

struct nodo{
    int a;
    int r;
    int ina;
    bool pas= false;
};

nodo base[38][42]= {};

int Pos(string& g ){
    int x= g[0]-'0';
        if( x== 1){
            x= g[2]-'0';
        }else if( x==2){
            x= g[2]-'0';
            x+= 6;
        }else if (x==3 ){
            x= g[2]-'0';
            x+= 12;
        }else if (x==4 ){
            x= g[2]-'0';
            x+= 18;
        }else if (x==5 ){
            x= g[2]-'0';
            x+= 24;
        }else if (x==6 ){
            x= g[2]-'0';
            x+= 30;
        }




    return x;
}




void mostrar(){
    string grupo;
    int c;
    do{
        cout<<"Ingrese El Grupo Que Deasea Ver::  ";
        cin>> grupo;
        int x= Pos(grupo);

        cout<< "Alumno---Puntual---Retardo---inasistencia\n";
        for( int i=1; i<42; i++){
            cout<<i<<"\t   "<<base[x][i].a<<"\t"<<base[x][i].r<<"\t"<<base[x][i].ina<<"\n";
        }

        cout<<"Preseione 0 Para Salir o 1 Para Ver Otro Grupo:: ";
        cin>> c;
    }while( c==1);
    return ;
}



void Maestro(){
	int m;
	while (1){
	    system("cls");
	    cuadro(1,1,77, 3);
	    gotoxy(20, 2);
	    cout<<"BIENVENIDO PROFESOR :) ";
	    gotoxy( 0, 6);
	    
    
        cout<<"+Que Es Lo que Desea Hacer Hoy?\n\n";
        cout<<"\t1- Cambiar Tiempo de Retardo.\n";
        cout<<"\t2- Cambiar Clave.\n";
        cout<<"\t3- Ver Lista De Asistencia del Dia De Hoy.\n";
        cout<<"\t4- Cerrar Programa y Guardar Datos.\n";
        cout<<"\t5- Continuar\n\n";

        cout<<"Ingrese El Numero Elejido # ";
        cin>> m;
        system("cls");
        if( m==1){
            cout<<"Ingrese el Nuevo Tiempo De Retardo :: ";
            cin>> re;

        }else if( m==2){
            cout<<"Ingrese la Nueva Clave:: ";
			cin>> cl;
        }else if(m==3){
        	mostrar();
            
        }else if( m== 4){
        	sal=false;
            return;
            break;
		}else{
            return;
        }

        
    }
    
    
}

int convertir( string g){
    int sum=0;
    sum+= (g[0]-'0')*100;
    sum+= (g[1]-'0')*10;
    sum+= (g[2]-'0')*1;

    //cout<<sum<<" ";
    return sum;
}




void rellenar(int& x){
    for( int i=0; i<42; i++){
        if( base[x][i].pas== true){
            continue;
        }
        base[x][i].ina++;
        base[x][i].pas=true;
    }


}

bool che( int& pro){
    for( int i=0; i<36; i++){
        if( vec[i]== pro){
            return false;
        }
    }
    return true;
}





void inicio( ){
	gotoxy( 0, 6);
	
    int n;
    int minu=0;
    int segu=0;

    cout<<"\nInserte Tiempo en Minutos de Retardo";
    cout<<"\nNota: Pasados Este Tiempo Se Seguira Tomando lista Pero con Inasistencia:: ";
    cin>> re;
    cout<<"\nNota: Inicialmente son 5 minutos para entrar sin ningun problema :)\n ";
	system("pause");

    while( sal){
        system("cls");// limpia la Pantalla

        cuadro(1,1,77, 3);
        gotoxy(20, 2);
        cout<<"BIENVENIDO ALUMNO DEL PLANTEL 11 ";
        gotoxy( 0, 6);
        int alum;
        int pro;
        string  grupo;
        cout<<"Ingresa Tu Grupo:: \n";
        cin>> grupo;
        pro = convertir(grupo);
        if( grupo== cl){
            Maestro();
            system("cls");
            if( sal== false){
                return;
        	    break;
			}
            cout<<"Ingrese El Grupo:: ";
        	cin>> grupo;
            pro = convertir(grupo);
        }

        while( grupo!= cl  && che(pro)  ){
            cout<<"Ingrese El Grupo:: \n";
            cin>> grupo;
            pro = convertir(grupo);
            if( grupo== cl){
                Maestro();
                system("cls");
                if( sal== false){
                    return;
                    break;
                }
                cout<<"Ingrese El Grupo:: ";
                cin>> grupo;
                
            }
        }
        

        cout<< "Ingresa el Numero de Alumnos:: ";
        cin>>alum;
        system("cls");
        cuadro(1,1,77, 3);
        gotoxy(20, 2);

        cout<<"BIENVENIDO GRUPO "<<grupo;
        gotoxy(0, 6);
        

        int x= Pos( grupo);
        int p;
        int ant=0;
		
        while(sal && alum>0){
			cout<<"\n-Eres De Este Grupo Si=1 No=0 ? ";
			cin>>p;
			if( p== 0){
				break;
			}
            cout<<"Ingresa Tu Numero De lista # ";
            cin>> n;
            cout<<"Ingresa los Minutos Transcurridos Desde La Hora de Entrada :: ";
            cin>> minu;

            if( minu== -1){
                break;
            }
            if( ant>minu){
                cout<<"\n\nEstas Mintiendo Vuelve a Intentarlo :(\n";
                continue;
            }

            if( minu<= 5){
                base[x][n].a++;
                base[x][n].pas= true;
            }else if( minu<= re){
                base[x][n].r++;
                base[x][n].pas= true;
            }else{
                base[x][n].ina++;
                base[x][n].pas= true;
            }
            ant= minu;
            alum--;

            //system("cls");

        }

        if(alum>0){
            rellenar(x);
        }

    }

	return ;


}





int main(){
    system("color 1F");
    cuadro(1,1,77, 3);
    gotoxy(20, 2);
    cout<<"BIENVENIDO AL FUTURO ;) ";
    inicio( );
    
    cout<<"\nNos Vemos :)\n";
	system("pause");
    
    return 0;
}




void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
}

void cuadro(int x1, int y1, int x2, int y2){
    int i;
    for (i=x1;i<x2;i++){	
		gotoxy(i,y1);printf("-") ; //linea horizontal superior 
		gotoxy(i,y2);printf("-") ; //linea horizontal inferior
    }

    for (i=y1;i<y2;i++){	
		gotoxy(x1,i);printf("|") ; //linea vertical izquierda
		gotoxy(x2,i);printf("|") ; //linea vertical derecha
    }
    
    gotoxy(x1,y1); printf("+"); 
    gotoxy(x1,y2); printf("+");
    gotoxy(x2,y1); printf("+");
    gotoxy(x2,y2); printf("+");
}
