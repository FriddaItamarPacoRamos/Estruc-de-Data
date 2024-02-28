#include <iostream>
#include "vector.h"  //Declarar el header de la clase
#define MAX 10
using namespace std;
void main() {
	int vec[MAX], n, op;
	vector vector1;//declara una isntancia del vector o un onjeto 
	//Validando la entrada
	cout << "Ingrese el nunero de elementos <10";
	do {
		cout << "Ingrese el tamanio del vector : ";
		cin >> n;
	} while (n <= 0);
	vector1.set_n(n);//cambiando el valor del atributo del objeto
	//Desplegando menu
	do {
		cout << "-----       M E N Ú      -----" << endl;
		cout << "|1.- Cargar Vector.            |" << endl;
		cout << "|2.- Mostrar Vector.           |" << endl;
		cout << "|3.- Ordenar Vector.           |" << endl;
		cout << "|0.- Salir                     |" << endl;
		cout << "--------------------------------" << endl;
		cout << " Elija una opcion" << endl;
		cin >> op;
		switch (op) {
		case 1:
			vector1.cargarVector(vec, n);  //Llamar al metodo
			break;
		case 2:
			vector1.mostrarVector(vec, n);
			break;
		case 3:
			vector1.ordenarVector(vec, n);
			break;
		case 0:
			cout << "Salir" << endl;
			break;
		default:
			cout << "Error: Opcion no valida..." << endl;
			break;
		}
	} while (op != 0);
	
}
// mai no puede llamarse igual qu la clase, y no puedo tener dos clases con el mismo nomkbre
	//yo puedo utlizar para trabajar la clase pero no sus atributos 
