
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

    /*PRE:
    *POST: inicializa las variables
    */
    //constructor de grafo
    Grafo();

    /*PRE: 0 < prio <= MAX
     *POST: inicializa el numero de prioridades del grafo
    */
    void setPrioridades(int prio);

    /*PRE:
     *POST: devuelve el numero de prioridades del grafo
    */
    int getPrioridades();

    /*PRE:
     *POST: inserta la ciudad en el conjunto de vertices
    */
    void insertarVertice(string cad1);

    /*PRE:
     *POST: inserta la distancia entre ciudades (coste) en la matriz de adyacencia, ademas, crea la matriz de adyacencia a partir del conjunto de vertices
     */
    void insertarArista(string cad1, string cad2, float coste);

    /*PRE:
     *POST: busca la ciudad pasada por parametro en el conjunto de vertices
    */
    int buscarPosicion (string cad1);

    /*PRE: Matriz de adyacencia creada e inicializada
     *POST: crea la matriz de Floyd a partir de la matriz de adyacencia
    */
    void Floyd();

    /*PRE: Matriz de Floyd creada e inicializada
     *POST: muestra la matriz de Floyd (camino de menor coste)
    */
    void Camino(int i, int j, int MatP[MAX][MAX]);

    /*PRE:Matriz de adyacencia creada e inicializada
     *POST: muestra la matriz de adyacencia
    */
    void MostrarMatrizAdy();

    /*PRE: Matriz de Floyd creada e inicializada
     *POST: muestra la matriz de Floyd (llamando al metodo "Camino")
    */
    void mostrarMatrizFloyd();

    /*PRE: Matriz de prioridades creada e inicializada
     *POST: muestra la matriz de prioridades
    */
    void mostrarMatrizP();

    /*PRE: 
     *POST: crea la matriz de prioridades
    */
    void matrizPrioridad(string cad1, string cad2, int prioridad);

    /*PRE: 
     *POST: muestra los caminos minimos entre ciudades
    */
    void caminosMinimos();

    void setTamanoVectorRuta(int caminos);

    /*PRE: 
     *POST: muestra la cantidad minima de carreteras que deben arreglarse por prioridad
    */
    float kilometrosArreglados();

    /*PRE: 
     *POST: muestra los caminos minimos entre ciudades con carreteras arregladas
    */
    void caminosArreglados();
    //Añadir los métodos que consideres necesarios
};

#endif /* ENTREGAGRAFO_H_*/
