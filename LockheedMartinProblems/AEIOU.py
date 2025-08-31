x = int(input())
for b in range(x):
    sentence = input()
    vowels = 'aeiouAEIOU'
    vowel_count = sum(1 for char in sentence if char in vowels)
    print(vowel_count)

    word = "python"
characters = list(word) # [char for char in word]
print(characters[2])
wordlength = len(word)
print(wordlength)