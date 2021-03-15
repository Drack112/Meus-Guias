class ArticlesController < ApplicationController
  #Para exibirmos cada pagina de HTML temos que seguir o modelo abaixo, porem mudando o nome do index

  def index
    #Importando uma informação
    @metodoSimples = ['Utilizando o método controller em array.']
    #Importando uma informação do banco de dados SQL
    @metodoSQL = Article.all
    
    @filtrarSQL = Article.find(1)

    @repeticao = repeticao

    @condicional = condicional

    @hash = {"Aula 1" => "Liberada", "Aula 2" => "Liberada", "Aula 3" => "Liberada", "Aula 4" => "Liberada"}

  end

  def repeticao
    jogos = ["Warframe", "Terraria", "Minecraft", "Cuphead"]

    for jogos in jogos
      puts jogos
    end
  end

  def condicional
    n = 2
    if n % 2
      n = "True, O valor #{n} é divisível por 2"
    else
      n = "Falso,O valor #{n} não é divisível por 2"
    end
  end   
  
end
