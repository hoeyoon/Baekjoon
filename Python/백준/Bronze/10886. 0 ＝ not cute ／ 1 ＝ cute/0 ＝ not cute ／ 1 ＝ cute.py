n = int(input())
num = [0] * n
for i in range(n):
  v = int(input())
  num[i] = v
count_1 = 0
count_0 = 0
for i in num:
  if i == 1:
    count_1 += 1
  elif i == 0:
    count_0 += 1
if count_1 > count_0:
  print("Junhee is cute!")
else:
  print("Junhee is not cute!")