import random

nomes = []
i = 0
while True:
    nome = input('Digite seu  nome: ')

    i = i + 1
    nomes.append(nome)

    if i == 4:
        break

nomes_embaralhados = nomes.copy()
random.shuffle(nomes_embaralhados)

print("Os nomes originais são: {}".format(nomes))
print("A ordem da apresentação será: {}".format(nomes_embaralhados))
