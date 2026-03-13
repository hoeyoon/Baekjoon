n = int(input())
l1 = list(map(int, input().split()))
count = 0
j = 1
for i in range(len(l1)):
  if l1[i] == 1:
    count += j
    j += 1
  elif l1[i] == 0:
    j = 1
print(count)