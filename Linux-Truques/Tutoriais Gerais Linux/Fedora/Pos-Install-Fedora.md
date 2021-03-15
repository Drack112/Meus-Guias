# Pós Instalação Do Fedora

Esse arquivo tem suporte para a versão 33 do Fedora Workstation.

## Atualizando o sistema:

Para podermos atualizar qualquer pacote ou até mesmo a interface gráfica nós podemos dar até 2 comandos, eles são:
```
$ sudo dnf update
```
```
$ sudo dnf upgrade
```

## Baixar o RPMFUSION:

O **RPMFUSION** permite que nós podemos ter mais aplicativos, libs e drivers no nossos gerenciador de aplicativos **DNF**. 

Para instalar primeiro vamos instalar a versão de software livre:
```
$ sudo dnf install https://download1.rpmfusion.org/free/fedora/rpmfusion-free-release-$(rpm -E %fedora).noarch.rpm
```
E agora iremos baixar a versão de terceiros:
```
$ sudo dnf install https://download1.rpmfusion.org/nonfree/fedora/rpmfusion-nonfree-release-$(rpm -E %fedora).noarch.rpm
```

## Remover apps inúteis (opcional)
```
$ sudo dnf remove cheese evolution evolution-ews evolution-help gfbgraph gnome-boxes gnome-calendar gnome-contacts gnome-dictionary gnome-documents gnome-getting-started-docs gnome-initial-setup gnome-maps gnome-online-miners gnome-photos gnome-user-docs gnome-user-share gnome-video-effects simple-scan totem tracker-miners yelp
```
