import os
nomes = []
numero_apostado1 = []
numero_apostado2 = []
numero_apostado3 = []
i = 0
j = 0
acertos1=[]
acertos2=[]
acertos3=[]
print('------------------ Casa de Apostas ------------------')
qtd = int(input('Quantos apostadores ?'))
os.system('cls')
while True:
    nome = input('Informe seu nome: ')
    n1 = int(input('informe o primeiro numero da aposta: '))
    n2 = int(input('informe o segundo numero da aposta: '))
    n3 = int(input('informe o terceiro numero da aposta: '))
    i = i+1
    nomes.append(nome)
    numero_apostado1.append(n1)
    numero_apostado2.append(n2)
    numero_apostado3.append(n3)
    os.system('cls')
    if i == qtd:
        break
s1 =  int(input('Primeiro numero sorteado: '))
s2 =  int(input('Segundo numero sorteado: '))
s3 =  int(input('Terceiro numero sorteado: '))
os.system('cls')
acerto1 = ''
acerto2 = ''
acerto3 = ''
while True:
    #acerto 1
    if s1 == numero_apostado1[j] or s2 == numero_apostado2[j] or s3 == numero_apostado3[j]:
        acerto1 = nomes[j]
    #acerto 2
    if (s1 == numero_apostado1[j] and s2 == numero_apostado2[j]) or (s1 == numero_apostado1[j] and s3 == numero_apostado3[j]) or (s2 == numero_apostado2[j] and s3 == numero_apostado3[j]): 
        acerto2 = acerto1
        acerto1 = ''
    #acerto 3    
    if s1 == numero_apostado1[j] and s2 == numero_apostado2[j] and s3 == numero_apostado3[j]:
        acerto3 = acerto2
        acerto2 = ''
        acertos3.append(acerto3)
    if acerto1 != '':
        acertos1.append(acerto1)
    if acerto2 != '':   
        acertos2.append(acerto2)
    j = j+1   
    if j == qtd:
        break
print('Acertaram 1 numero: {}'.format(acertos1))
print('Acertaram 2 numeros: {}'.format(acertos2))
print('Acertaram 3 numeros: {}'.format(acertos3))
if acertos3!= '':
    print('Parabêns você(s) acertaram os 3 números: {} '.format(acertos3))
    
