capitais = Hash.new
#ou capitais = {}

capitais = { acre: "Rio Branco", sao_paulo: "São Paulo"}
puts capitais

capitais[:minas_gerais] = "Belo Horizonte"

puts capitais

puts capitais.keys

puts capitais.values

capitais.delete(:acre)

puts capitais

puts capitais.size
