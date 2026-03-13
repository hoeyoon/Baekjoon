sum = 0
r = []
for _ in range(10):
  a, b = map(int, input().split())
  sum += b
  sum -= a
  r.append(sum)

print(max(r))