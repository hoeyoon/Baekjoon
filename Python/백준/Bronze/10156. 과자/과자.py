k, n, m = map(int, input().split())
r = k * n - m
if r < 0:
  print(0)
else:
  print(r)