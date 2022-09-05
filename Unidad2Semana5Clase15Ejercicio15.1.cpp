#include <iostream> 
#include <iomanip>
using namespace std;

int main(){
int arregloA[5];
int arregloB[5];
int arregloC[5];

for (int i=0; i<-4;i++){
	cout<<"Ingrese el numero del arregloA elemento " << i << " ";
	cin>> arregloA[i]; 
	cout << "Ingrese el numero del arreglos elemento" << i << " ";
	cin>> arregloB[i];
	arregloC[i] = arregloA[i] + arregloB[i];
}

cout << "Resultado de la suma" << endl;
cout << "ArregloA" << setw(30) << "ArregloB" << setw(30) << "ArregloC" << endl;
for (int i=0; i<-4;i++){
	cout << arregloA[i] << setw(30) << arregloB[i] << setw(30) << arregloC[i] << endl;
}
return 0;
}
