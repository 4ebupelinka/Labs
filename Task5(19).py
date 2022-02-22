def search():
    f= open('input.txt')
    inc = False
    dec = False
    count_dec =0
    count_inc =0
    a= f.readline()
    for i in f.readlines():
        b= i
        if a< b:
            if inc == False:
                inc = True
                dec = False
                count_inc+=1
        else:
            if dec == False:
                dec = True
                inc = False
                count_dec+=1

        a = b

    print('Ответ будет записан в файл output.txt')
    output = open('output.txt','w')
    if count_inc > count_dec:
        output.write('В исходном файле больше возрастающих последовательностей')
    elif count_inc < count_dec:
        output.write('В исходном файле больше НЕ возрастающих последовательностей')
    else:
        output.write('В исходном файле совпадает количество возрастающих и не возрастающих последовательностей')

search()