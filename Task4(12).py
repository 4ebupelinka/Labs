import numpy as np

def arr():
    a = np.random.randint(-100,100,25)
    print('Массив:',a)
    print('Max: ',max(a))
    print('Min: ',min(a))

arr()