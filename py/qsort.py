#!/usr/bin/python3

def qsort(lista):
    if len(lista) <= 1:
        return lista;

    pivo = lista[len(lista) // 2];
    left = [];
    right = [];
    middle = [];
    sort = [];
    for menor_que_pivo in lista:
        if menor_que_pivo < pivo:
            left.append(menor_que_pivo);
    for maior_que_pivo in lista:
        if maior_que_pivo > pivo:
            right.append(maior_que_pivo);

    for igual_pivo in lista:
        if igual_pivo == pivo:
            middle.append(igual_pivo);

    return qsort(left) + middle + qsort(right);


print(qsort([2,0,7,1,9,23]));
