# FrameWork
#     Django
#     Flask
#     Flet
#       - sites                 }
#       - programas de computador       }  TUDO COM O MESMO CÓDIGO
#       - aplicativos de celular}

#       "PASSO A PASSO"
          
#   Título Helezap

#   Botão de Iniciar o chat
#       - Pop up
#       - Escreva seu nome
#       - Entrar no chat   

#   Chat
#       - "pessoa" entrou no chat 
#       - Mensagens do usuário

#   Campo para enviar mensagem
  
#   Botão de enviar

import flet as ft
import datetime # pra por data e hora das mensagens

def main(pagina):
    nm_site = ft.Text("Helezap")

    nome_usuario = ft.TextField(label = "Escreva seu nome") # label em ingles é rotulo

    chat = ft.Column (height = 300 )

    def enviar_mensagem_tunel(informacoes): # "BACK-END"
        chat.controls.append(ft.Text(informacoes))
        pagina.update()
    pagina.pubsub.subscribe(enviar_mensagem_tunel)            # websocket (Criando o tunel)

    def enviar_mensagem(evento):
        # colocar o nome do usuario da mensagem
        texto_campo_mensagem = f"{nome_usuario.value} : {campo_mensagem.value}" 
        pagina.pubsub.send_all(texto_campo_mensagem)

        # limpar o campo_mensagem
        campo_mensagem.value = ""
        pagina.update()

    campo_mensagem = ft.TextField(label = "Escreva sua mensagem aqui")

    bt_enviar = ft.ElevatedButton("Enviar", on_click = enviar_mensagem)

    def entrar_chat(evento):
        # feche o popup
        popup.open = False

        # tire o botão "iniciar chat" da tela
        pagina.remove(bt_iniciar)

        # Criar o nosso chat
        pagina.add(chat)

        # criar o campo de enviar mensagem
        linha_mensagem = ft.Row(
            [campo_mensagem, bt_enviar]
        )
        pagina.add(linha_mensagem)

        # botão de enviar mensagem  
        txt_entrada = f"{nome_usuario.value} entrou no chat"
        pagina.pubsub.send_all(txt_entrada)
        pagina.update()

    # pop up abre uma telinha
    popup = ft.AlertDialog(
        open = False, 
        modal = True, 
        title = ft.Text("Bem vindo ao Helezap"),
        content = nome_usuario,
        actions = [ft.ElevatedButton("Entrar", on_click = entrar_chat)] # ft.ElevatedButton comando usado para criar botões
        )

    # por padrão toda função que está no on_click recebe um evento como parâmetro
    # Função definida para o botão que está logo abaixo
    def iniciar_chat(evento):  
        print("Iniciar o Chat")
        pagina.dialog = popup   # flet chama os pop up de dialog
        popup.open = True
        pagina.update()
    bt_iniciar = ft.ElevatedButton("Iniciar Chat", on_click=iniciar_chat)
    
    
    
    pagina.add(nm_site)
    pagina.add(bt_iniciar)

# ft.app(main)
ft.app(main, view=ft.WEB_BROWSER)
