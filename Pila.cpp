#include <iostream>
#include <set>
#include "pila.h"

using namespace std;

Pila::Pila() {
    capacidad = 10;  // Capacidad inicial de la pila
    pila = new int[capacidad];
    cima = -1;
}

Pila::~Pila() {
    delete[] pila;  // Liberamos la memoria asignada
}

void Pila::redimensionar() {
    int nuevaCapacidad = capacidad * 2;
    int *nuevaPila = new int[nuevaCapacidad];
    for (int i = 0; i <= cima; i++) {
        nuevaPila[i] = pila[i];
    }
    delete[] pila;
    pila = nuevaPila;
    capacidad = nuevaCapacidad;
}

bool Pila::Apilar(int elemento) {
    bool res;
    if (cima == capacidad - 1) {
        redimensionar();  // Redimensionamos la pila si está llena
    }
    cima++;
    pila[cima] = elemento;
    res = true;
    return res;
}

bool Pila::Desapilar() {
    bool res;
    if (cima == -1) {
        cerr << "Se está intentando quitar un elemento de una pila vacía (underflow)" << endl;
        res = false;
    } else {
        cima--;
        res = true;
    }
    return res;
}

bool Pila::CimaPila(int &elemento) {
    bool res;
    if (PilaVacia()) {
        cerr << "Se está intentando quitar un elemento de una pila vacía (underflow)" << endl;
        res = false;
    } else {
        elemento = pila[cima];
        res = true;
    }
    return res;
}

void Pila::LimpiarPila() {
    cima = -1;
}

void Pila::VerPila() {
    for (int i = 0; i <= cima; i++) {
        cout << pila[i] << endl;
    }
}

bool Pila::PilaVacia() {
    return cima == -1;
}

bool Pila::Iguales(Pila p) {
    bool iguales = true;
    if (cima != p.cima) {
        iguales = false;
    } else {
        for (int i = 0; i <= cima; i++) {
            if (pila[i] != p.pila[i]) {
                iguales = false;
                break;
            }
        }
    }
    return iguales;
}

void Pila::EliminarRepetidos() {
    set<int> elementosUnicos;
    int nuevaCima = -1;

    for (int i = 0; i <= cima; i++) {
        if (elementosUnicos.find(pila[i]) == elementosUnicos.end()) {
            elementosUnicos.insert(pila[i]);
            pila[++nuevaCima] = pila[i];
        }
    }
    cima = nuevaCima;
}
