//luis jose ramos sarmiento
//202510050088
//operaciones matematicas

#include <iostream>
using namespace std;

int main()
{
	int entero1,entero2,sumaEntero;
	double decimal1,decimal2,multiplicacionDecimal,divisionMixta;
	
	cout<<"Ingrese dos numeros Enteros: "<<endl;
	cin>> entero1>>entero2;
	
	cout<<"Ingrese dos numeros Decimales: "<<endl;
	cin>>decimal1>>decimal2;
	
	sumaEntero= entero1 + entero2;
	multiplicacionDecimal= decimal1 * decimal2;
	divisionMixta= entero1/decimal2;
	
	cout<<"La suma de los numeros enteros es: "<<sumaEntero<<endl;
	cout<<"La multiplicacion de los numeros decimales es: "<<multiplicacionDecimal<<endl;
	cout<<"La division del primer Numero entero entre el segundo Numero decimal es: "<<divisionMixta<<endl;
	
	return 0;
}