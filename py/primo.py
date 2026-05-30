import timeit as t

def primo(n):
    count = 0
    for a in range(1,n+1):
        #print(a)
        s = n%a;
        if(s == 0 ):
            count +=1
        if(count > 2):
            break
    if(count == 2):
        #print('o numero %d é primo '%(n))
        return True

    else:
        return False
        #print("o número %d não é primo"%(n))

def listarPrimo(n):
    for b in range(1,n+1):
        if(primo(b)):
            print(b)

def primo2():
    primo(1000000000000000000000000000)

tempo = t.timeit(primo2, number=100000)
print(tempo)
