println("initializing poker odds\n") 
println("Input hand in the following format:")
println("NS NS: where N is the number (10 is denoted by T) and S is the suit, both cards separated by a space")
println("e.g. AH, TS, 3C, KD")

nums = "A23456789JQK"
suits = "CDHS"

function validateHandInput(hand::String)::Bool
	cards = split(hand, " ")
	for card in cards
		if isempty(card) continue end
		if length(card) > 2 return false end
		if !(card[1] in nums) return false end
		if !(card[2] in suits) return false end
	end
	return true
end

# main loop
while !eof(stdin)
	line = readline()
	println("line: ", line)
	if validateHandInput(line)
		continue
	else
		println("invalid hand")
	end
end