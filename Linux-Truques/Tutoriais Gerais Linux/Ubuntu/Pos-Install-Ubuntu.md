# Pós Instalação Do Ubuntu

Esse arquivo tem suporte para a versão 20.04 do Ubuntu LTS e da versão 20.10 atualmente.

## Atualizando o sistema:

Para podermos atualizar qualquer pacote ou até mesmo a interface gráfica nós podemos dar até 3 comandos, eles são:
```
$ sudo apt update && sudo apt upgrade
```
```
$ sudo apt-get update && sudo apt-get upgrade
```
```
$ sudo apt dist-upgrade
```

## Baixar os codecs de multimídia e áudio:
```
$ sudo apt install ubuntu-restricted-extras
```
```
$ sudo apt install libavcodec-extra
```
```
$ sudo apt install libdvd-pkg
```

## Baixar o Gnome Tweaks

O Gnome Tweaks é uma ferramenta que permite que os usuários possam customizar seu gnome e modificar ele ao seu gosto, para isso iremos baixar a dependência necessária:
```
$ sudo apt install software-properties-common
```

Agora baixamos o Gnome-Tweaks
```
$ sudo apt install gnome-tweaks
```

## Instalar os drives automaticamente:
```
$ sudo ubuntu-drivers autoinstall
```

## Instalação do flash plugin, java, extensão rar, unzip, unar e funções de descompactação

Instalar o Flash para navegadores:
```
$ sudo apt-get install flashplugin-installer pepperflashplugin-nonfree
```
Instalar o Java:
```
$ sudo apt-get install openjdk-11-jdk
```
Instalar descompactadores:
```
$ sudo apt install rar unrar p7zip-full p7zip-rar
```
## Instalar o Gdebi

Se você prefere ter um instalador gráfico no seu ubuntu então digite:
```
$ sudo apt install gdebi
```
