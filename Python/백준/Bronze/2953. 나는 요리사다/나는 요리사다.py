s = []
for i in range(5):
  n = list(map(int, input().split()))
  s.append(sum(n))

print(f"{s.index(max(s)) + 1} {max(s)}")