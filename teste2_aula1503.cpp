#include <iostream>
#include <stdlib.h>
#include <stdio.h>

struct lista {
int info;
struct lista *prox;
};
typedef struct lista Lista;


//////////////////////// Inicializando a lista, ou seja, o primeiro valor aponta para NULL (vazio)
Lista* inicializa (void) {
return NULL;
}

///////////////////// Inserindo um elemento no início da lista
Lista* inserir (Lista* l, int i) {
Lista* novo = (Lista*) malloc(sizeof(Lista));
novo -> info = i;
novo -> prox = l;
return novo;
}

/////////////////////// Imprimindo o conteúdo da lista
void imprimir (Lista* l) {
Lista* p;
printf("Elementos:\n");
for (p = l; p != NULL; p = p -> prox) {
printf(" %d -> ", p -> info);
}
}


//void media(float idi, float idl, float idf); //FALANDO QUE A FUNCAO EXISTE
/*
media (float id1, float id2, float id3){
	float m;
	m = (id1+id2+id3)/3;
	printf("Media das idades: %.1f", m);
}
*/
int main(int argc, char** argv) {
/*
	float idade_isa, idade_felipe, idade_lucas ;
	float m; // float numero com casas decimais
	
	printf("*******  Um programa que cria uma lista ligada *********** \n");
	printf("Comece a digitar os números.\n");
	printf("Digite sua idade Isabela:");
	scanf("%f",&idade_isa);
	printf("Digite sua idade Lucas:");
	scanf("%f",&idade_lucas);
	printf("Digite sua idade Felipe:");
	scanf("%f",&idade_felipe);
	
	media(idade_isa,idade_lucas,idade_felipe); //CHAMANDO A FUNCAO MEDIA PARA SER EXECUTA
	
		*/
	Lista* listaFinal;
	listaFinal = inicializa();
	listaFinal = inserir(listaFinal, 13);  // inserir o número 13 na lista.
	listaFinal = inserir(listaFinal, 56);
	listaFinal = inserir(listaFinal, 100);
	listaFinal = inserir(listaFinal, 45);
	listaFinal = inserir(listaFinal, 202);
	imprimir(listaFinal);

	
	return 0;
}






