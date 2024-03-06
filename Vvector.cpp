#include<iostream>
#include "Vector.h"//es obligatpria
#define MAX 100
using namespace std;
int main()
{
	int tamanio, v[MAX];
	Vector vector1;//declara objeto, instancia de la clase
	cout << "Ingresar el numero de elementos:";
	do {
		cin >> tamanio;
	} while (tamanio > MAX || tamanio < 0);
	vector1.set_n(tamanio); //cambia el vaor del atributo n de 
	vector1.cargar(tamanio, v);
	vector1.mostrar(v);

}
