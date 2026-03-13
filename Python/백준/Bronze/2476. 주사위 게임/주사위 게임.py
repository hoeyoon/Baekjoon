n = int(input())
r = [0] * n
for i in range(n):
  a, b, c = map(int, input().split())
  if a == b == c:
    r[i] = 10000 + a * 1000
  elif a == b:
    r[i] = 1000 + a * 100
  elif b == c:
    r[i] = 1000 + b * 100
  elif a == c:
    r[i] = 1000 + a * 100
  else:
    r[i] = max(a, b, c) * 100

print(max(r))