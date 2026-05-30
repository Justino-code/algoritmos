def quick_sort(lista):
    lista = lista.copy()
    if len(lista) < 2:
        return lista
    else:
        pivo = lista.pop(0)
        maiores = []
        menores = []

        for l in lista:
            if l > pivo:
                maiores.append(l)
            elif l <= pivo:
                menores.append(l)
        return quick_sort(menores) + [pivo] + quick_sort(maiores)



ordem = quick_sort([6,2,5,7,0,13,35,8,3])
#o2 = quick_sort(ordem[0])
#o3 = quick_sort(ordem[1])

print(ordem)
#print('\n\n', o2, '\n\n', o3)
