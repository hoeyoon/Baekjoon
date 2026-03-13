n = int(input())
sum = 0
for _ in range(n):
  a, s = map(int, input().split())
  while s - a >= 0:
    s -= a
  sum += s
print(sum)