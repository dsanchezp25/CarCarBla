static const int MAX = 20;
class Grafo {
 int N;
 string Cjtovertices[MAX];
 float MatAdyacencia[MAX][MAX]; //fila(i) = origen, columna(j) = destino
 float MatFloyd [MAX][MAX];
 int MatP [MAX][MAX];
//Añadir los atributos y métodos que consideres necesarios

public:
 Grafo();
 void insertarVertice(string cad1)
 void insertarArista(string cad1, string cad2, float coste); // hay coste, por lo tanto, el grafo es ponderado
 void MostrarMatrizAdy(int matriz [MAX][MAX]);// creo que no hace falta pasar matriz por parametro
 void Camino(int i, int j, int MatP);
 int buscarPosicion (string cad1);
 void Floyd();
 //Añadir los métodos que consideres necesarios
}; 
