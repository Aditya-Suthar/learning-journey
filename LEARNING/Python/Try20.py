sentence = input("Enter sentence: ")

words = sentence.split()   #spilt function takes each word between the spaces
longest = max(words, key=len) #compare the words on the basis of their length

print("Longest word:", longest)
print("Length:", len(longest))