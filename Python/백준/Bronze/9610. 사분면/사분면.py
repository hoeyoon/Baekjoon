n = int(input())
q1 = 0
q2 = 0
q3 = 0
q4 = 0
axis = 0
X = [0] * n
Y = [0] * n
for i in range(n):
  x, y = map(int, input().split())
  X[i] = x
  Y[i] = y

for i in range(n):
  if X[i] == 0:
    axis += 1
  elif X[i] > 0:
    if Y[i] == 0:
      axis += 1
    elif Y[i] > 0:
      q1 += 1
    else:
      q4 += 1
  else:
    if Y[i] == 0:
      axis += 1
    elif Y[i] > 0:
      q2 += 1
    else:
      q3 += 1

print(f"Q1: {q1}")
print(f"Q2: {q2}")
print(f"Q3: {q3}")
print(f"Q4: {q4}")
print(f"AXIS: {axis}")