def fib(n):
  a,b = 0,1
  while a<n:
    print(a,end='')
    a,b=b,a+b
  print()

#PRUEBAS FIBONACCI

print(fibonacci(3) == [0,1,1])
print(fibonacci(5) == [0,1,1,2,3])
print(fibonacci(8) == [0,1,1,2,3,5,8,21])
print(fibonacci(0) == [])
print(fibonacci(-10) == [])

#NO PASA PRUEBAS. Se debia retorna lista no imprimir