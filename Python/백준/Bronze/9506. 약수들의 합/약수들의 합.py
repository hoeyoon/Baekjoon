while 1:
  n = int(input())
  sum = 0
  num = []
  if n == -1:
    break
  for i in range(1, n):
    if n % i == 0:
      num.append(i)

  for i in num:
    sum += i
  if n == sum:
    print(f"{n} =", end=" ")
    print(*num, sep=' + ')    
  else:
    print(f"{n} is NOT perfect.")