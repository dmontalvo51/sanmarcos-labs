def esfibonacci(lista):
    a, b = 0,1
    while a < n:
        if(n<100):
            print([a],end='')
            a, b = b, a+b
        else:
            print("[]")


#FIBONACCI

print(esfibonacci([0,1,1])==True)
print(esfibonacci([0,1,1,2,3])==True)
print(esfibonacci([0,1,1,2,3,5,8,21])==True)
print(esfibonacci([0,1,1,2,3,4,5,6])==False)
print(esfibonacci([])==True)

