print('=====Boletim=====')
nota1 = int(input('Nota 1: '))
nota2 = int(input('Nota 2: '))
nota3 = int(input('Nota 3: '))
nota4 = int(input('Nota 4: '))

media = (nota1+nota2+nota3+nota4)/4

print('Sua media é: {}'.format(media))
if media >= 6:
    print('Aprovado')
else:
    print('Reprovado')

