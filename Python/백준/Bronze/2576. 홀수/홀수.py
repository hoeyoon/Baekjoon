l1 = []
for _ in range(7):
  n = int(input())
  l1.append(n)

l2 = []
sum = 0
count = 0
for i in l1:
  if i % 2 == 1:
    l2.append(i)
    sum += i
    count += 1

if count == 0:
  print(-1)
else:
  print(sum, min(l2), sep="\n")