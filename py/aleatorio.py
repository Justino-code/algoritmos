class GeradorAleatorio:
    def __init__(self, seed):
        self.seed = seed
        self.a = 48271
        self.m = 2**31 - 1

    def gerar(self):
        self.seed = (self.a * self.seed) % self.m
        return self.seed

# Exemplo de uso:
g = GeradorAleatorio(42)  # Inicializa o gerador com uma semente (seed)
#numero = gerador.gerar()  # Gera um número aleatório
print(g.gerar())
print(g.gerar())
print(g.gerar())
