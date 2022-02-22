import math

def calc(k,w):
    fi0 = math.asin(1/k)
    T = (math.pi/2-fi0)/w
    return T

print ('Введите параметр k: ')
k = float (input())
print ('Введите w (радианы): ')
w = float (input())
if k >= 0 and w>= 0:
    print('Параметр Т: ', calc(k,w))

else:
    print('Нельзя вычислить для отрицательных значений угла или коэффицента k')