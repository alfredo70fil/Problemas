/*
Instituto Tecnologico de Tijuana
Depto de Sistemas y Computación
Ing. En Sistemas Computacionales

Autor: Avila Jimenez David Alfredo @alfredo70fil
Repositorio: https://github.com/alfredo70fil/Problemas/tree/main/Problema%2016

Objetivo del programa:
Realizar la multiplicacion de las tablas del 1 al 12 (12*12)
*/
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int resultado;
	cout<<"Tablas de multiplicar hasta 12*12"<<endl;
	for(int z=1; z <= 12;z=z+1)
	{
		for (int i = 1; i <= 12; i=i+1 )
		{
			resultado=z*i;
			cout<<z<<"x"<<i<<"="<<resultado<<endl;
		}
		if(z < 12)
		{
			cout<<"----------------------"<<endl;
		}
	}
	system("pause");
}

