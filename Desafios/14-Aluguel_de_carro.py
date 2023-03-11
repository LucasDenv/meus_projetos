print("===========Aluguel de carros===========")
dias = int(input('Por quantos dias foi alugado ? '))
km = float(input('Quantos km foram pecorridos ? '))
print('O valor a pagar é de R${:.2f} '.format((dias*60)+(0.15*km)))
