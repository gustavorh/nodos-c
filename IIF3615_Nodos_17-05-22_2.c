#include <stdio.h>
#include <stdlib.h>

typedef struct Nodo {
	int dato;
	struct Nodo* sig;
}Nodo;

void main() {
	Nodo* nodo = NULL;		// Variable de tipo puntero
	Nodo* nuevo = NULL;
	Nodo* nuevo2 = NULL;
	Nodo* aux = NULL;
	
	nodo = (Nodo*)malloc(sizeof(Nodo));		// 1er nodo
	nuevo = (Nodo*)malloc(sizeof(Nodo));	// 2do nodo
	nuevo2 = (Nodo*)malloc(sizeof(Nodo));	// 3er nodo
	
	// Inicializacion de campos
	nodo->dato = 27;
	nodo->sig = NULL;
	
	nuevo->dato = 7;
	nuevo->sig = NULL;
	
	nuevo2->dato = 20;
	nuevo2->sig = NULL;
	
	nodo->sig = nuevo;
	nuevo->sig = nuevo2;
	
	aux = nodo;
	while(aux != NULL) {
		printf("%i --> ", aux->dato);
		aux = aux->sig; // Avanza al siguiente nodo mientras sea distinto a NULL
	}
	printf("NULL");
	
	//nodo = NULL;
	//nodo = (Nodo*)malloc(sizeof(Nodo));
	
	//printf("\nnodo->dato: %i", nodo->dato);
	//printf("\nnodo->sig: %p", nodo->sig);
}
