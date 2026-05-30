def f_hash(array, key):
    return hash(key) % len(array)


r = f_hash([1,2,3,4],"chave1")

print(r)

