# Passo a passo do projeto (Sempre que for fazer um projeto pensar como você faria manualmente)

# PASSO 01 - ENTRAR NOS SISTEMA DA EMPRESA

    # # https://dlp.hashtagtreinamentos.com/python/intensivao/login
    # # Utilizaremos uma biblioteca nesse processo (pyautogui)
    # # pyautogui - RPA - automação bot

# pip install pyautogui
import pyautogui
import time

#     clicar       ->   pyautogui.click
#     esrever      ->   pyautogui.write
# aperta uma tecla ->   pyautogui.press
# aperta atalho    ->   pyautogui.hotkey("ctrl","c")
# scroll (rolar)   ->   pyautogui.scroll

pyautogui.PAUSE = 0.5
# aperta a tecla do windows  (comand + barra de espaço)
pyautogui.press("win")
# digitar o nome do programa (chrome)
pyautogui.write("chrome")
# aperta enter
pyautogui.press("enter")

# digitar o link
link = "https://dlp.hashtagtreinamentos.com/python/intensivao/login"
pyautogui.write(link)
# apertar enter
pyautogui.press("enter")

#espera 5 segundos
time.sleep(1)

# PASSO 02 - FAZER LOGIN 

#clicar na caixinha de email(ou apertar por tab)

    # # pyautogui.press("tab")
pyautogui.click(x=725, y=407)

# digitar  o email
email = "lucasviniciusneemias@gmail.com"
pyautogui.write(email)

# passar para o campo de senha  
pyautogui.press("tab")

# digitar a senha
senha = "12345678"
pyautogui.write(senha)

# efetuar login
pyautogui.press("tab")
pyautogui.press("enter")
time.sleep(1)

# PASSO 03 - IMPORTAR BASE DE DADOS

# instalando bibliotecas para trabalhar com base de dados
    # # pip install pandas numpy openpyxl
import pandas

tabela = pandas.read_csv(r"C:\Users\lucas\OneDrive\Área de Trabalho\Curso python\Aula 01\produtos.csv")
print(tabela)

# PASSO 04 - CADASTRAR UM PRODUTO
time.sleep(1)

for linha in tabela.index: 
    # para cada linha da minha tabela "for var in lista de var
    # .index (linhas) .columns(coluna)
    pyautogui.click(x=803, y=298)
    # codigo
    # codigo = tabela.loc[linha,"coluna"]
    codigo = tabela.loc[linha,"codigo"]
    pyautogui.write(codigo)
    pyautogui.press("tab")
    #marca
    marca = tabela.loc[linha,"marca"]
    pyautogui.write(marca)
    pyautogui.press("tab")
    #tipo
    tipo = tabela.loc[linha,"tipo"]
    pyautogui.write(tipo)
    pyautogui.press("tab")
    #categoria
    pyautogui.write(str(tabela.loc[linha,"categoria"])) # "1"
    pyautogui.press("tab")
    #preço
    pyautogui.write(str(tabela.loc[linha,"preco_unitario"]))
    pyautogui.press("tab")
    #custo 
    pyautogui.write(str(tabela.loc[linha,"custo"]))
    pyautogui.press("tab")
    #obs
    obs = tabela.loc[linha,"obs"]
    if not pandas.isna(obs):
        pyautogui.write(obs)
    pyautogui.press("tab")
    # enviar o produto
    pyautogui.press("enter")
    #voltar para o inicio
    pyautogui.scroll(7000)

# PASSO 05 - REPETIR ISSO ATÉ A BASE DE DADOS ACABAR
    