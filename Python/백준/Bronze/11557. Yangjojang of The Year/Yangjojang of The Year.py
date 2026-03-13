t = int(input())
for _ in range(t):
  n = int(input())
  name = []
  cost = []
  for i in range(n):
    a, b = input().split()
    b = int(b)
    name.append(a)
    cost.append(b)
  idx = cost.index(max(cost))
  print(name[idx])  