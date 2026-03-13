n = int(input())
for i in range(n):
  l1 = list(map(str, input().split()))
  l1[0] = float(l1[0])
  for j in l1:
    if j == '@':
      l1[0] *= 3
    elif j == '%':
      l1[0] += 5
    elif j == '#':
      l1[0] -= 7
  print(f"{l1[0]:0.2f}")