
sentence = input("Enter sentence: ")

words = sentence.split()
reversed_words = []

for word in words:
    reversed_words.append(word[::-1])

new_sentence = " ".join(reversed_words)
print(new_sentence)