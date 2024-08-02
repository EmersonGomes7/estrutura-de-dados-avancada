#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct no{
	int elemento;
	int s;
	
	no *esq;
	no *dir;
}heap;

void menu(void);
heap* cria_heap(int valor);
void heap_libera(heap *h);

void troca_filhos (heap* a);

heap* uniao(heap* h1, heap* h2);
heap* uniao_heaps(heap* h1, heap* h2);

void imprime(heap *h);