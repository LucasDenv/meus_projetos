lado = float(input('Lado = '))
altura = float(input('Altura = '))
area = lado*altura
print('Sua parede tem a dimensão de {} x {} e sua área é de {}m²'.format(lado, altura, area))
print('Para pintar essa parede é necessario de {} l de tintas'.format(area/2))
