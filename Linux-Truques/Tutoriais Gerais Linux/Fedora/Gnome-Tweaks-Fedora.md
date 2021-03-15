# Gnome-Tweaks no Fedora

Esse arquivo tem como função guiar o usuário a instalar extensões do Gnome no Fedora 33.

## Instalando o Gnome-Tweaks

Para instalar a ferramenta de customização do Gnome a gente da o comando:
```
$ sudo dnf install gnome-tweak-tool
```

## Como adicionar extensões

Para podermos adicionar uma extensão no nosso gnome do fedora nós precisamos primeiro encontrar seu repositório atual, quando encontrado vamos clonar esse repositório com o git.

Irei fazer o teste com os Tray Icons por exemplo:
```
$ git clone https://github.com/phocean/TopIcons-plus.git

$ cd Topicons/

$ make

$ make install

```
No comando acima nós clonamos o repositório, entramos nele e então compilamos o mesmo com make e make install.
