//luis jose ramos sarmiento
//202510050088
//calcular area y perimetro de un rectangulo

#include <iostream>
using namespace std;

int main()
{
	int base,altura,area,perimetro;
	
	cout<<"Ingrese la base"<<endl;
	cin>>base;
	
	cout<<"Ingrese la altura"<<endl;
	cin>>altura;
	
	area = base * altura;
	perimetro= 2*(base+altura);
	
	cout<<"El area del rectangulo es: "<<area<<"cm2"<<endl;
	cout<<"El perimetro del rectangulo es: "<<perimetro<<"cm"<<endl;
	
	return 0;
}