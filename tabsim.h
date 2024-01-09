#include <stdlib.h> /* for atoi */
#include <stdio.h>
#include <string.h>

int level;

typedef struct _simbolo {
	struct _simbolo * sig;
	char nombre [20];
	int valor;
	int scope;
	char tipo;
	union {
		char valor_cad[100];
		int valor_int;
	}info;
} simbolo;

typedef struct{
	char tipo;
	union {
		char valor_cad[100];
		int valor_int;		
	}info;

}expresion;

typedef struct{
	char tipo;
	union {
		char valor_cad[100];
		int valor_int;		
	}info;

}expr_bool;


 simbolo * crear();
 void insertar(simbolo **, simbolo *);
 void eliminar(simbolo **);
 void eliminarBloque(simbolo **);
 simbolo *buscar(simbolo *, char[]);
 simbolo *buscarEnBloque(simbolo *, char[], int);
 void entrarBloque();
 void salirBloque();
 void imprimir(simbolo * );