for _ in range(3):
  l1 = list(map(int, input().split()))
  count = 0
  count_1 = 0
  for i in l1:
    if i == 0:
      count += 1
    elif i == 1:
      count_1 += 1
  if count == 1:
    print('A')
  elif count == 2:
    print('B')
  elif count == 3:
    print('C')
  elif count == 4:
    print('D')
  if count_1 == 4:
    print('E')