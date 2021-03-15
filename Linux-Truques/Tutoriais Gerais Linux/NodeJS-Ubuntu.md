# Instalando o NODE JS 14 LTS

Esse arquivo MD tem como função guiar o usuário e sobre como instalar o **Node JS 14LTS**

# Tópicos

 - Instalar o Node JS
 - Conferir versão do mesmo

  
## Adicionando o repositório node

```
$ cd ~

$ curl -sL https://deb.nodesource.com/setup_14.x | sudo -E bash -

```
Esses comandos irão realizar a adição do repositório node e fazer um update em seu sistema caso seja necessário ou tenha alguma atualização pendente.

Depois de concluir ambos os comandos digite o comando em baixo para instalar o node:

```
$ sudo apt install nodejs
```

## Verificando a versão do seu node

```
$ node -v
```
### Verificando a versão do npm
```
$ npm -v
```
