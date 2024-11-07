// Implementar la función de Busqueda Binaria -> Encontrar un valor determinado en un vector ordenado (ascendentemente) y devuelve la posición del array en la que 
// se encuentra dicho valor
#include <vector>
#include <iostream>
#include <utility> // Para std::swap

template <typename T> int busquedaBinaria(std::vector<T>& A, int ini, int fin, T x){
	// Caso base -> recorremos el array y NO encontramos el vector
	if(ini > fin)
		return -1;
	
	// Caso recursivo
	int m = ini + (fin - ini) / 2;	// Usamos esto y no (ini + fin) / 2 porque así evitamos que se den problemas de overflow en casos extremos

	if(A[m] == x)
		return m;
	else if (A[m] < x)	// Si el valor del medio del array es < x, buscamos x en el subarray derecho
		return busquedaBinaria(A, m+1, fin, x);
	else				// Si el valor del medio del array es > x, buscamos x en el subarray izquierdo
		return busquedaBinaria(A, ini, m-1, x);
		

}

// Se realiza la busqueda binaria en un vector ordenado descendentemente
// A = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}
template <typename T> int busquedaBinaria_INV(std::vector<T>& A, int ini, int fin, T x){
	// Caso base -> recorremos el array y NO encontramos el vector
	if(ini > fin)
		return -1;
	
	// Caso recursivo
	int m = ini + (fin - ini) / 2;	// Usamos esto y no (ini + fin) / 2 porque así evitamos que se den problemas de overflow en casos extremos

	if(A[m] == x)
		return m;
	else if (A[m] < x)	// Si el valor del medio del array es < x, buscamos x en el subarray izquierdo
		return busquedaBinaria_INV(A, ini, m-1, x);
	else				// Si el valor del medio del array es > x, buscamos x en el subarray derecho
		return busquedaBinaria_INV(A, m+1, fin, x);
		
}

/********Función QuickSort()**********/
// Definición cabecera función particion()
template <typename T> int particion(std::vector<T>& A, int ini, int fin);

// Implementación funcion QuickSort() con pivote como A[fin]
template <typename T> void quickSort(std::vector<T>& A, int ini, int fin){
	if (ini < fin){
		int pivote = particion(A, ini, fin);
		quickSort(A, ini, pivote-1);
		quickSort(A, pivote+1, fin);
	}
}


template <typename T> int particion(std::vector<T>& A, int ini, int fin){
	int i = ini;
	for(int j = ini; j <= fin-1; j++){
		if(A[j] <= A[fin]){
			// Intercambiamos A[i] con A[j]
			std::swap(A[i], A[j]);
			// Avanzamos i
			i++;
		}
	}
	// Tras llegar al último elemento del array, intercambiamos el pivote(A[fin]) con nuestro A[i]
	std::swap(A[i], A[fin]);

	// Como en A[i] tengo mi pivote, devuelvo la posición i 
	return i;
}


// Implementación funcion QuickSort() con pivote como A[ini]



