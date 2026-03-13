s = input()
count = 0
for i in range(len(s)):
  if i == 0:
    count += 10
  elif s[i] == s[i - 1]:
    count += 5
  else:
    count += 10

print(count)