#!/usr/bin/python3
# Um exemplo de ordenação por seleccão

def buscarMenor(arr):
    menor = arr[0];
    index = 0;

    for i in range(1,len(arr)):
        if arr[i] < menor:
            menor = arr[i];
            index = i;

    return index;


def ordenarSelecao(arr):
    novoArray = [];

    for i in range(len(arr)):
        menor = buscarMenor(arr);
        novoArray.append(arr.pop(menor));

    return novoArray;


print(ordenarSelecao([5,3,6,2,10]));
