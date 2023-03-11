inf = input('Digite algo: ')
print('Numeros ? ', inf.isnumeric())
print('Letras ? ', inf.isalpha())
print('Letras e Numeros ? ', inf.isalnum())
print('Decimal ? ', inf.isdecimal())
print('unicode é um digito decimal? ', inf.isdigit())
print('String(É um padrão de codificação final de caracteres que usa '
      'números de 0 a 127 para representar caracteres em inglês.)', inf.isascii())
print('Não contem espaço(Nao pode ser so numero) ? ', inf.isidentifier())
print('É possivel printar ? ', inf.isprintable())
print('Esta em minuscula: ', inf.islower())
print('Esta em maiuscula: ', inf.isupper())
print('É um epaço em branco ? ', inf.isspace())
print('Verifica se a primeria letra de cada palavra esta em maiuscula'
      '(numeros e simbolos sao ignorados ) ', inf.istitle())


