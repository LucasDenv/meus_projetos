n = int(input('Digite o número da tabuada desejada: '))
aux = 1
print('===== Tabuada de {} ====='.format(n))
while aux <= 10:
    print('{} x {} = {}'.format(n, aux, aux*n))
    aux = aux + 1
print('='*24)
