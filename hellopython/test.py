text = input()
word = input()
def search(text, word):
    range1=text.split()
    if word in range1:
        return "word found"
    else:
        return "word not found"

print(search(text, word))