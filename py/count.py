def count(i):
    if(i<0):
        return i;
    else:
        print(i);
        count(i-1);

count(10);
