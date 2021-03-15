array = [1, 2, 3, 4]

print "\n Executando .map multiplicando cada item por 2"

new_array = array.map do |a|
    a * 2
end 

puts "\nArray original"
puts "#{array}"

puts "\n Nova Array"
puts " #{new_array}"