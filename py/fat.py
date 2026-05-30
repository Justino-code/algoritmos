def fat(n):
    if n == 1:
        print('cheguei ao caso base')
        print('Vou parar')
        return n
    else:
        print('estou no caso recursivo')
        return n * fat(n-1)

print(fat(3))
