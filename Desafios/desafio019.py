import random

nomes = []
i = 0
while True:
    nome = input('Digite seu  nome: ')

    i = i + 1
    nomes.append(nome)

    if i == 4:
        break

nome_sorteado = random.choice(nomes)

print("O nome sorteado foi: {}".format(nome_sorteado))
