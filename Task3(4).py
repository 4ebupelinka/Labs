def full():
    matrix= []
    print ('Введите элемент a(1,1): ')
    matrix.append(float(input()))
    print ('Введите элемент a(1,2): ')
    matrix.append(float(input()))
    print ('Введите элемент a(2,1): ')
    matrix.append(float(input()))
    print ('Введите элемент a(2,2): ')
    matrix.append(float(input()))
    return (matrix)

def eigenvalue():
    m = full()
    d  = (m[0]+m[3])**2- 4*(m[0]*m[3]-m[1]*m[2])
    if d>= 0:
        print ('Собственные значения:')
        print((-(m[0]+m[3])+pow(d,0.5))/2)
        print((-(m[0]+m[3])-pow(d,0.5))/2)
    else:
        d = complex(d)
        print ('Собственные значения(комплексные числа):')
        print((-(m[0]+m[3])+pow(d,0.5))/2)
        print((-(m[0]+m[3])-pow(d,0.5))/2)

eigenvalue()