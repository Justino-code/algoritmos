#!/etc/python3
def menor(lista):
    menor = lista[0];
    indece = 0;

    for i in range(1, len(lista)):
        if menor > lista[i]:
            menor = lista[i];
            indece = i;

    return {'menor': menor,'indece': indece};


menor = menor([6,7,9,1,0,5,7,9]);

print(menor);
