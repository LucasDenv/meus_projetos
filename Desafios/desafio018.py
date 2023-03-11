#from math import cos, sin, tan, pi
#numerador = int(input('Quantos pi tem o numerador: '))
#denominador = int(input('Qual o denominador: '))
#angulo = numerador*pi/denominador
#cos = cos(angulo)
#sen = sin(angulo)
#tg = tan(angulo)

#print('cos: {}'.format(cos))
#print('sen: {}'.format(sen))
#print('tg:  {}'.format(tg))
from math import cos, sin, tan, pi, radians
angulo = float(input('Digite o angulo que voce desseja: '))
seno = sin(radians(angulo))
tg = tan(radians(angulo))
cose = cos(radians(angulo))
print('Cosseno : {:2f}'.format(cose))
print('Seno : {:2f}'.format(seno))
print('Tangente : {:2f}'.format(tg))
