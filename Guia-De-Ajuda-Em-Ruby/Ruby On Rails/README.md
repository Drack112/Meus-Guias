
# Lista De Coisas a fazer antes que eu inicie o projeto

## 1) Em config/routes.rb adicionar o diretorio que vai receber os os arquivos


**Primeira maneira** - get "/articles", to: "articles#index"

**Segunda Maneira**  - resources :articles

**Terceira Maneira**  - root "articles#index"

Depois ir no terminal e digitar :
```RB
rails generate controller Articles index --skip-routes
```

## 2) Ir em articles_controller.rb e adicionar a linha
```rb
def index
end
```
## 3) Em app/views/articles/ criar um arquivo index.html.erb e adicionar qualquer coisa

```HTML
<h1>Hello World</h1>
``` 
# Gerar banco de dados com SQLite3


## 1) Gerar um modelo
```rb
rails generate model Article title:string body:text value:decimal
``` 
## 2) Migração de dados
```rb
rails db:migrate
```

### Exemplo Usando o SQLITE

Entrar no console do rails
```rb
rains c
```

Gerar um novo banco dados:

```rb
article = Article.new(title: "Hello Rails", body: "I am on Rails!", value: 10)
```

Salvar esse banco de dados: 

```rb
article.save
```

## Mostrar Banco de dados no HTML

Em articles_controller adicionamos a linha
```rb
@articles = Article.all
```
A gente vai pro HTML e adiciona: 
```HTML
<h1>Articles</h1>

<ul>
  <% @articles.each do |article| %>
    <li>
      <%= article.title %>
    </li>
  <% end %>
</ul>
```
# Gerar um Modelo CRUD (Create, Read, Update, and Delete)

Quase todos os aplicativos da web envolvem operações CRUD (Criar, Ler, Atualizar e Excluir). Você pode até descobrir que a maior parte do trabalho que seu aplicativo faz é CRUD. O Rails reconhece isso e fornece muitos recursos para ajudar a simplificar o código fazendo CRUD.

 ## 1) Gerando o modelo

Em routes.rb adicionar a linha

```rb
root "articles#index"

resources :articles
```

## 2) E na linha articles_controller.rb adicionar
```rb
def show
  @artcle = Article.find(params[:id])
end
```
## 3) Adicionamos um novo arquivo HTML chamado show.html.erb
```rb
<h1>Articles</h1>

<h1><%= @article.title%></h1>
<p><%= @article.body%></p>
<p><%= @article.value%></p>
```
# Gerando a rota para outros HTML

## 1) Em routes.rb deixar apenas as linhas
```rb
 root "articles#index"

 resources :articles
```
E digitar no terminal
```rb
 rails routes
```
2) Remover o HTML e adicionar o codigo no index
```HTML
<h1>Articles</h1>

<ul>
  <% @articles.each do |article| %>
    <li>
      <a href="<%= article_path(article) %>">
        <%= article.title %>
      </a>
    </li>
  <% end %>
</ul>
```
# Criando um novo article

## 1) Em articles_Controller adicionar

```rb
class ArticlesController < ApplicationController
  def index
    @articles = Article.all
  end

  def show
    @article = Article.find(params[:id])
  end

  def new
    @article = Article.new
  end

  def create
    @article = Article.new(title: "...", body: "...")

    if @article.save
      redirect_to @article
    else
      render :new
    end
  end
end
```



