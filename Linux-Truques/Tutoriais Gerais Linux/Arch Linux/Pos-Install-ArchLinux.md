# Pós instalação Arch Linux

## Tópicos:

* Configurar o sudo
* Instalar o yay
   * Como usar o yay
* Pacotes Adicionais
  * Codecs
  * Desempacotadores 
* Firewall 

### Configurar o sudo para seu usuário

***sudo*** --> Utilitário que permite executarmos comandos que apenas o usuário root conseguisse acessar.

Por padrão o Arch linux não vem com o sudo instalado, para podermos instalar e configurar ele nós entramos como root e escrevemos no terminal:

```sh 
pacman -S sudo
```

Quando ele terminar a instalação nós vamos adicionar nosso usuário ao grupo root, com isso a gente escreve:

```sh
nano /etc/sudoers
``` 

Iremos descer até encontrar uma linha onde está escrito **"root ALL=(ALL) ALL"**, quando encontrarmos ele nós colocamos em baixo uma linha com nosso usuário, no meu caso ira ficar:

```sh
seu_nome_de_usuario ALL=(ALL) ALL
```

Salve o arquivo e tente executar o comando:

```sh
sudo pacman -Syu
```

### Instalando o yay

O yay é um pacote onde permite baixar os pacotes do repositório AUR e já compilar os mesmos em nosso sistema, com ele a gente não precisa ir no git, clonar e dar makepkg -si a cada pacote.

Para baixarmos ele precisamos primeiramente do **git** e do **base-devel**, o git é o que permite clonarmos repositórios do github, o base-devel é o que permite a gente compilar ele.

```sh
sudo pacman -S git go base-devel
```

Depois de termos baixado vamos agora clonar o repositório do yay:

``` sh
git clone https://aur.archlinux.org/yay.git
```

Entramos no diretório do yay:

``` sh
cd yay/
``` 

E então compilamos ele:

```sh 
makepkg -si
```

#### Como usar o yay

E pronto! Agora podemos utilizar o yay sem problemas, por exemplo instalar o discord, podemos instalar ele usando o yay dessa forma:

```sh
yay -S discord
```

### Pacotes Adicionais

Algumas libs de audio, videos e extensões de arquivos.

```sh 
sudo pacman -S a52dec faac faad2 flac jasper lame libdca libdv libmad libmpeg2 libtheora libvorbis libxv wavpack x264 xvidcore gstreamer0.10-plugins
``` 

Codecs extras:

```sh 
sudo pacman -S exfat-utils fuse-exfat a52dec faac faad2 flac jasper lame libdca libdv gst-libav libmad libmpeg2 libtheora libvorbis libxv wavpack x264 xvidcore gstreamer0.10-plugins flashplugin libdvdcss libdvdread libdvdnav gecko-mediaplayer dvd+rw-tools dvdauthor dvgrab
```

Descompactadores:

```sh
sudo pacman -S p7zip p7zip-plugins unrar tar rsync
```

### Firewall

Nós iremos instalar um firewall, habilitar ele e habilitar durante a inicialização

Instalar:

```sh
sudo pacman -S ufw
```

Ativar ele:

```sh 
sudo ufw enable
``` 

Conferir seus status:

```sh 
sudo ufw status verbos
``` 

Ativar durante a inicialização:

```sh 
sudo systemctl enable ufw.service
``` 
