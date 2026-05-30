#!/isr/bin/python3

from collections import deque

def pesquisa(nome,grafo):
    fila_pesquisa = deque()
    fila_pesquisa += grafo[nome]
    verificadas = []

    while fila_pesquisa:
        pessoa = fila_pesquisa.popleft()

        if not pessoa in verificadas:
            if pessoa_e_vendedor(pessoa):
                print(pessoa + " e vendedor de manga")

                return True
            else:
                fila_pesquisa += grafo[pessoa]
                verificadas.append(pessoa)
                print(nome + " nao e vendedor de manga")
                return False

def pessoa_e_vendedor(pessoa):
    if pessoa == "vendor":
        return True
    else:
        return False

grafo =  {
        "j":  ["alice", "bob", "claire"],
        "bob": ["anuj", "peggy"],
        "alice": ["peggy"],
        "claire": ["thom", "jonny"],
        "anuj": ["vendor"],
        "peggy": [],
        "thom": [],
        "jonny": []
        }

pesquisa('anuj',grafo)
