from collections import deque
from typing import no_type_check_decorator

def pesquisa(nome, grafo):
    fila = deque()

    if nome not in grafo:
        return False

    fila += grafo[nome]
    verificadas = []

    while fila:
        #retita a primeira pessoa da fila
        pessoa = fila.popleft()

        if pessoa not in verificadas:
            if e_vendedor(pessoa):
                print(pessoa + " e vendedor")
                verificadas.append(pessoa)
                return True
            else:
                fila += grafo[pessoa]

    return False

def e_vendedor(pessoa):
    if pessoa == "vender":
        return True
    else:
        return False

grafo =  {
        "j":  ["alice", "bob", "claire"],
        "bob": ["anuj", "peggy"],
        "alice": ["peggy"],
        "claire": ["thom", "jonny"],
        "anuj": ["vender"],
        "peggy": [],
        "thom": [],
        "jonny": []

        }

print(pesquisa('j',grafo))
