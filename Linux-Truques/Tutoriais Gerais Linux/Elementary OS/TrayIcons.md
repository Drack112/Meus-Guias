# Tray Icons Elementary OS

A equipe por trás do elementary OS tem uma visão muito clara e única do que eles querem alcançar com este sistema operacional, tanto de uma perspectiva funcional, de suas extensas linhas de guia de estilo, quanto de sua ideia de que também no mundo do código aberto os programadores podem ser recompensado por seus esforços. 

Um dos problemas no sistema operacional elementar é a falta de suporte para mostrar indicadores de aplicativos ou ícones de bandeja na bandeja do sistema. Muitos aplicativos requerem alguma integração com a bandeja do sistema ou, pelo menos, tornam a vida do usuário um pouco mais conveniente, tendo indicadores de aplicativos na bandeja do sistema. 

 Mas os usuários também estão perdendo indicadores para aplicativos como VLC e Dropbox. Este é um problema que foi introduzido no mais recente sistema operacional elementar Juno.

## Como mostrar indicadores de app na bandeja do sistema no Elementary OS

 1. Primeiro, precisamos habilitar o suporte ppa no sistema então abra o Terminal, digite o seguinte comando e pressione Enter:
```
$ sudo apt install software-properties-common software-properties-gtk
```
2. Agora temos que adicionar um ppa, então digite o seguinte comando e pressione Enter:
```
$ sudo add-apt-repository ppa:yunnxx/elementary
```
3. Agora atualize seu sistema digitando o seguinte comando:
```
$ sudo apt update
```
4. Agora instale a funcionalidade do indicador de aplicativo, digitando o seguinte comando:
```
$ sudo apt install indicator-application wingpanel-indicator-ayatana
``` 
5. Agora precisamos editar o arquivo /etc/xdg/autostart/indicator-application.desktop. Digite o seguinte comando para ir para a pasta de inicialização automática:
```
$ cd / etc / xdg / autostart /
```
6) Digite o seguinte comando para editar o arquivo:
```
$ sudo nano indicator-application.desktop
```
7) Procure a linha com o seguinte conteúdo:
```
OnlyShowIn = Unidade; GNOME;
```
8) Adicione “Pantheon;” até o fim da linha:
```
OnlyShowIn = Unidade; GNOME; Pantheon;
```
9) Salve as alterações com Ctrl + X (Sair).

10) Agora reinicie seu sistema.

Mas antes iremos resolver o erro de ícones duplos

11) Primeiro renomeie o arquivo nm-applet.desktop digitando o seguinte comando no terminal:
```
$ sudo mv /etc/xdg/autostart/nm-applet.desktop /etc/xdg/autostart/nm-applet.old
```

12) Agora reinicie o sistema mais uma vez.

Agora os ícones duplos se foram.
