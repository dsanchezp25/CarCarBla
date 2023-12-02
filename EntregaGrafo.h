
#ifndef ENTREGAGRAFO_H_
#define ENTREGAGRAFO_H_

#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
using namespace std;

static const int MAX = 20;
struct ruta{
	string origen;
	string destino;
	int numCiudades;
	//camino almacenara la ruta a seguir para obtener el camino
	vector<string>camino[MAX];
	float kilometros;
//
//	ruta(int caminos): camino(caminos){}
};
class Grafo {
    int N;
    string Cjtovertices[MAX];
    float MatAdyacencia[MAX][MAX]; //fila(i) = origen, columna(j) = destino
    float MatFloyd [MAX][MAX];
    int MatP [MAX][MAX];
    int matPrioridad[MAX][MAX];
    int prioridades;
    vector<ruta>rutasGrafo;
    //Añadir los atributos y métodos que consideres necesarios

public:
    //constructor de grafo
    Grafo();
    void setTamanoVectorRuta(int caminos);

    //inicializa el numero de prioridades del grafo
    void setPrioridades(int prio);
    //devuelveel numero de prioridades del grafo
    int getPrioridades();

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

    void mostrarMatrizP();

    //crea la matriz de prioridades
    void matrizPrioridad(string cad1, string cad2, int prioridad);

    //camino minimo entre ciudades
    void caminosMinimos();

    //cantidad minima de carreteras que deben arreglarse por prioridad
    float kilometrosArreglados();

    //camino minimo entre ciudades con carreteras arregladas
    void caminosArreglados();
    //Añadir los métodos que consideres necesarios
};

#endif /* ENTREGAGRAFO_H_*/
