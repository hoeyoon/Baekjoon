sum = 0
l1 = []
for i in range(4):
  a, b = map(int, input().split())
  sum += b
  sum -= a
  l1.append(sum)

print(max(l1))