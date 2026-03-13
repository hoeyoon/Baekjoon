n = int(input())
v = input()
count_a = 0
count_b = 0
for i in v:
  if i == 'A':
    count_a += 1
  elif i == 'B':
    count_b += 1

if count_a > count_b:
  print("A")
elif count_a < count_b:
  print("B")
else:
  print("Tie")