num = []
puts " Digite tres valores : "
  x = gets.chomp.to_i
  y = gets.chomp.to_i
  z = gets.chomp.to_i
  num.push(x, y, z)
  
  num.map! do |h|
    h ** 2
    end
    puts " Os valores digitados elevados a segunda potencia tem como resultado : "
    puts " #{num} "
