#!/usr/bin/python
# Um exemplp de pesquisa binaria

def busca(lista,item):
    b = 0;
    a = len(lista)-1
    n_iter = 0;

    while(b <= a):
        m = int((b + a)/2);
        c = lista[m];

        n_iter = n_iter+1;

        if c == item:
            print(n_iter,a,b);
            return m;
        if(c > item):
            a = m - 1;
        else:
            b = m +1;

    print(n_iter);
    return None;


l = [1,3,5,7,9];

b = busca(l,9);

print(b);
