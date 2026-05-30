#!/usr/bin/python

def soma(lista):
    if not lista:
        return 0;
    return lista.pop(0) + soma(lista);

def num_item(lista):
    if lista == None:
        return 0;
    return 

l = [2,4,6,4,8,30];
s = soma(l);

print(s);
#print(l.pop(0));
