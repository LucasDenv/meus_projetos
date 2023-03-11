from math import sqrt, pow
c_o = int(input('Cateto oposto: '))
c_a = int(input('Cateto adjacente: '))

print('Sua Hipotenusa é: {} '.format((sqrt(pow(c_o, 2) + pow(c_a, 2)))))

