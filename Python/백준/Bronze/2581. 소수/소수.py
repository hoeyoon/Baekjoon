m = int(input())
n = int(input())
sum = []
count = 0
for i in range(m, n + 1):
  count = 0
  for j in range(1, i + 1):
    if i % j == 0:
      count+=1
  if count == 2:
    sum.append(i)
r = 0
for i in sum:
  r += i
if r == 0:
  print(-1)
else:
  print(r)
  print(min(sum))