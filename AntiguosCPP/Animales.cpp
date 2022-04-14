#include<iostream>
#include<string>


using namespace std;

int main(){
	string izquierda;
	string media;
	string derecha;
	int aga=22;
	int pom=20;
	int hom=25;
	int vaca=31;
	int pulga=28;
	int lagar=25;
	int sang=30;
	int min=24;
	
	cin>> izquierda;
	cin>> media;
	cin>> derecha;
	
	if (izquierda.size()+media.size()+derecha.size()== aga){
		cout<<"aguia";
	}else 	if (izquierda.size()+media.size()+derecha.size()== pom){
		cout<<"pomba";
	}else	if (izquierda.size()+media.size()+derecha.size()== hom){
		cout<<"homem";
	}else	if (izquierda.size()+media.size()+derecha.size()+4== vaca && izquierda[0]=='v'){
		cout<<"vaca";
	}else	if (izquierda.size()+media.size()+derecha.size()== pulga){
		cout<<"pulga";
	}else	if (izquierda.size()+media.size()+derecha.size()-2== lagar && derecha[0]=='h'){
		cout<<"lagarta";
	}else	if (izquierda.size()+media.size()+derecha.size()== sang){
		cout<<"sanguessuga";
	}else	if (izquierda.size()+media.size()+derecha.size()-3== min ){
		cout<<"minhoca";
	}
	
	
return 0;	
}
