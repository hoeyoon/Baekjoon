n = int(input())
if n == 1:
  print("*")
else:
  for i in range(n):
    if i % 2 == 1:
      for j in range(n):
        print(end=" ")
        print(end="*")
    else:
      for j in range(n):
        print(end="*")
        print(end=" ")
    print(end="\n")