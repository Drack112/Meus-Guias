# Instalar o Arch Linux no modo UEFI

Esse arquivo tem como intuito ser um guia para uma instalação simples e direta da distribuição **Arch Linux**, iremos realizar particionamento, instalação dos pacotes necessários e configurar seu boot.

## AVISOS

 1. ESSE GUIA NÃO É PARA A INSTALAÇÃO DO ARCH NO MODO **BIOS**.
 2. É ALTAMENTE RECOMENDÁVEL **LER A WIKI OFICIAL DO ARCH**.
 3. DE UMA PEQUENA ESTUDADA SOBRE O ARCH LINUX EM GERAL.
4. NESSE GUIA SÓ IREI APRESENTAR O BÁSICO SOBRE ARCH LINUX.

# O que é o Arch Linux?
Arch Linux, ou Arch, é uma distribuição Linux para computadores com arquitetura x86-64. Desenvolvido inicialmente pelo canadense Judd Vinet, esse sistema operacional se apresenta de maneira diferente de outros, como Windows e MacOS.

O Arch Linux utiliza o modelo Rolling Release. Esse modelo se traduz na simplificação das atualizações, uma vez que apenas uma única atualização é necessária para obter a versão mais recente do sistema, tornando-o estável e atualizado tão rapidamente quanto os programas são testados e disponibilizados.

Ferramentas como o Arch Build System permitem com que os usuários consigam criar seus próprios pacotes compatíveis com o pacman, ajudando a sustentar o repositório complementar AUR.

**Algumas vantagens do Arch Linux são:**

## Alto desempenho

Esse sistema possui uma alta performance, quando comparado com os demais, vindo com o mínimo de recursos necessários para se utilizar. Esse minimalismo também permite um alto grau de customização e controle do sistema, uma das características mais marcantes do Arch Linux.

## Simplicidade e Minimalismo

Um dos principais conceitos Linux é a sua simplicidade. Essa simplicidade não só é existente no Arch como é enfatizada. O Arch Linux permite com que o usuário instale apenas o que ele precisa, mantendo o sistema em sua máxima rapidez e estabilidade.

## Compatibilidade com hardwares antigos

O Arch Linux possui todas as ferramentas básicas das outras distribuições Linux, disponíveis em repositórios online gerenciados pelo Pacman. Dessa forma, seja em um computador moderno ou em um hardware antigo(desde que possua um processador i686 ou superior, isso exclui qualquer processador anterior ao Pentium 2 e outras plataformas), o Arch é possível de ser utilizado sem problemas de funcionamento, uma vez que sua versão utiliza o mínimo de recursos o possível, ao mesmo tempo em que possui um grande poder de customização.

## Flexibilidade

O Arch Linux, alem de possuir todas as vantagens do  Software Livre / Open Source, desde a sua instalação básica permite que se utilize qualquer versão de kernel sem causar problemas, além de permitir a instalação de diversos  ambientes gráficos. É possível utilizar o KDE, Gnome, XFCE e outros ambientes utilizando o layout padrão, além de se poder alternar entre eles. O fato é que o Arch é um sistema totalmente configurável e transparente.

### Baixando a ISO

Primeiro você deve tar baixando a ISO do Arch Linux, a mesma é bem leve possuindo somente 600M de espaço. [Baixe a ISO clicando aqui](https://www.archlinux.org/download/).

Agora realize o pen drive bootável com seu programa favorito, mas é altamente recomendável o [Balena Etcher](https://www.balena.io/etcher/).

Se quiser realizar o pen drive bootável pelo terminal do Linux [clique aqui.](https://github.com/Drack112/Linux-Truques/blob/main/Tutoriais%20Gerais%20Linux/Pen-Drive-Bootavel-Terminal.md)

### Iniciando o Arch Linux

Primeiro no menu de boot inicie pelo seu pen drive com Arch Linux e então você sera levado ao terminal de instalação do Arch. Não precisa ter medo.

Quando o terminal iniciar e ele então te der o terminal para a instalação já podemos começar a instalar o Arch Linux na nossa maquina.

# Instalando o Arch Linux
Primeiro de tudo iremos começar configurando o layout do nosso teclado na instalação.

No meu caso eu uso um teclado com layout **br-abnt** então no terminal eu irei digitar:
```
$ loadkeys br-abnt
```

Agora vamos configurar o relógio do Arch com o relógio da nossa BIOS.
```
$ timedatectl set-ntp true
```

## Particionamento

Primeiro identifique qual é seu HD com:
```
$ fdisk -l
```

No meu caso o HD é o **/dev/sda**. Para eu começar meu particionamento primeiro irei digitar o comando:

```
$ gdisk /dev/sda
```
**--> NESSE PARTICIONAMENTO IREMOS FAZER APENAS A PARTIÇÃO "/", E UMA DE BOOT, NÃO IREMOS CONFIGURAR SWAP OU /home**.

Quando você digitar o comando você ira ser levado para um pequeno menu no própio terminal, com ele iremos realizar alguns procedimentos utilizando as opções que ele nos oferece.

### Usando o gdisk

 1. Primeiro pressionamos a tecla **o** para ele criar uma partição gpt.
 2. Depois disso pressione **y** para confirmar. 
 3. Pressione **n** e quando você tiver dando enter você ira ver que ele ira falar **"Last Sector"** com isso você digite **+100M** para ele criar uma partição de apenas 100 megas. De enter e depois escreva **EF00** para ele informar que a partição é **UEFI**.
 4. Depois pressione **n** e de enter 4 vezes para ele usar o resto do HD.
 5. Feito isso pressione **w** e de enter.
 
## Formatando e montando o HD

Se você seguiu os passos até agora sem obter nenhum erro então podemos realizar o processo de formatação do HD.

Como temos duas partições nós iremos primeiro formatar a partição de boot que no meu caso é **/dev/sda1**.

```
$ mkfs.vfat /dev/sda1
```

Agora a gente formata a partição **/** que no meu casso é o **/dev/sda2**:

```
$ mkfs.ext4 /dev/sda2
```

Agora para montarmos a partição de uefi primeiro necessitamos criar uma pasta de boot onde ele ira receber todos os arquivos de boot uefi.

Iremos criar primeiro os diretórios com o comando: 
```
$ mkdir -p /mnt/boot/efi
``` 
Depois montamos nossa partição uefi na pasta:

``` 
$ mount /dev/sda1 /mnt/boot/efi
```

Nessa etapa agora iremos montar a partição do **/** :

```
$ mount /dev/sda2 /mnt
```

Com as partição formatadas e montadas agora podemos ir no processo de selecionar o que queremos em nosso Arch Linux. Primeiro iremos configurar as mirrors, depois iremos baixar o que realmente queremos em nosso sistema.

## Baixando os componentes

Iremos usar um recurso que tem no Arch Linux chamado de **reflector**, com ele podemos selecionar nossas mirrors em apenas um comando, mas antes precisamos conferir se temos conexão com internet, para isso digite: 

```
$ ping -c3 google.com
```
Se os 3 testes de ping forem bem sucedidos então temos conexão com internet, agora iremos selecionar nossas mirrors com o comando: 

```
$ reflector --save /etc/pacman.d/mirrorlist --sort rate -a 12 -p https -p http -c BR
``` 
Esse comando ira selecionar as todas as mirrors brasileiras que foram atualizadas nas ultimas 12 horas, se você quiser conferir quais mirrors ele selecionou você pode digitar:

```
$ cat /etc/pacman.d/mirrorlist
```

Com as mirrors ja selecionadas agora podemos baixar os nossos componentes, aqui vai uma lista do que eu normalmente baixo em meu Arch Linux.

 - **grub** --> Gerenciador de Boot.
 - **linux** --> Kernel Linux.
  - **linux-firmware** --> Conectar os hardwares ao seu sistema.
  - **intel-ucode/amd-ucode** --> Microcodigo do seu processador, se ele for intel use intel-ucode, se for amd use amd-ucode.
  - **efibootmgr** --> Pacote para o grub que identifica uma partição efi e permite o boot.
 - **base** -->  Conjunto mínimo de pacotes para definir uma instalação básica do Arch Linux.
 - **bash-completion** --> Conjuntos de pacotes pro shell bash.
 - **nano** --> Editor de texto no terminal.
 - **networkmanager** --> Gerenciador de Internet.
 - **gnome** --> Interface gráfica gnome.
 - **gnome-terminal** --> Terminal gnome.

Com esses pacotes selecionados, agora podemos instalar eles no nosso sistema principal, para isso iremos digitar:

```
$ pacstrap /mnt grub linux linux-firmware intel-ucode efibootmgr base bash-completion nano networkmanager gnome gnome-terminal
```
Quando tudo for instalado nós iremos agora configurar o arquivo **fstab**, esse arquivo é responsável por dizer para o sistema onde ele deve iniciar e configurar.

```
$ genfstab -U /mnt >> /mnt/etc/fstab
```

## Configurando o Arch Linux

Até agora só realizamos o básico, particionamos o HD, formatamos, montamos e instalamos os recursos bases, agora iremos configurar o Arch Linux para que o mesmo possa ser inicializável e já tenha tudo o que necessita.

A primeira coisa que iremos fazer é entrar no nosso HD que possui os componentes instalados. Para isso digite:

``` 
$ arch-chroot /mnt
```
Entrando no HD iremos agora começar as configurações, a primeira delas sera nosso **localtime** para isso iremos dar um comando para identificar nosso local, no meu caso eu estou em São Paulo então ira ficar: 
```
$ ln -sf /usr/share/zoneinfo/America/Sao_Paulo /etc/localtime
```
Ele ira copiar as informações de são Paulo para um arquivo chamado **localtime**.

Agora com o nosso localtime definido iremos sincronizar o relógio do nosso localtime com o comando: 
```
$ hwclock --systohc
``` 
Com o relógio sincronizado nós podemos colocar o sistema em **pt-br**, para isso digite: 
```
$ nano /etc/locale.gen #descomenta o pt_BR.UTF-8 aqui
```
Quando o idioma for descomentado nós podemos escrever no terminal **locale-gen** para ele selecionar a língua brasileira.

Agora iremos fazer uma série de configurações, iremos definir a linguagem, o layout de teclado e o hostname, para isso iremos digitar 3 comandos.

O primeiro ira definir a linguagem do sistema: 
```
$ echo  "LANG=pt_BR.UTF-8" >> /etc/locale.conf
```
O segundo ira definir o nosso layout de teclado:
```
$ echo  "KEYMAP=br-abnt" >> /etc/vconsole.conf
```
E o terceito ira definir o nosso hostname:
``` 
$ echo  "arch" >> /etc/hostname # aqui vc dá o nome que vc quer pro teu pc, não precisa ser arch não
``` 

Como instalamos o **gnome** no nosso arch nós podemos habilitar a tela de login que vem incluso nele, para habilitamos a gente escreve:

``` 
$ systemctl enable gdm
```
Também iremos habilitar o serviço de internet: 
``` 
$ systemctl enable NetworkManager
```

## Instalando o Grub

E para finalizar precisamos agora de um gerenciador de boot para nosso computador, como instalamos o **grub** então vamos configurar ele na nossa maquina.

Primeiro instalamos ele no nosso HD o /dev/sda:
``` 
$ grub-install /dev/sda
``` 
Depois realizamos o arquivo de configuração:
``` 
$ grub-mkconfig -o /boot/grub/grub.cfg
``` 

## Adicionando usuários
O ultimo passo agora é adicionar seu usuário no Arch, para isso apenas use o comando: 

```
$ useradd -mg users -G wheel (seu nome)
```
Ele ira fazer um usuário com as permissões já necessárias, agora iremos fazer a senha de root e a senha do nosso usuário.

Para fazer a senha de root:
```
$ passwd
```

Para fazer a senha de seu usuário:

``` 
$ passwd (seu usuario)
``` 

## Reiniciando  sistema

Com todos os comandos já definidos e seu usuário também apenas de um exit no terminal e escreva:

```
$ reboot
```

Agora é só aproveitar seu Arch Linux :)
