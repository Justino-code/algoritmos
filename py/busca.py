#!/usr/bin/python

def busca(lista,item):
    conta = 0;
    for index in range(0,len(lista)):
        conta = index + 1;
        if lista[index] > item:
            return [-1,conta];
        if lista[index] == item:
            return [index,conta];

    return None;

def busca2(lista,item):
    conta = 0;
    for index in range(0,len(lista)):
        conta = index + 1;
        if item == lista[index]:
            return [index,conta];

    return [-1,conta];


l = [1,2,3,5,6,7,8,9,10];
l2 = [1,4,6,2,8,0,7,12,67];

b = busca(l2,7);

b2 = busca2(l2,7);

print(b);
print(b2);
