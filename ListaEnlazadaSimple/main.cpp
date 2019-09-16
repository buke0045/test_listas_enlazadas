#include<iostream>
using namespace std;
#include"Lista.h"
int main (int argc, char *argv[]) {
	short opt =0;
	short num =0;
	Lista objLista;
	
	
	do{
		system("cls");
		cout<<"---MENU---\n\n"<<endl;
		cout<<"1. Insertar al Inicio."<<endl;
		cout<<"2. Insertar al Final."<<endl;
		cout<<"3. Insertar en Posiciones."<<endl;
		cout<<"4. Eliminar al Inicio."<<endl;
		cout<<"5. Eliminar al Final."<<endl;
		cout<<"6. Eliminar en Poiscion."<<endl;
		cout<<"7. MOSTRAR."<<endl;
		cout<<"8. Salir."<<endl;
		cout<<"Opcion---> "; cin>>opt;
		switch(opt){
		case 1:
			cout<<"\n-----INSERTAR AL INICIO----\n\n";
			cout<<"Digite el numero que desea agregar."<<endl;
			cout<<"Numero--> ";cin>>num;
			objLista.insertarInicio(num);
			cout<<"Numero agregado correctamente."<<endl;
			break;
		case 2:
			cout<<"\n-----INSERTAR AL FINAL----\n\n";
			cout<<"Digite el numero que desea agregar."<<endl;
			cout<<"Numero--> ";cin>>num;
			objLista.insertarFinal(num);
			cout<<"Numero agregado correctamente."<<endl;
			break;
		case 3:
			
			break;
		case 4:cout<<"\n-----ELIMINAR AL INICIO----\n\n";
			objLista.eliminarInicio();
			break;
		case 5:
			cout<<"\n-----ELIMINAR AL FINAL----\n\n";
			objLista.eliminarFinal();
			break;
		case 6:
			break;
		case 7:
			objLista.mostrar();
			break;
		case 8:
			break;
		default:
			cout<<"/nOpcion incorrecta, intentelo nuevamente."<<endl;
			break;
		}
		system("pause>NULL");
	}while(opt!= 8);
	
	return 0;
}

