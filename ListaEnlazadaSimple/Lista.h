#include"Nodo.h"
#include<iostream>
using namespace std;
class Lista{
private:
	Nodo *ptrPrimero, *ptrUltimo, *ptrAux;
	Nodo *nuevoNodo(short);
	public:
	void insertarPosicion(short, short);
	void insertarInicio(short);
	void insertarFinal(short);
	void eliminarInicio();
	void eliminarFinal();
	void EliminarPosicion(short);
	void mostrar();
	
	Lista(void);
	~Lista(void);
	
};
Lista::Lista(void){
	ptrPrimero = ptrUltimo = ptrAux = NULL;
}	
Lista::~Lista(){
	
}
void Lista::insertarInicio(short pDato){
	ptrAux = nuevoNodo(pDato);
	ptrAux->ptrSiguiente = ptrPrimero; //ENLACE
	if(ptrPrimero != NULL){//YA HAY NODOS CREADOS
		ptrPrimero = ptrAux;
	}else{
		ptrPrimero = ptrUltimo = ptrAux;
	}
	ptrAux = NULL;
}
void Lista::insertarFinal(short pDato){
	ptrAux = nuevoNodo(pDato);
	ptrAux->ptrSiguiente = NULL;
	if(ptrPrimero != NULL){
		ptrUltimo->ptrSiguiente = ptrAux;
		ptrUltimo = ptrAux;
		
		
	}else{
		ptrPrimero = ptrUltimo = ptrAux;
	}
	ptrAux = NULL;
}
void Lista::insertarPosicion(short pDato, short pos){
	
}
void Lista::eliminarInicio(){
	if(ptrPrimero != NULL){
		ptrAux = ptrPrimero;
		if(ptrPrimero == ptrUltimo){
			ptrPrimero = ptrUltimo = NULL;
		}else{
			ptrPrimero = ptrPrimero->ptrSiguiente;
		}
		cout<<"Valor a eliminar: "<<ptrAux->getDato()<<endl;
		delete ptrAux;
	}else{
		cout<<"No hay nodos creados."<<endl;
	}
	ptrAux=NULL;
}
void Lista::eliminarFinal(){
	if(ptrPrimero != NULL){
		ptrAux = ptrPrimero;
		if(ptrPrimero == ptrUltimo){
			ptrPrimero = ptrUltimo = NULL;
		}else{
			while(ptrAux->ptrSiguiente != ptrUltimo){
				ptrAux = ptrAux->ptrSiguiente;
			}
			ptrUltimo = ptrAux;
			ptrAux = ptrAux->ptrSiguiente;
			ptrUltimo->ptrSiguiente = NULL;
		}
		cout<<"Valor a eliminar: "<<ptrAux->getDato()<<endl;
		delete ptrAux;
		ptrAux = NULL;
	}else{
		cout<<"No hay nodos creados."<<endl;
	}
}
void Lista::EliminarPosicion(short){
	
}
void Lista::mostrar(){
	short contador = 0;
	if(ptrPrimero != NULL){
		
		ptrAux = ptrPrimero;
		do{
			cout<<"["<<++contador<<"] = "<<ptrAux->getDato()<<endl;
			ptrAux = ptrAux->ptrSiguiente;
		}
		while(ptrAux != NULL);
	}else{
		cout<<"No hay nodos creados."<<endl;
	}
}
Nodo *Lista::nuevoNodo(short pDato){
	return new Nodo(pDato);
}
