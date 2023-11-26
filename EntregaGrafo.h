#ifndef ENTREGAGRAFO_H_
#define ENTREGAGRAFO_H_

#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

static const int MAX = 20;

class Grafo {
    int N;
    string Cjtovertices[MAX];
    float MatAdyacencia[MAX][MAX]; //fila(i) = origen, columna(j) = destino
    float MatFloyd [MAX][MAX];
    int MatP [MAX][MAX];
    //Añadir los atributos y métodos que consideres necesarios

public:
    //constructor de grafo
    Grafo();

    //inserta la ciudad en el conjunto de vertices
    void insertarVertice(string cad1);

    /*
     * inserta la distancia entre ciudades (coste) en la matriz de adyacencia
     * hay coste, por lo tanto, el grafo es ponderado
     *
     * crea la matriz de adyacencia a partir del conjunto de vertices
     * y
     */
    void insertarArista(string cad1, string cad2, float coste);

    //busca la ciudad pasada por parametro en el conjunto de vertices
    int buscarPosicion (string cad1);

    //crea la matriz de Floy a partir de la matriz de adyacencia
    void Floyd();

    //
    void Camino(int i, int j, int MatP[MAX][MAX]);

    //muestra la matriz de adyacencia
    void MostrarMatrizAdy();

    //muestra la matriz de Floyd
    void mostrarMatrizFloid();

    //Añadir los métodos que consideres necesarios
}; 

#endif /* ENTREGAGRAFO_H_*/
