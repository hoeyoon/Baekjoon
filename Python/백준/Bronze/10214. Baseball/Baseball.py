n = int(input())
for _ in range(n):
  score_a = 0
  score_b = 0
  for i in range(9):
    a, b = map(int, input().split())
    score_a += a
    score_b += b
  if score_a == score_b:
    print("Draw")
  elif score_a > score_b:
    print("Yonsei")
  else:
    print("Korea")