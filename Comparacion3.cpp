#include<iostream>


using namespace std;

void comparar(int n1, int n2, int n3, int n4, int n5){
	if(n1==n2 && n1==n3 && n1==n4 && n1==n5){
		cout<< "Identicamente iguales";
	}else if(n1!=n2 && n1==n3 && n1==n4 && n1==n5){
		cout<< "Muy Iguales";
	}else if(n1==n2 && n1!=n3 && n1==n4 && n1==n5){
		cout<< "Muy Iguales";
	}else if(n1==n2 && n1==n3 && n1!=n4 && n1==n5){
		cout<< "Muy Iguales";
	}else if(n1==n2 && n1==n3 && n1==n4 && n1!=n5){
		cout<< "Muy Iguales";
	}else if(n1!=n2 && n1!=n3 && n1==n4 && n1==n5)  {
		cout<< "Iguales";
	}else if(n1==n2 && n1!=n3 && n1!=n4 && n1==n5)  {
		cout<< "Iguales";
	}else if(n1==n2 && n1==n3 && n1!=n4 && n1!=n5)  {
		cout<< "Iguales";
	}else if(n1!=n2 && n1==n3 && n1==n4 && n1!=n5)  {
		cout<< "Iguales";
		
	}else if(n1!=n2 && n1!=n3&& n1==n4 && n1!=n5)    {
		cout<< "Diferentes";
	}else if(n1!=n2 && n1==n3 && n1!=n4 && n1!=n5)    {
		cout<< "Diferentes";
	}else if(n1==n2 && n1!=n3 && n1!=n4 && n1!=n5)    {
		cout<< "Diferentes";
	}else if(n2!=n1 && n2==n3 && n2==n4 && n2==n5){
		cout<< "Muy Iguales";
	}else if(n2==n1 && n2!=n3 && n2==n4 && n2==n5){
		cout<< "Muy Iguales";
	}else if(n2==n1 && n2==n3 && n2!=n4 && n2==n5){
		cout<< "Muy Iguales";
	}else if(n2==n1 && n2==n3 && n2==n4 && n2!=n5){
		cout<< "Muy Iguales";
	}else if(n2!=n1 && n2!=n3 && n2==n4 && n2==n5)  {
		cout<< "Iguales";
	}else if(n2==n1 && n2!=n3 && n2!=n4 && n2==n5)  {
		cout<< "Iguales";
	}else if(n2==n1 && n2==n3 && n2!=n4 && n2!=n5)  {
		cout<< "Iguales";
	}else if(n2!=n1 && n2==n3 && n2==n4 && n2!=n5)  {
		cout<< "Iguales";
	}else if(n2!=n1 && n2!=n3 && n2!=n4 && n2==n5)    {
		cout<< "Diferentes";
	}else if(n2!=n1 && n2!=n3 && n2==n4 && n2!=n5)    {
		cout<< "Diferentes";
	}else if(n2!=n1 && n2==n3 && n2!=n4 && n2!=n5)    {
		cout<< "Diferentes";
	}else if(n2==n1 && n2!=n3 && n2!=n4 && n2!=n5)    {
		cout<< "Diferentes";
	}else if(n3!=n2 && n3==n1 && n3==n4 && n3==n5){
		cout<< "Muy Iguales";
	}else if(n3==n2 && n3!=n1 && n3==n4 && n3==n5){
		cout<< "Muy Iguales";
	}else if(n3==n2 && n3==n1 && n3!=n4 && n3==n5){
		cout<< "Muy Iguales";
	}else if(n3==n2 && n3==n1 && n3==n4 && n3!=n5){
		cout<< "Muy Iguales";
	}else if(n3!=n2 && n3!=n1 && n3==n4 && n3==n5)  {
		cout<< "Iguales";
	}else if(n3==n2 && n3!=n1 && n3!=n4 && n3==n5)  {
		cout<< "Iguales";
	}else if(n3==n2 && n3==n1 && n3!=n4 && n3!=n5)  {
		cout<< "Iguales";
	}else if(n3!=n2 && n3==n1 && n3==n4 && n3!=n5)  {
		cout<< "Iguales";
	}else if(n3!=n2 && n3!=n1 && n3!=n4 && n3==n5)    {
		cout<< "Diferentes";
	}else if(n3!=n2 && n3!=n1&& n3==n4 && n3!=n5)    {
		cout<< "Diferentes";
	}else if(n3!=n2 && n3==n1 && n3!=n4 && n3!=n5)    {
		cout<< "Diferentes";
	}else if(n3==n2 && n3!=n1 && n3!=n4 && n3!=n5)    {
		cout<< "Diferentes";
	}else if(n4!=n2 && n4==n3 && n4==n1 && n4==n5){
		cout<< "Muy Iguales";
	}else if(n4==n2 && n4!=n3 && n4==n1 && n4==n5){
		cout<< "Muy Iguales";
	}else if(n4==n2 && n4==n3 && n4!=n1 && n4==n5){
		cout<< "Muy Iguales";
	}else if(n4==n2 && n4==n3 && n4==n1 && n4!=n5){
		cout<< "Muy Iguales";
	}else if(n4!=n2 && n4!=n3 && n4==n1 && n4==n5)  {
		cout<< "Iguales";
	}else if(n4==n2 && n4!=n3 && n4!=n1 && n4==n5)  {
		cout<< "Iguales";
	}else if(n4==n2 && n4==n3 && n4!=n1 && n4!=n5)  {
		cout<< "Iguales";
	}else if(n4!=n2 && n4==n3 && n4==n1 && n4!=n5)  {
		cout<< "Iguales";
	}else if(n4!=n2 && n4!=n3 && n4!=n1 && n4==n5)    {
		cout<< "Diferentes";
	}else if(n4!=n2 && n4!=n3&& n4==n1 && n4!=n5)    {
		cout<< "Diferentes";
	}else if(n4!=n2 && n4==n3 && n4!=n1 && n4!=n5)    {
		cout<< "Diferentes";
	}else if(n4==n2 && n4!=n3 && n4!=n1 && n4!=n5)    {
		cout<< "Diferentes";
	}else if(n5!=n2 && n5==n3 && n5==n4 && n5==n1){
		cout<< "Muy Iguales";
	}else if(n5==n2 && n5!=n3 && n5==n4 && n5==n1){
		cout<< "Muy Iguales";
	}else if(n5==n2 && n5==n3 && n5!=n4 && n5==n1){
		cout<< "Muy Iguales";
	}else if(n5==n2 && n5==n3 && n5==n4 && n5!=n1){
		cout<< "Muy Iguales";
	}else if(n5!=n2 && n5!=n3 && n5==n4 && n5==n1)  {
		cout<< "Iguales";
	}else if(n5==n2 && n5!=n3 && n5!=n4 && n5==n1)  {
		cout<< "Iguales";
	}else if(n5==n2 && n5==n3 && n5!=n4 && n5!=n1)  {
		cout<< "Iguales";
	}else if(n5!=n2 && n5==n3 && n5==n4 && n5!=n1)  {
		cout<< "Iguales";
	}else if(n5!=n2 && n5!=n3 && n5!=n4 && n5==n1)    {
		cout<< "Diferentes";
	}else if(n5!=n2 && n5!=n3&& n5==n4 && n5!=n1)    {
		cout<< "Diferentes";
	}else if(n5!=n2 && n5==n3 && n5!=n4 && n5!=n1)    {
		cout<< "Diferentes";
	}else if(n5==n2 && n5!=n3 && n5!=n4 && n5!=n1)    {
		cout<< "Diferentes";
	}else  {
		cout<< "Muy diferentes";
	}
	
	
	
}



int main(){
	int a;
	int b;
	int c;
	int d;
	int e;

	cin>> a>>b>>c>>d>>e ;
		if (a>=1 && a<=100 && b>=1 && b<=100 &&c>=1 && c<=100 &&d>=1 && d<=100 && e>=1 && e<=100 ){
		comparar(a,b,c,d,e);
		}else{ cout <<"error";
		}
	
	return 0;
}
