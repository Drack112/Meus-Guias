<style>
    h1{
    text-align: center;
}
</style>

<h1>💻Instalação do Arch Linux</h1>

## Tópicos ✔️

* Configurações iniciais
* Particionamento
* Formatação
* Montagem
* Baixar os pacotes
* Fstab
* Configurar o sistema
  * chroot
  * timezone
  * locale-gen
  * locale.conf
  * vconsole.conf
  * hostname
  * Habilitar recursos iniciais
  * grub
  * usuários
* Finalização

### Configurações inicias ⌨️


Usar o Layout do teclado, meu caso é br-abnt.

```sh
loadkeys br-abnt
```

Timezone e sincronização do relógio.

```sh
timedatectl set-ntp true
```

### Particionamento 💽

⚠️ *OS COMANDOS ABAIXO VÃO SALVAR TODO O CONTEÚDO EM UMA PARTIÇÃO SÓ, O /*

⚠️ *SE QUISER FAZER SWAP VERIFIQUE O VIDEO QUE MANDEI NA PÓS INSTALAÇÃO.*

###### Pequeno Resumo

Os comandos abaixo vão carregar o **fdisk**, o sda é meu hd, se o seu hd for sdb, sdc, você rode `fdisk /dev/sd(letra do teu hd ou ssd)`, em caso de duvidas rode o comando `fdisk --list` para verificar o teu hd/ssd.

***fdisk*** --> fdisk é um utilitário presente em diversos sistemas operacionais que realiza particionamento de discos rígidos. Há versões do fdisk para Linux, DOS, Windows, FreeDOS e OS/2. No caso do DOS manipula apenas partições FAT.

```sh
fdisk /dev/sda
```

⚠️ ***AS LETRAS ABAIXO SÃO COMO COMANDOS DE TECLADO DO FDISK, IREI ESPECIFICAR CADA UM.***


**o**    --> Criar uma assinatura gpt.
**n**    --> Iniciar o particionamento.

**enter 4 vezes** --> Em resumo, ele irá pedir uma serie de valores porém ele ja define alguns valores como padrão, nesse caso os valores padrões do fdisk vão fazer a seleção do disco inteiro e criar a partição principal.  

***w***   --> Salvar o participamento, por segurança rode o comando `fdisk --list` e confira se o seu hd/ssd tem uma partição só.

### Formatação 💾

O comando abaixo irá formatar para o tipo de arquivo, nesse caso é **ext4**.

```bash
mkfs.ext4 /dev/sda1
``` 

### Montar o HD 🖴

Toda distro tem uma pasta chamada **mnt** que é onde recebe o conteúdo de instalação, iremos montar o hd/ssd.

```bash
mount /dev/sda1 /mnt
```
    
### Baixar os componentes 👨‍💻

Na instalação do Arch Linux, a distro tem uma ferramenta cli chamada de **reflector**.

***reflector*** --> Uma ferramenta que permite a gente definir mirrors pro nosso sistema.

Iremos dizer pro reflector pra ele salvar no arquivo `mirrorlist` as mirrors brasileiras que foram atualizadas nas ultimas 12 horas.

```sh
reflector --save /etc/pacman.d/mirrorlist --sort rate -a 12 -n 3 -p https -p http -c BR
``` 

O comando abaixo é o `pacstrap`.

**pacstrap** --> Ele vai ser responsável por baixar os pacotes e configurar os mesmo no nosso /mnt, neste caso como o nosso hd está montado nessa pasta, ele vai instalar os recursos pro nosso pc.

🗂️ Nesse caso iremos instalar os seguintes recursos:

* grub --> Gerenciador de inicialização.
* linux --> Kernel Linux.
* linux-firmware --> Pacotes de drivers pro kernel linux, essenciais pra quem usa notebook.
* intel-ucode --> Microcódigo da intel, se sua cpu for amd neste caso seria `amd-gpu`.
* base --> Base do sistema.
* nvidia --> Drivers nvidia (opcional).
* bash-completion --> Extensão de tab complete pro bash.
* nano --> Editor de texto simples.
* networkmanager --> Utilitário de internet, tanto cabeada quanto de wifi.
* gnome --> Desktop gnome.
* gnome-terminal --> Terminal do gnome.

Nesse caso o nosso comando seria: 

```sh
pacstrap /mnt grub linux linux-firmware intel-ucode base nvidia bash-completion nano networkmanager gnome gnome-terminal
```

### Fstab 📝

Iremos agora gerar um arquivo **fstab**

***fstab*** --> Um arquivo que diz ao nosso sistema as partições que o sistema possui, o id delas, o que elas são e como devem ser inicializadas. 

A ferramenta genfstab gera isso de forma automática.

```sh
genfstab -U /mnt >> /mnt/etc/fstab
```

### Configurando o sistema 🖥️

#### Chroot 🚀

***chroot*** --> Comando do Linux que permite a gente entrar na partição do nosso sistema, neste caso iremos sair do pen drive de instalação e entrar no shell do nosso HD.

```sh
arch-chroot /mnt
``` 

#### Timezone 🌎

No comando abaixo iremos dizer que queremos criar um arquivo chamado localtime que irá receber as propriedades de um timezone.

Eu sou de São paulo então seria:

```sh 
ln -sf /usr/share/zoneinfo/America/Sao_Paulo /etc/localtime
```

Agora realizamos a sincronização:

```sh
hwclock --systohc
```

#### Locale gen 🈯

Nesse passo vamos informar ao Arch Linux que iremos definir o idioma do nosso sistema.

O arquivo locale.gen possui todos os idiomas, mas ambos estão comentados. Para isso vamos te que descomentar a linha com o idioma brasileira e gerar o locale.

```sh
nano /etc/locale.gen 
# --> Descomente o pt_BR.UTF-8 aqui
```

Agora rodamos o comando abaixo para gerar o nosso locale/idioma:

```sh
locale-gen
```

#### locale.conf 🔷

Agora com o locale gerado vamos escrever o `locale.conf` que irá receber nosso idioma.

```sh 
echo "LANG=pt_BR.UTF-8" >> /etc/locale.conf
```

#### vconsole.conf 🕹️

O comando abaixo irá escrever um arquivo que ira dizer qual layout de teclado usaremos pro console.

```sh
echo "KEYMAP=br-abnt" >> /etc/vconsole.conf
``` 

#### Hostname 👾

O hostname será o nome que iremos dar para a nossa maquina, quando você criar um usuário e abrir o terminal por exemplo, ao seu lado vai tar o nome da sua maquina.

No meu caso vai ser Arch-Desktop, o resultado final vai sair como `seu_nome@Arch-Desktop`.

```sh
echo "arch" >> /etc/Arch-Desktop
```

#### Habilitando recursos inicias 🏷️

Nesse tópico a gente vai iniciar recursos necessários para o nosso sistema funcionar bem. Dentre els o ***gdm*** que é o nosso gerenciador de login e o ***NetworkManager*** que irá habilitar internet no nosso Arch Linux.

```sh
systemctl enable gdm
``` 

```sh
systemctl enable NetworkManager
``` 

#### Grub 🔗

O grub vai ser responsável pelo boot do nosso sistema, ele apesenta uma interface de console bem simples para você poder escolher em qual sistema você quer dar boot.

Primeiro iremos instalar ele no nosso HD. Note que não utilizaremos o sda1 e sim sda.

```sh
grub-install /dev/sda
``` 

Agora geramos o arquivo de configuração do grub

```sh
grub-mkconfig -o /boot/grub/grub.cfg
``` 

E pronto, se não retornou nenhum erro então ja conseguimos dar bot no sistema, mas ainda não acabou.

#### Criar usuário 👤

O comando abaixo irá cria um usuário e colocar ele nos grupos padrões?

```sh
useradd -mg users -G wheel seu_nome
``` 

Logo depois a gente utiliza o comando ***passwd***, iremos usar ele duas vezes para definir senha de root e senha do teu usuário:

```sh
passwd
``` 

```sh
passwd teu_nome
``` 

### Finalização 🧶

E por fim, a gente vai sair do chroot e iremos dar reboot no nosso sistema ja configurado com Gnome!

```sh
exit
```

```sh
reboot
```

Agora você pode aproveitar seu Arch Linux!
