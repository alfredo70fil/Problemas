/*
Instituto Tecnologico de Tijuana
Depto de Sistemas y Computación
Ing. En Sistemas Computacionales

Autor: Avila Jimenez David Alfredo @alfredo70fil
Repositorio: https://github.com/alfredo70fil/Problemas/tree/main/Problema%2018

Objetivo del programa:
Encontrar la suma de 35 numeros enteros
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, char** argv) {
	srand(time(0));
	int randoms;
	int suma=0;
	for(int i=0; i<35; i++)
	{
		randoms=rand();
		cout<<"Numero a sumar #"<<i+1<<": "<<randoms<<endl;
		suma+=randoms;
	}
	cout<<"La suma resultante es: "<<suma<<endl;
	
	system("pause");
}
