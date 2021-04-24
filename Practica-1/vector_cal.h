/***********************************

Compiladores
Practica 1 - Calculadora para Vectores

Profesor:
	Tecla Parra Roberto
Alumno:
	Galindo Rodriguez Luis Ivan
Grupo:
	3CM17
Fecha:
	23/04/2020

***********************************/

#include <stdio.h>
#include <math.h>

struct vector {
	int n;			//Tamaño del vector
	double *vec; 	//Arreglo con los valores del vector
};
typedef struct vector Vector;

/************ Operaciones para el tipo vector ************/
Vector *creaVector(int n);
void imprimeVector(Vector *a);
Vector *copiaVector(Vector *a);

/************Operaciones vectoriales************/
Vector *sumaVector(Vector *a, Vector *b);
Vector *restaVector(Vector *a, Vector *b);
Vector *escalarVector(double escalar, Vector *a);
double productoPunto(Vector *a, Vector *b);
Vector *productoCruz(Vector *a, Vector *b);
double magnitudVector(Vector *a);
