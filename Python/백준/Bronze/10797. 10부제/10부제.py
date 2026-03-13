n = int(input())
l1 = list(map(int, input().split()))
count = 0
for i in l1:
  if i == n:
    count += 1

print(count)