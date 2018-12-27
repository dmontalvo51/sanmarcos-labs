import filecmp

def copiar(original,copia):
    open(original,'a')
    f=open(copia,'w')
    f.write(original)
    print(diccionario.keys())
    print(n)
    f.close()

#PRUEBAS
copiar('input.txt','output.txt')
print(filecmp.cmp('input.txt','output.txt'))

