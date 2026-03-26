#include<iostream>
using namespace std;

void valorAbs(int &a){
	if (a < 0){
		a = a*-1;
	}
}
int main () {
	
	int numero;
	
	cout << "Ingrese un numero: " << endl;
	cin >> numero;
	
	valorAbs(numero);
	
	cout << "El valor absoluto del numero es: " << numero << endl;
	
	return 0;
}

