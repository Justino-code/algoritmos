#!/etc/python3

def buscar(lista, item):
    baixo = 0;
    alto = len(lista)-1;

    while baixo <= alto:
        meio = (alto + baixo) // 2;
        chute = lista[meio];

        if chute == item:
            return meio;
        if chute > item:
            alto = meio - 1;
        else:
            baixo = meio + 1;

    return None;

b = buscar([1,2,8,9,23,45,67,89],23);

print(b);
