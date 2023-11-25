using namespace std;
#include <iostream>
#include "EntregaGrafo.h"

Grafo::Grafo(){
    N=0;
    for (int i=0; i<MAX; i++){
        for (int j=0; j<MAX; j++){
            MatAdyacencia[i][j]=0;
            MatFloyd[i][j]=0;
            MatP[i][j]=-1;
        }
    }
}

int Grafo::buscarPosicion (string cad1){
    for(int i = 0; i < N; i++){
        if(Cjtovertices[i] == cad1)
            return i;
    }
    return -1; //no se ha encontrado el vertice en el array
}

void Grafo::insertarVertice(string cad1){
    if(N == MAX){
        cout << "El grafo esta lleno. No se puden insertar mas vertices" << endl;
        return;
    }
    Cjtovertices[N]=cad1;
    N++;
}

void Gafo::insertarArista(string cad1, string cad2, float coste){
    int pos1 = buscarPosicion(cad1);
    int pos2 = buscarPosicion(cad2);
    if(pos1 != -1 && pos2 != -1){
        MatAdyacencia[pos1][pos2] = coste;
    }
    else
        cout << "Una o las dos ciudades no se encuentran en el grafo" << endl;
}

void Grafo::mostrarMatrizAdy(int matriz[MAX][MAX]){// creo que no hace falta pasar matriz por parametro
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << matriz[i][j] << endl;
        }
    }
}

void Grafo::Floyd(){
    //se inicializa MatFloyd con los valores de MatAdyacencia
    for(int i = 0, i < N; i++){
        for(int j = 0; i < j; j++){
            MatFloyd[i][j] = MatAdyacencia[i][j];
        }
    }

    //Despues se aplica el algoritmo de Floyd
    for(int k = 1; k <= N; k++){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(MatFloyd[i][k] + MatFloyd[k][j] < MatFloyd[i][j])
                    MatFloyd[i][j] = MatFloyd[i][k] + MatFloyd[k][j];
                    MatP[i][j] = k;
            }
        }
    }
}

void Camino(int i, int j, Matriz P){
    int k;

    k = P[i][j];
        if(k != -1){
            Camino(i, k, P);
            cout << Cjtovertices[k] << endl;
            Camino(k, j, P);
    }
}
