#!/usr/bin/python
# Um exemplo de recursividade com factorial

def factorial(n):
    #res = None;
    if n == 1 or n == 0:
        return 1;
    #else:
    return  n * factorial(n - 1);

    #return res;


print(factorial(3));
