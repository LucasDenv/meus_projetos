from random import randint
import os
import time
oceano = [['O','O','O','O','O'],['O','O','O','O','O'],['O','O','O','O','O'],['O','O','O','O','O'],['O','O','O','O','O']]
tabuleiro = [['O','O','O','O','O'],['O','O','O','O','O'],['O','O','O','O','O'],['O','O','O','O','O'],['O','O','O','O','O']]
for x in range(5):
    oceano[randint(0,4)][randint(0,4)] = 1
os.system('cls')
print(oceano)
for tentativa in range(5):
    for linha in tabuleiro:
        linha_print = ' '.join(str(elem) for elem in linha)
        print(linha_print)
    print('Tentativa ', tentativa + 1 )
    choice_linha = int(input('Escolha uma linha: ')) - 1
    choice_coluna = input('Escolha uma coluna: ')
    if choice_coluna == 'a' or 'A':
        choice_coluna = int(0)
    if choice_coluna == 'b' or 'B':
        choice_coluna = int(1)
    if choice_coluna == 'c' or 'C':
        choice_coluna = int(2)
    if choice_coluna == 'd' or "D":
        choice_coluna = int(3)
    if choice_coluna == 'e' or 'E':
        choice_coluna = int(4)
    if oceano[choice_linha][choice_coluna] != 0:
        print('Acertou um navio')
        tabuleiro[choice_linha][choice_coluna] = 'X'
        oceano[choice_linha][choice_coluna] = 0
    else:
        print('água')
    time.sleep(2)
    os.system('cls')
