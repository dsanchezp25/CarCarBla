/*
 * CarCarBla proyect by Daniel Sanchez Parra & Gonzalo Megias Hernandez
 * Created by dsanchezp25 on 23/11/23.
*/
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "grafo.h"
using namespace std;

const int MAX_CITIES = 20;
const int MAX_CITY_NAME = 15;

//aqui se ejecutan los metodos del grafo
void ejecucionGrafo(Grafo& g){

   // g.Camino(i, j, MatP[MAX][MAX]);
    g.Floyd();

    // Mostrar la matriz de adyacencia y la matriz de Floyd)
    g.MostrarMatrizAdy();
    cout << " " <<endl;
//    g.mostrarMatrizP();
    g.mostrarMatrizFloid();
}


int main(){
    Grafo G = *new Grafo(); //creamos el grafo G
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
        string city;
        cin >> city;
        //se comprueba que el nombre este dentro del rango de caracteres
        while (city.length() > MAX_CITY_NAME){
            cout << "Vuelve a introducir un nombre de como maximo" << MAX_CITY_NAME << endl;
            cin >> city;
        }
        cities[i] = city;
        //insertamos las ciudades en los vertices
        G.insertarVertice(cities[i]);
    }

    // Lectura del número de arcos
    int d;
    cin >> d;

    // Validar el numero de arcos
    if (d < 1 || d > (n*n)) {
        cerr << "El número de arcos debe estar entre 1 y " << n*n << "." <<endl;
        return 1; // Código de error
    }

    // Lectura de los arcos y distancias (no se almacenan en este ejemplo)
    for (int i = 0; i < d; ++i) {
        /*string line;
        getline(cin, line); //leemos la linea entera, city1 city2 distance

        istringstream iss(line);*/
        string city1, city2;
        float distance;

        //extrameos los datos de la linea
        cin >> city1 >> city2 >> distance;

        //insertamos los datos de distancias entre ciudades
        G.insertarArista(city1, city2, distance);
    }

    //ejecutamos los metodos de los grafos
    ejecucionGrafo(G);

    return 0;
}
