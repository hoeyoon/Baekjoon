a = [0.0] * 5
r = 0
for i in range(len(a)):
  n = float(input())
  a[i] = n
  if a[i] <= 40:
    a[i] = 40
  r += a[i]
print(f"{r / 5:0.0f}")