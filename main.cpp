#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;


struct Nodo{
	int dato;
	Nodo *siguiente;
}; 

void insertarPila(Nodo *&pila, int n);
void quitarenPila(Nodo *&pila, int &n);
int main(){
	Nodo *pila=NULL;
	int dato,a;
	cout<<"Dame los nodos que se quiere: ";
	cin>>a;
	for(int i=0; i<a; i++){
		cout<<"Digite un numero"<<endl;
		cin>>dato;
		insertarPila(pila, dato);
	}	
	
	
	cout<<"La salida de los elementos es la siguiente: ";
	while(pila != NULL){
		quitarenPila(pila,dato);
		if(pila != NULL){
			cout<<dato<<" , ";
		}
		else{
			cout<<dato<<" . ";
		}
	}
	
	getch();
	return 0;
	
}
void insertarPila(Nodo *&pila, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo -> dato = n;
	nuevo_nodo -> siguiente = pila;
	pila = nuevo_nodo;
}

void quitarenPila(Nodo *&pila, int &n){
	Nodo *aux = pila;
	n = aux -> dato ;
	pila = aux -> siguiente;
	delete aux;
}
