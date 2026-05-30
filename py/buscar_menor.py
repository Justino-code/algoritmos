#!/usr/bin/python

def buscar_menor(lista):
    menor = lista[0];
    menor_indice = 0;

    for i in range(1,len(lista)):
        if lista[i] < menor:
            menor = lista[i]
            menor_indice = i

    return {"indice":menor_indice,"valor": menor}

def ordenar_por_selecao(lista):
    nova_lista = []

    for i in range(0,len(lista)):
        menor = buscar_menor(lista)["indice"]
        remove_menor_da_lista = lista.pop(menor)
        nova_lista.append(remove_menor_da_lista)
        
    return nova_lista

b = buscar_menor([10,4,6,8,1,34,2,0,5]);

lista = [10,4,6,8,1,34,2,0,5];

print(lista);

nova_lista = ordenar_por_selecao(lista);

print(b["indice"]);

print(nova_lista)

