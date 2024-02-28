#pragma once
class vector
{
private:
	int vec[10], n;
public:
	vector(void); // constructor
	~vector(void); //destructor
	void set_n(int _n);
	int get_n();
	void cargarVector(int vec[], int n); //metodos
	void mostrarVector(int vec[], int n);
	void ordenarVector(int vec[], int n);//metodo de la burbuja
};
