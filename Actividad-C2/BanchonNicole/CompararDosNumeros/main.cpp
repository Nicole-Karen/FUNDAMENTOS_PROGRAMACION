#include <iostream>
/*Nicole Karen Banch�n Angulo*/
using namespace std;
int main() {
	//Declaraci�n de las variables.
	float x, y;
	cout << "Ingrese x: ";
	cin >> x;
	cout << "Ingrese y: ";
	cin >> y;
	//Se comparan ambos n�meros
	if(x==y){
		//Se muestran los resultados.
		cout << "El valor de x =" << x << " es igual a y=" << y << endl;
	}else{
		//Se pregunta si x es menor a y
		if(x < y){
			cout << "El valor de x=" <<x<<" ES MENOR A y="<< y << endl;
		}else{
			cout << "El valor de y=" <<y<<" ES MENOR A x="<< x << endl;
		}		
	}
	
	return 0;
}
