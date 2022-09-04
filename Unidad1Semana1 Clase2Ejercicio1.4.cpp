#include <iostream>
using namespace std; 

int main (){
	int suma, f, valor, promedio;
	suma = 0;
	for (f=1; f<=3; f++){
		cout <<"Ingrese el valor: ";
		cin >> valor;
		suma = suma + valor; 
	}
	cout << "La suma es: "<< suma << "\n"; 
	promedio = suma / 3; 
	cout << "El promedio es: " << promedio << endl;
}
