#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo {
	int dato;
	struct Nodo* sig;
}Nodo;

void main() {
	Nodo* nodo = NULL;
	
	printf("Direccion de la variable nodo antes de malloc: %p", &nodo);
	printf("\nValor de la variable nodo antes de malloc: %p", nodo);
	
	nodo = (Nodo*)malloc(sizeof(Nodo));
	
	printf("\nDireccion de la variable nodo despues de malloc: %p", &nodo);
	printf("\nValor de la variable nodo despues de malloc: %p", nodo);
}
