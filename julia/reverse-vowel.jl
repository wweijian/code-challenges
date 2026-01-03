vowels = "aeiouAEIOU"

function reverse_vowel(s)
	println("Function: reverse vowel")
	chars = collect(s) # Convert strint to array of  chars
	left = 1
	right = length(chars)

	while left < right
		while left < right && !(chars[left] in vowels) 
			left +=1
		end
		while left < right && !(chars[right] in vowels)
			right -= 1
		end
		if left < right
			chars[left], chars[right] = chars[right], chars[left]
			left += 1
			right -= 1
		end
	end

	return join(chars) # convert back to string
end

s1 = "IcEcreAmSandWich"
s1r = reverse_vowel(s1)
println(s1r)
