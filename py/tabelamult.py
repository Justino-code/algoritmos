#!/usr/bin/python3

def tabMult(arr):
    l = []
    d = {}

    for x in arr:
        for y in arr:
            l.append(y*x)

        print(l)
        l.clear()

    return d


p = tabMult([2,3,7,8,10]);
