/*
 ============================================================================
 Name        : ejercicio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 Ejercicio 3-2: Crear una función que pida el ingreso de un flotante y lo retorne.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float ingresoNumero();
int main(void)
{
	setbuf(stdout,NULL);

	float numeroFlotante;

	numeroFlotante=ingresoNumero();

	printf("el numero flotante es %.2f",numeroFlotante);

	return 0;
}
float ingresoNumero()
{
	float numero;

	printf("ingrese numero");
	scanf("%f",&numero);

	return numero;
}
