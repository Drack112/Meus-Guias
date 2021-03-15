# Pen Drive bootável pelo Terminal

Aqui você vai conferir como fazer um Pen Drive bootável de qualquer Distribuição Linux através do própio Terminal do Linux.


## Preparando o ambiente

Antes de tudo precisamos preparar o Pen Drive formatando ele em seu devido formato. Como iremos fazer através do terminal então precisamos apenas de uma ISO Linux e obviamente o Terminal.

No meu caso eu irei usar a distribuição [Linux Mint](https://linuxmint.com/)

## Encontrando o Pen Drive

Com o terminal aberto primeiro precisamos identificar nosso Pen Drive

  Para isso digite: 
 ``` 
$ sudo fdisk --list (Comando para listar todos os dispositivos de armazenamento conectados em seu computador) 
 ```

![Screenshot](https://i.imgur.com/0JJ3Rci.png?raw=true"ffff")

Nesse print podemos ver que o meu Pen Drive é o **/dev/sdb**. Com essa informação já podemos formatar ele.

## Formatando o Pen Drive

Com a informação do Pen Drive ja podemos preparar ele para a nossa ISO.

**--> TENHA UM BACKUP DE SEUS ARQUIVOS ANTES DE FORMATAR**

Primeiro vamos retirar as partições montadas

![Screenshot](https://i.imgur.com/iSapAia.png?raw=true)

```
$ sudo umount /dev/sdb1 
```

Com a partição desmontada agora vamos formatar em tipo FAT32

```
$ sudo mkfs.vfat -I /dev/sdb
```

Realize de novo o comando **sudo fdisk --list** e para saber se seu procedimento deu certo tenha esse resultado

![Screenshot](https://i.imgur.com/sPQDxs2.png?raw=true)



## Colocando a ISO no Pen Drive

Com sua ISO de Linux baixada e o Pen Drive formatado chegou a hora de nós realizarmos o procedimento para fazer o Pen Drive Bootável

Antes vamos explicar qual será o comando

**sudo dd if=Local Da iso of=/dev/sdb**

O **dd**, que são as iniciais de **Data Definition**, é um utilitário de linha de comando que em primeiro lugar, tem como principal função converter e copiar arquivos. No nosso caso podemos usar ele para copiar os arquivos da nossa ISO no Pen Drive

No **if** iremos dizer pra o **dd** onde está nosso arquivo ISO e no **of** vamos estar dizendo para ele onde queremos que os arquivos da ISO vão.

Na minha situação o comando ira ser:
``` 
$ sudo dd if=~/Downloads/linuxmint-20-cinnamon-64bit.iso  of=/dev/sdb
```
Dependendo do tamanho da ISO o processo pode demorar um pouco, então pegue um café e aguarde o processo.

Depois de esperar pelo processo faça o processo de reiniciar o PC e entrar no menu de boot, com isso você agora tem um Pen Drive Bootavel pelo Terminal =)

## Finalização

Eu espero que esse tutorial tenha ajudado você, tenha um bom dia e se cuide =D

**VIVA AO LINUX**
