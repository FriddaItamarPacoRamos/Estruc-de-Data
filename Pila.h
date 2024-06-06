#ifndef PILA_H
#define PILA_H

class Pila {
private:
    int *pila;    // Puntero al arreglo dinámico que almacena los elementos de la pila
    int cima;     // Índice del elemento en la cima de la pila
    int capacidad;  // Capacidad actual de la pila

    void redimensionar();  // Método para redimensionar la pila cuando se queda sin espacio

public:
    Pila();  // Constructor
    ~Pila();  // Destructor
    bool Apilar(int elemento);  // Método para añadir un elemento a la pila
    bool Desapilar();  // Método para eliminar el elemento superior de la pila
    bool CimaPila(int &elemento);  // Método para obtener el elemento en la cima de la pila
    void LimpiarPila();  // Método para vaciar la pila
    void VerPila();  // Método para mostrar todos los elementos de la pila
    bool PilaVacia();  // Método para comprobar si la pila está vacía
    bool Iguales(Pila p);  // Método para comparar dos pilas
    void EliminarRepetidos();  // Método para eliminar elementos repetidos de la pila
};

#endif // PILA_H
