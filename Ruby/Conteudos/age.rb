result = ''

loop do
  puts result
  puts "Selecione uma das seguintes opções"
  puts "1- Descobrir a idade de uma pessoa"
  puts "0- Sair"
  puts "Opção: "
 
  option = gets.chomp.to_i

  if option == 1
    print "Digite o ano de nascimento: "
    year_of_birth= gets.chomp.to_i
    print "Digite o ano atual: "
    current_year = gets.chomp.to_i
    age = current_year - year_of_birth
    result = "Essa pessoa tem: #{age}"
  elsif option == 0
    break if option ==0
  else
    result = "Opção Invalida"
  end
  #Comando para limpar o console
  system "clear"
end
