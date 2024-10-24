#include "DyV.h"
#include <vector>
#include <iostream>

int main(){
	
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

	return 0;
}
