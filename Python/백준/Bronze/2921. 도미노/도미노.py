n = int(input())
sum = 0
for i in range(1, n + 1):
  sum += 1.5 * i * (i + 1)
print(f"{sum:0.0f}")