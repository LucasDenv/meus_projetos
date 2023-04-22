import os
import time
trens = []
local = []
for i in range(1, 15):
    trens.append(i)
    local.append(0)
# ---------- Linha p/1 ----------
print(' ---------- DIGITE 1 PARA SIM E 0 PARA NÃO ---------- ')
print('')
print(' ---------- Linhas saindo da estação 1 ---------- ')
print('')
linha_01_02 = int(input('Tem um trem saindo da estação 1 em direção a 2 ? '))
if linha_01_02 == 1:
    print(trens)
    aux = int(input('Qual o número do trem que esta nessa rota: '))
    local[aux-1] = "linha_01_02"
linha_01_03 = int(input('Tem um trem saindo da estação 1 em direção a 3 ? '))
if linha_01_03 == 1:
    print(trens)
    aux = int(input('Qual o número do trem que esta nessa rota: '))
    local[aux-1] = "linha_01_03"
linha_01_05 = int(input('Tem um trem saindo da estação 1 em direção a 5 ? '))
if linha_01_05 == 1:
    print(trens)
    aux = int(input('Qual o número do trem que esta nessa rota: '))
    local[aux-1] = "linha_01_05"
time.sleep(2)
os.system('cls')
# ---------- Linha p/2 ----------
print('---------- DIGITE 1 PARA SIM E 0 PARA NÃO---------- ')
print('')
print('---------- Linhas saindo da estação 2 ----------')
print('')
linha_02_01 = int(input('Tem um trem saindo da estação 2 em direção a 1 ? '))
if linha_02_01 == 1:
    print(trens)
    aux = int(input('Qual o número do trem que esta nessa rota: '))
    local[aux-1] = "linha_02_01"
linha_02_03 = int(input('Tem um trem saindo da estação 2 em direção a 3 ? '))
if linha_02_03 == 1:
    print(trens)
    aux = int(input('Qual o número do trem que esta nessa rota: '))
    local[aux-1] = "linha_02_03"
linha_02_04 = int(input('Tem um trem saindo da estação 2 em direção a 4 ? '))
if linha_02_04 == 1:
    print(trens)
    aux = int(input('Qual o número do trem que esta nessa rota: '))
    local[aux-1] = "linha_02_04"
linha_02_05 = int(input('Tem um trem saindo da estação 2 em direção a 5 ? '))
if linha_02_05 == 1:
    print(trens)
    aux = int(input('Qual o número do trem que esta nessa rota: '))
    local[aux-1] = "linha_02_05"
time.sleep(2)
os.system('cls')
#---------- Linha p/3 ----------
print('---------- DIGITE 1 PARA SIM E 0 PARA NÃO---------- ')
print('')
print('---------- Linhas saindo da estação 3 ----------')
print('')
linha_03_01 = int(input('Tem um trem saindo da estação 3 em direção a 1 ? '))
if linha_03_01 == 1:
    print(trens)
    aux = int(input('Qual o número do trem que esta nessa rota: '))
    local[aux-1] = "linha_03_01"
linha_03_02 = int(input('Tem um trem saindo da estação 3 em direção a 2 ? '))
if linha_03_02 == 1:
    print(trens)
    aux = int(input('Qual o número do trem que esta nessa rota: '))
    local[aux-1] = "linha_03_02"
linha_03_04 = int(input('Tem um trem saindo da estação 3 em direção a 4 ? '))
if linha_03_04 == 1:
    print(trens)
    aux = int(input('Qual o número do trem que esta nessa rota: '))
    local[aux-1] = "linha_03_04"
time.sleep(2)
os.system('cls')
#---------- Linha p/4 ----------
print('---------- DIGITE 1 PARA SIM E 0 PARA NÃO---------- ')
print('')
print('---------- Linhas saindo da estação 4 ----------')
print('')
linha_04_02 = int(input('Tem um trem saindo da estação 4 em direção a 2 ? '))
if linha_04_02 == 1:
    print(trens)
    aux = int(input('Qual o número do trem que esta nessa rota: '))
    local[aux-1] = "linha_04_02"
linha_04_03 = int(input('Tem um trem saindo da estação 4 em direção a 3 ? '))
if linha_04_03 == 1:
    print(trens)
    aux = int(input('Qual o número do trem que esta nessa rota: '))
    local[aux-1] = "linha_04_03"
time.sleep(2)
os.system('cls')
#---------- Linha p/5 ----------
print('---------- DIGITE 1 PARA SIM E 0 PARA NÃO---------- ')
print('')
print('---------- Linhas saindo da estação 5 ----------')
print('')
linha_05_01 = int(input('Tem um trem saindo da estação 5 em direção a 1 ? '))
if linha_05_01 == 1:
    print(trens)
    aux = int(input('Qual o número do trem que esta nessa rota: '))
    local[aux-1] = "linha_05_01"
linha_05_02 = int(input('Tem um trem saindo da estação 5 em direção a 2 ? '))
if linha_05_02 == 1:
    print(trens)
    aux = int(input('Qual o número do trem que esta nessa rota: '))
    local[aux-1] = "linha_05_02"
time.sleep(3)
os.system('cls')
#---------- Ponto A ---------- 
print('---------- DIGITE 1 PARA SIM E 0 PARA NÃO---------- ')
print('')
print('---------- Sensores do ponto A da linha Sul/Norte ----------')
print('')
#Linha Sul
ponto_24A = int(input('Tem um trem no sensor no cruzamento A da cidade 2 para a cidade 4:  '))
if ponto_24A == 1:
    print(trens)
    aux = int(input('Qual o número do trem que esta neste sensor: '))
    local[aux-1] = "Ponto_24A"
ponto_42A = int(input('Tem um trem no sensor antes do cruzamento A da cidade 4 para a cidade 2:  '))
if ponto_42A == 1:
    print(trens)
    aux = int(input('Qual o número do trem que esta neste sensor: '))
    local[aux-1] = "Ponto_42A"
#Linha leste
if ponto_24A == 0 and ponto_42A == 0:
    print('')
    print('---------- Sensores do ponto A da linha leste/oeste ----------')
    print('')
    ponto_15A = int(input('Tem um trem no sensor antes do cruzamento A da cidade 1 para a cidade 5: '))
    if ponto_15A == 1:
        print(trens)
        aux = int(input('Qual o número do trem que esta neste sensor: '))
        local[aux-1] = "sensor_15A"
    ponto_51A = int(input('Tem um trem no sensor antes do cruzamento A da cidade 5 para a cidade 1: '))
    if ponto_51A == 1:
        print(trens)
        aux = int(input('Qual o número do trem que esta neste sensor: '))
        local[aux-1] = "sensor_51A"
time.sleep(2)
os.system('cls')
#---------- Ponto B ----------
print('---------- DIGITE 1 PARA SIM E 0 PARA NÃO---------- ')
print('')
print('---------- Sensores do ponto B da linha Sul/Norte----------')
print('')
#Linha sul
ponto_24B = int(input('Tem um trem no sensor antes do cruzamento B da cidade 2 para a cidade 4: '))
if ponto_24B == 1:
    print(trens)
    aux = int(input('Qual o número do trem que esta neste sensor : '))
    local[aux-1] = "sensor_24B"
ponto_42B = int(input('Tem um trem no sensor antes do cruzamento B da cidade 4 para a cidade 2: '))
if ponto_42B == 1:
    print(trens)
    aux = int(input('Qual o número do trem que esta neste sensor: '))
    local[aux-1] = "sensor_42B"
#Linha leste
if ponto_24B == 0 and ponto_42B == 0:
    print('')
    print('---------- Sensores do ponto B da linha leste/oeste ----------')
    print('')
    ponto_13B = int(input('Tem um trem no sensor antes do cruzamento B da cidade 1 para a cidade 3: '))
    if ponto_13B == 1:
        print(trens)
        aux = int(input('Qual o número do trem que esta neste sensor: '))
        local[aux-1] = "sensor_13B"
    ponto_31B = int(input('Tem um trem no sensor antes do cruzamento B da cidade 3 para a cidade 1: '))
    if ponto_31B == 1:
        print(trens)
        aux = int(input('Qual o número do trem que esta neste sensor: '))
        local[aux-1] = "sensor_31B"
time.sleep(2)
os.system('cls')

#---------- Ponto C ----------
print('---------- DIGITE 1 PARA SIM E 0 PARA NÃO---------- ')
print('')
print('---------- Sensores do ponto C da linha Sul/Norte ----------')
print('')
#Linha Sul
ponto_25C = int(input('Tem um trem no sensor C do 2 -> 5:  '))
if ponto_25C == 1:
    print(trens)
    aux = int(input('Qual o número do trem que esta nessa rota: '))
    local[aux-1] = "sensor_25C"
ponto_52C = int(input('Tem um trem no sensor C do 5 -> 2:  '))
if ponto_52C == 1:
    print(trens)
    aux = int(input('Qual o número do trem que esta nessa rota: '))
    local[aux-1] = "sensor_52C"
#Linha Leste
if ponto_25C == 0 and ponto_52C == 0:
    print('')
    print('---------- Sensores do ponto C da linha leste/oeste ----------')
    print('')
    ponto_13C = int(input('Tem um trem no sensor C do 1 -> 3:  '))
    if ponto_13C == 1:
        print(trens)
        aux = int(input('Qual o número do trem que esta nessa rota: '))
        local[aux-1] = "sensor_13C"
    ponto_31C = int(input('Tem um trem no sensor C do 3 -> 1:  '))
    if ponto_31C == 1:
        print(trens)
        aux = int(input('Qual o número do trem que esta nessa rota: '))
        local[aux-1] = "sensor_31C"
time.sleep(2)
os.system('cls')

# ----------Ponto D ----------
print('---------- DIGITE 1 PARA SIM E 0 PARA NÃO---------- ')
print('')
print('---------- Sensores do ponto D da linha Sul/Norte ----------')
print('')
#Linha sul
ponto_25D = int(input('Tem um trem no sensor D do 2 -> 5:  '))
if ponto_25D == 1:
    print(trens)
    aux = int(input('Qual o número do trem que esta nessa rota: '))
    local[aux-1] = "sensor_25D"
ponto_52D = int(input('Tem um trem no sensor D do 5 -> 2:  '))
if ponto_52D == 1:
    print(trens)
    aux = int(input('Qual o número do trem que esta nessa rota: '))
    local[aux-1] = "sensor_52D"
#Linha leste
if ponto_25D == 0 and ponto_52D == 0:
    print('')
    print('---------- Sensores do ponto C da linha leste/oeste ----------')
    print('')    
    ponto_34D = int(input('Tem um trem no sensor D do 3 -> 3:  '))
    if ponto_34D == 1:
        print(trens)
        aux = int(input('Qual o número do trem que esta nessa rota: '))
        local[aux-1] = "sensor_34D"
    ponto_43D = int(input('Tem um trem no sensor D do 4 -> 3:  '))
    if ponto_43D == 1:
        print(trens)
        aux = int(input('Qual o número do trem que esta nessa rota: '))
        local[aux-1] = "sensor_43D"
time.sleep(2)
os.system('cls')

#---------- Ponto E ---------- 
print('---------- DIGITE 1 PARA SIM E 0 PARA NÃO---------- ')
print('')
print('---------- Sensores do ponto E da linha Sul/Norte ----------')
print('')
ponto_15E = int(input('Tem um trem no sensor E do 1 -> 5:  '))
if ponto_15E == 1:
    print(trens)
    aux = int(input('Qual o número do trem que esta nessa rota: '))
    local[aux-1] = "sensor_15E"
ponto_51E = int(input('Tem um trem no sensor E do 5 -> 1:  '))
if ponto_51E == 1:
    print(trens)
    aux = int(input('Qual o número do trem que esta nessa rota: '))
    local[aux-1] = "sensor_51E"
#Linha leste
if ponto_15E == 0 and ponto_51E == 0:
    print('')
    print('---------- Sensores do ponto C da linha leste/oeste ----------')
    print('')

    ponto_34E = int(input('Tem um trem no sensor E do 3 -> 4:  '))
    if ponto_34E == 1:
        print(trens)
        aux = int(input('Qual o número do trem que esta nessa rota: '))
        local[aux-1] = "Ponto_34E"
    ponto_43E = int(input('Tem um trem no sensor E do 4 -> 3:  '))
    if ponto_43E == 1:
        print(trens)
        aux = int(input('Qual o número do trem que esta nessa rota: '))
        local[aux-1] = "Ponto_43E"
time.sleep(2)
os.system('cls')
print('CARREGANDO...')
time.sleep(3)
os.system('cls')
#---------- Cancelas A ----------
cancela_15A = 'Aberto'
cancela_24A = 'Aberto'
#---------- Cancelas B ----------
cancela_13B = 'Aberto'
cancela_24B = 'Aberto'
#---------- Cancelas C ----------
cancela_13C = 'Aberto'
cancela_25C = 'Aberto'
#---------- Cancelas D ----------
cancela_25D = 'Aberto'
cancela_34D = 'Aberto'
#---------- Cancelas E ----------
cancela_15E = 'Aberto'
cancela_34E = 'Aberto'

if ponto_24A == 1 or ponto_42A == 1:
    cancela_15A = 'Fechado'
else :
    cancela_15A = 'Aberto'
if ponto_24B == 1 or ponto_42B == 1:
    cancela_13B = 'Fechado'
else: 
    cancela_13B = 'Aberto' 
if ponto_25C == 1 or ponto_52C == 1:
    cancela_13C = 'Fechado'
else:
    cancela_13C = 'Aberto'
if ponto_25D == 1 or ponto_52D == 1:
    cancela_34D = 'Fechado'
else:
    cancela_34D = 'Aberto' 
if ponto_15E == 1 or ponto_51E == 1:
    cancela_34E = 'Fechado' 
else:
    cancela_34E = 'Aberto' 
print('Cancela 15A: {} '.format(cancela_15A))
print('Cancela 24A: {} '.format(cancela_24A))
print('Cancela 13B: {} '.format(cancela_13B))
print('Cancela 24B: {} '.format(cancela_24B))
print('Cancela 13C: {} '.format(cancela_13C))
print('Cancela 25C: {} '.format(cancela_25C))
print('Cancela 25D: {} '.format(cancela_25D))
print('Cancela 34D: {} '.format(cancela_34D))
print('Cancela 15E: {} '.format(cancela_15E))
print('Cancela 34E: {} '.format(cancela_34E))
print('')
print('')
print('')
print('---------- DIGITE 1 PARA SIM E 0 PARA NÃO---------- ')
print('')
print('')
print('')
mostrar = int(input('Quer ver a localizaçao de algum trem ? '))
if mostrar == 1 :
    mostrar = int(input('qual trem vc quer rastrear? ') )
    mostrar = mostrar - 1
    print(local[mostrar])
