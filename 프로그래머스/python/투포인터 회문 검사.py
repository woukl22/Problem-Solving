word = input()
left = 0
right = len(word)-1

is_palindrome = True
while left < right:
  if word[left] == word[right]:
    left+=1
    right-=1
    continue
  else:
    is_palindrome = False
    break

print(is_palindrome)