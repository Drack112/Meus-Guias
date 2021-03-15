
# Pós Instalação Elementary OS

Esse arquivo MD tem como função guiar o usuário sobre o que o mesmo deve fazer depois que instalar a distribuição [**ElementaryOS 5.**](https://elementary.io/pt_BR/)

# Tópicos

 - Realizar Update e Upgrade no sistema
 - Instalar Codecs e Drivers necessários
 - Realizar configurações que faltam no **Elementary OS 5**
 - Instalar programas que podem ser opcionais

## Avisos

 - Ambos os arquivos são configurados para uso pessoal
  - Se deseja alterar é recomendável um editor de texto
  - Não execute os arquivos sem pelo menos ler eles e saber o que está sendo instalado
  - Livre para alterações
  - Ambos os arquivos estão configurados em suas versões mais recentes
  
## Realizando Update e Upgrade no sistema

```
$ sudo apt update && sudo apt upgrade

$ sudo apt install software-properties-common software-properties-gtk

$ sudo apt-get update && sudo apt-get upgrade

$ sudo apt dist-upgrade
```

Esses comandos irão realizar o update e upgrade em seu sistema caso seja necessário ou tenha alguma atualização pendente.

Depois de concluir ambos os comandos digite o comando em baixo para remover pacotes que não são mais necessários.

```
$ sudo apt autoremove
```

## Instalar Drivers Placa De Vídeo (Opcional)
Esses comandos são só para quem possui placa de vídeo no computador.

Para Nvidia:

```
$ sudo add-apt-repository ppa:graphics-drivers/ppa

$ sudo apt-get update
```
Depois de executar esses comandos execute o comando abaixo para que ele identifique seu driver automaticamente:

```
$ sudo ubuntu-drivers autoinstall
```

Para AMD:

https://www.amd.com/pt/support

Acesse o site oficial e baixe o Driver de sua placa de vídeo, depois vai para seu diretório onde encontra-se o arquivo que você baixou.

```
$ cd ~/Downloads

$ tar -Jxvf amdgpu-pro-17.50-NNNNNN.tar.xz

$ cd ~/Downloads/amdgpu-pro-17.50-NNNNNN

$ ./amdgpu-pro-install -y
```


## Instalar codecs de media

```
$ sudo apt install ubuntu-restricted-extras
```

## Instalar Extensões zip, java e outros

O comando abaixo ira realizar a instalação de extensões zip, rar, tar, e outros.
```
$ sudo apt-get install unace rar unrar p7zip-rar p7zip sharutils uudeview mpack 
arj cabextract lzip lunzip
```

### Instalando o Java 9 (Opcional):
```
$ sudo add-apt-repository -y ppa:webupd8team/java
```
```
$ sudo apt-get update
```
```
$ sudo apt-get install oracle-java9-installery
```
## Download de Programas para uso diário (Opcional)

Aqui vai uma lista de comandos onde irá ser realizado a instalação de programas para uso diário, mas são opcionais se for pra você.

### Gparted (gerenciador de Partições)
```
$ sudo apt install gparted
```
### Bleachbit (Limpador De Disco)
```
$ sudo apt install bleachbit
```
### Gedit (Editor de texto)
```
$ sudo apt install gedit
```
### Flameshot (Ferramenta para tirar print)
```
$ sudo apt install flameshot
```
### Audacity (Editor de áudio)
```
$ sudo apt install audacity
```

### Hardinfo (Conseguir infos do sistema) 
```
$ sudo apt install hardinfo
```
