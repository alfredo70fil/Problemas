/*
Instituto Tecnologico de Tijuana
Depto de Sistemas y Computación
Ing. En Sistemas Computacionales

Autor: Avila Jimenez David Alfredo @alfredo70fil
Repositorio: https://github.com/alfredo70fil/Problemas/Problema_17

Objetivo del programa:
Realizar la suma de los numeros enteros del 1 al 20
*/

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int suma=1;
	cout<<"Suma de numeros enteros del 1 al 20"<<endl;
	for(int i=1; i<=20; i++)
	{
		cout<<suma<<'+'<<i<<'=';
		suma+=i;
		cout<<suma<<endl;
	}	
	system("pause");
}
