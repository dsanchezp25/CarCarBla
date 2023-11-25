//
// Created by dsanchezp25 on 23/11/23.
//
#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include "EntregaGrafo.h"
using namespace std;

const int MAX_CITIES = 20;
const int MAX_CITY_NAME = 15;

int main(){
// Lectura del número de ciudades
int n;
cin >> n;

// Validar el rango de ciudades
if (n < 2 || n > MAX_CITIES) {
    cerr << "El número de ciudades debe estar entre 2 y " << MAX_CITIES << "." <<endl;
    return 1; // Código de error
}

// Lectura de los nombres de las ciudades
vector<string> cities(n);
for (int i = 0; i < n; ++i) {
    cin >> cities[i];
    insertarVertice(cities[i]);
    insertarArista(cities[i], cities[i+1], distance);
}

// Lectura del número de arcos
int m;
cin >> m;

// Lectura de los arcos y distancias (no se almacenan en este ejemplo)
for (int i = 0; i < m; ++i) {
    string city1, city2;
    int distance;

    cin >> city1 >> city2 >> distance;
}

// Mostrar la matriz de adyacencia y la matriz de Floyd)
mostrarMatrizAdy(MatAdyacencia[MAX][MAX]);
Floyd();
Camino(i, j, MatP[MAX][MAX]);

return 0;
}
