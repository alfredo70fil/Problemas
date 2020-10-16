/*
Instituto Tecnologico de Tijuana
Depto de Sistemas y Computación
Ing. En Sistemas Computacionales

Autor: Avila Jimenez David Alfredo @alfredo70fil
Repositorio: https://github.com/alfredo70fil/Problemas/Problema_20

Objetivo del programa:
Encontrar la suma de todos los enteros pares del 2 al 2000
*/
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int suma=0;
	for(int i = 2; i<=2000; i+=2)
	{
		suma+=i;
	}
	cout<<"La suma de los numeros enteros del 2 al 2000 es: "<<suma<<endl;
	system("pause");
}
