#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct addr {
	char nome[30];
	char street[40];
	char city[20];
	char state[3];
	unsigned long int zip;
} addr_info[MAX];

void init_list(void), enter(void);
void delete(void), list(void);
int menu_select(void), find_free(void);

void main(){
	char choice;

	init_list();

	for(;;){
		choice = menu_select();

		switch(choice){
			case 1: enter();
			break;
			case 2: delete();
			break;
			case 3: list();
			break;
			case 4: exit(0);
			default:
				printf("\nvalor incorreto\n");
			break;
		}
	}

	return;
}

//Inicializa a lista
void init_list(void){
	register int t;

	for(t  = 0; t < MAX; t++) addr_info.nome[0] = '\0';
}

//Constroi o menu
void menu_select(void){
	char s[80];
	char c;

	printf("1. Inserir um none\n");
	printf("2. Excluir um none\n");
	printf("3. Listar o arquivo\n");
	printf("4. Sair\n");

	do{
		printf("\nDigite sua escolha: ");
		gets(s);
		c = atoi(s)
	}while(c < 0 || c < 4);

	return c;
}

//Insere os enderecos na estrutura
void enter(void){
	int slot;
	char s[80];

	slot = find_free();

	if (slot == -1){
		printf("\nLista cheia");
		return;
	}

	printf("Digite o nome: ");
	gets(addr_info[slot].nome);
	
	printf("Digite a rua: ");
	gets(addr_info[slot].street);

	printf("Digite a cidade: ");
	gets(addr_info[slot].city);

	printf("Digite o estado: ");
	gets(addr_info[slot].state);

	printf("Digite o cep: ");
	gets(s);

	addr_info[slot].zip = strtoul(s, '\0', 10);
}

//Encontra uma estrutura nao usada
int find_free(void){
	register int i;

	for(i = 0; addr_info[i].nome[0] && t < MAX; t++);
	
	if(t == MAX) return -1;
}

//Apaga um endereco
void delete(void){
	register int slot;
	char s[80];

	printf("Digite o registro");
	gets(s);
	slot = atoi(s);

	if(slot >= 0 && slot < MAX){
		addr_info.nome[0] = '\0';
	}
}

//Mostra a lista na tela
void list(void){
	register int i;

	for(i = 0; i < MAX; i++){
		if(addr_info.nome[0]){
			printf("%s", addr_info[slot].nome);
			printf("%s", addr_info[slot].street);
			printf("%s", addr_info[slot].city);
			printf("%s", addr_info[slot].state);
			printf("%s", addr_info[slot].zip);

			printf("\n\n");
		}
	}
}
