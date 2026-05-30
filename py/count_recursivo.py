#!/usr/bin/python3

def count_recursivo(lista):
    count = 0;
    t = 0;
    if(lista == []):
        return 0;
    else:
        return 1 + count_recursivo(lista[1:]);


print(count_recursivo([1,2,3,4,5,6]));
