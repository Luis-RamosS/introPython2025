//luis jose ramos sarmiento
//202510050088
//conversion de temperatura

#include <iostream>
using namespace std;

int main()
{
	int celsius, farent;
	
	cout<<"Ingrese la temperatura en grados celsius"<<endl;
	cin>>celsius;
	
	farent = (celsius * 9/5) + 32;
	
	cout<<"La temperatura es: "<<farent<<endl;
	
	return 0;
}