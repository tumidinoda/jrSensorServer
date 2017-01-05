import math

n = 7
i = n
fak = 1

print('Invariante: fak=n!/i! ' +
      str(fak) + " = " +
      str(math.factorial(n) / math.factorial(i)))
while i:
    fak *= i
    i -= 1
    print("Invariante: fak=n!/i! " +
          str(fak) + " = " +
          str(math.factorial(n) / math.factorial(i)))

print(fak)

print("Invariante: fak=n!/i! " +
      str(fak) + " = " +
      str(math.factorial(n) / math.factorial(i)))
