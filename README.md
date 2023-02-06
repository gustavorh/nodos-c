# Archivo 1

## Introduccion
Este código demuestra el uso de la función `malloc` en el lenguaje de programación C. La función `malloc` se utiliza para asignar memoria dinámica en tiempo de ejecución. 

## Funciones
### main
La función principal es `main`, que es la función donde se ejecuta el programa. Esta función contiene una estructura `Nodo` y un puntero a dicha estructura, inicializado a `NULL`. 

## Flujo del código
El programa comienza por declarar una estructura `Nodo` y un puntero a dicha estructura inicializado a `NULL`. Luego, se muestra la dirección y el valor de la variable `nodo` antes de llamar a la función `malloc`.

Después, se llama a la función `malloc` para asignar memoria dinámica para una estructura `Nodo`. Finalmente, se muestran nuevamente la dirección y el valor de la variable `nodo`, después de la llamada a `malloc`.

## Consideraciones
- Es importante recordar que la función `malloc` devuelve un puntero al primer byte de la memoria asignada, por lo que el puntero deberá ser casteado a un puntero de la estructura deseada.
- La memoria asignada por `malloc` debe liberarse una vez que ya no sea necesaria, usando la función `free`.
- El código aquí mostrado es solo un ejemplo básico de cómo utilizar la función `malloc`, y debe ser adaptado de acuerdo a las necesidades específicas de cada proyecto.

# Archivo 2

## Introducción
Este código en C crea una lista simplemente enlazada y luego la recorre para imprimir sus valores.

## Funciones
No hay funciones en este código.

## Flujo del código
1. Se incluyen las bibliotecas `<stdio.h>` y `<stdlib.h>`.
2. Se define un tipo de datos `Nodo` que contiene un campo `dato` de tipo `int` y un puntero `sig` que apunta a otro nodo de tipo `Nodo`.
3. Se declaran 4 punteros de tipo `Nodo`: `nodo`, `nuevo`, `nuevo2`, y `aux`. Todos ellos se inicializan como `NULL`.
4. Se asigna memoria dinámica para cada uno de los 3 primeros punteros con `malloc`, cada uno con un tamaño de `sizeof(Nodo)`.
5. Se inicializan los valores de cada nodo con `nodo->dato = 27`, `nuevo->dato = 7`, y `nuevo2->dato = 20`.
6. Se enlazan los nodos mediante sus punteros `sig` con `nodo->sig = nuevo` y `nuevo->sig = nuevo2`.
7. Se crea un ciclo `while` que recorre la lista hasta que el puntero `aux` sea igual a `NULL`. Se imprime el valor de `aux->dato` y se avanza al siguiente nodo con `aux = aux->sig`.
8. Al finalizar el ciclo, se imprime "NULL".

## Consideraciones
- En este código se utiliza memoria dinámica, por lo que es importante liberar la memoria al finalizar su uso con la función `free`.
- El código contiene comentarios que muestran posibles impresiones que pueden ser omitidas o descomentadas para comprender mejor el funcionamiento.
- La función `main` no retorna un valor.
