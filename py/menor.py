#!/usr/bin/python
# Um exemplo de busca do melhor numero

def busca_menor(arr):
    menor = arr[0];
    menor_index = 0;

    for index in range(0,len(arr)):
        if menor >  arr[index]:
            menor = arr[index];
            menor_index = index;

    return menor_index;



lista = [10,9,4,7,3,8,5];

m = busca_menor(lista);

def ordenar_por_selecao(arr):
    new_arr = [];

    for index in range(0,len(arr)):
        menor_index = busca_menor(arr);
        menor_element = arr.pop(menor_index);
        new_arr.append(menor_element);

    return new_arr;




print(lista[m]);

new_arr = ordenar_por_selecao(lista);

print(new_arr);
