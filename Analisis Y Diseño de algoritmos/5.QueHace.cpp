//Luis Jose Ramos Sarmiento
//202510050088
//Que hace el programa?

#include <iostream>// Esta linea utiliza una libreria de datos de entrada y salida estandar
using namespace std;//Lo que hace es ahorrarnos el tiempo de estar escribiendo "std" antes de cada funcion

int main()//Este sirve para la entrada de codigo que se mostrara en pantalla para en usuario
{
	int Numero1,Numero2,Numero3;// Esta linea declara tres variables tipo entero el cual almacenara los valores de cada variable
	double Promedio;//Esta linea de codigo declara una variable tipo real, y en esta se almacenara el promedio de los tres numeros
	
	cout<<"Ingrese tres numeros"<<endl;//Esta linea imprime que el usuario ingrese tres numeros, donde "cout" es el que imprime el mensaje, "endl" inserta un salto de linea
	cin>>Numero1>>Numero2>>Numero3;//Esta linea captura el valor de las tres variables que el usuario ingresa, "cin" captura las variables
	
	Promedio=(Numero1+Numero2+Numero3)/3;//Esta linea tiene la funcion de operaciones basicas como es sumar y dividir, el resultado de la operacion de guardara en la variable promedio
	
	cout<<"El resultado es: "<<Promedio<<endl;//Esta linea imprime en la pantalla que "el resultado es:" y mostrara el valor de la variable y se cierra con un "endl" para un salto de linea
	
	return 0;//Esta linea finaliza el programa en caso de no haber errores en el programa
	
}