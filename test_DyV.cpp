#include "DyV.h"
#include <vector>
#include <iostream>

// Función para imprimir un vector de tipo genérico
template <typename T> void imprimirVector(std::vector<T>& vec){
	std::cout << "[";
	for (int i = 0; i < vec.size(); i++){
		std::cout << vec[i];
		if(i != vec.size() - 1)		// Si la i NO ha llegado al último elemento del array, imprimimos los elementos separados por comas
			std::cout << ", ";
	}
	std::cout << "]";
	std::cout << std::endl;
}

int main(){

	// Pruebas busquedaBinaria 	
	std::vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	std::vector<char> b = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
	std::vector<double> c = {1.0, 2.0, 3.0, 4.0, 5.0};

	int posicion1 = busquedaBinaria(a, 0, a.size() -1 , 3);		
	int posicion2 = busquedaBinaria(b, 0, b.size() -1 , 'e'); 
	int posicion3 = busquedaBinaria(c, 0, c.size() -1 , 4.0); 
	
	if(posicion1 == -1 || posicion2 == -1 || posicion3 == -1)
		std::cout << "No se ha encontrado el elemento!" << std::endl;
	else
		std::cout << "La posición en el array del elemento encontrado es: " << std::endl << posicion1 << std::endl << posicion2 << std::endl << posicion3 << std::endl;

	// Pruebas busquedaBinariai_INV

	std::vector<int> d = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	std::vector<char> e = {'d', 'c', 'b', 'a'};
	std::vector<double> f = {5.0, 4.0, 3.0, 2.0, 1.0};

	int posicion4 = busquedaBinaria_INV(d, 0, d.size() -1 , 8);
	int posicion5 = busquedaBinaria_INV(e, 0, e.size() -1 , 'c'); 
	int posicion6 = busquedaBinaria_INV(f, 0, f.size() -1 , 3.0); 
	
	if(posicion4 == -1 || posicion5 == -1 || posicion6 == -1)
		std::cout << "No se ha encontrado el elemento!" << std::endl;
	else
		std::cout << "La posición en el array del elemento encontrado es: " << std::endl << posicion4 << std::endl << posicion5 << std::endl << posicion6 << std::endl;

	// Pruebas QuickSort

	std::vector<int> g = {11, 16, 2, 8, 1, 9, 4, 7};
	std::vector<double> h = {7.0, 1.0, 12.0, 5.0, 2.0, 9.0};
	std::vector<char> i = {'d', 'a', 'n', 'l', 'z'};

	quickSort(g, 0, g.size()-1);	// QuickSort() me pone en g el vector ordenado, luego desoués con imprimir g ya me sirve
	imprimirVector(g);


	quickSort(h, 0, h.size()-1);
	imprimirVector(h);

	quickSort(i, 0, i.size()-1);
	imprimirVector(i);

	return 0;
}
