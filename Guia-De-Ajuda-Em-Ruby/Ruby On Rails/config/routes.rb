Rails.application.routes.draw do
  #Nossa pagina principal
  root "articles#index"
  #Onde os arquivos HTML ou HTML.ERB vai estar
  resources :articles
  # For details on the DSL available within this file, see https://guides.rubyonrails.org/routing.html
end
