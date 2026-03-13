sum = []
for i in range(10):
  n = int(input())
  sum.append(n)

s = 0
for i in sum:
  s += i

m = [0] * len(sum)
sum.sort()
avg = s / len(sum)
for i in range(len(sum)):
  for j in range(len(sum)):
    if sum[i] == sum[j]:
      m[i] += 1

for i in range(len(m)):
  if m[i] == max(m):
    idx = i
print(f"{avg:0.0f}")
print(sum[idx])