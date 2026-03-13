t = int(input())
for i in range(t):
  n = int(input())
  l1 = list(map(int, input().split()))
  sum = 0
  for j in l1:
    sum += j
  print(sum)