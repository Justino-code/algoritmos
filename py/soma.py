#!/usr/bin/python3
# Função que soma de elementos de um array/lista recirsivamente

def soma(lista):
    lista = lista.copy();
    if lista == []:
        return 0;
    else:
        return lista.pop() + soma(lista)



# Função que conta o numero de itens de uma lista recursivamente
def len_r(lista):
    lista = lista.copy()
    if lista == []:
        return 0
    else:
        lista.pop()
        return 1 + len_r(lista);

# Função que conta o numero de itens de uma lista recursivamente usando indeces                                                    
def len_r_i(lista,i=0):
    pass

def maior(lista):
    pass



lista = [1,2,10,6]
print(soma(lista)) #19

#lista = [1,2,10,6,7]
print(len_r(lista)) #4

