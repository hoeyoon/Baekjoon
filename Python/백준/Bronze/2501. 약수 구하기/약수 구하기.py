n, k = map(int, input().split())
count = 0
r = []
for i in range(1, n + 1):
  if n % i == 0:
    count += 1
    r.append(i)

if count < k:
  print(0)
else:
  print(r[k - 1])