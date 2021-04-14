count = 0 
num = {}
loop do 
	print "Digite a chave e depois o valor: "
	num[gets.chomp] = gets.chomp
	count += 1
	if count == 3
		break
	end
end
num.each do |key, value|
	print "\nA chave é #{key} e o valor é #{value}"
end
