#!/usr/bin/python

def count_recursivo(limite):
    print(limite);
    if limite <= 1:
        return 0;
    else:
        count_recursivo(limite-1);


print(count_recursivo(10));
