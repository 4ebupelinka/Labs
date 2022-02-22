def multiply(n,m):
    if n == 0:
        print ('Результат: ',m)
    elif n<0:
        print('Невозможно расчитать для n<0')
    else:
        m *= 1+0.5**(2*n)
        n -=1
        multiply(n,m)

print('Введите верхнюю границу: ')
n = int(input())
multiply (n,2)