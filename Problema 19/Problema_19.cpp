/*
Instituto Tecnologico de Tijuana
Depto de Sistemas y Computación
Ing. En Sistemas Computacionales

Autor: Avila Jimenez David Alfredo @alfredo70fil
Repositorio: https://github.com/alfredo70fil/Problemas/tree/main/Problema%2019

Objetivo del programa:
Encontrar la suma de los enterios del 1 al 1000
*/
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int suma=0;
	for(int i= 0; i<=1000; i++)
	{
		suma+=i;
	}
	cout<<"La suma de los numeros enteros del 1 al 1000 es:"<<suma<<endl;
	getch();
}
