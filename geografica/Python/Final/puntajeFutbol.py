def calcularPuntaje(lista):
    listaf = lista.split(":")
    i = 1
    puntaje = 0
    while(i<len(listaf)):
        if(listaf[i]>listaf[i-1]):
            puntaje = puntaje + 3
        elif(listaf[i]==listaf[i-1]):
            puntaje = puntaje + 1

    return puntaje



#PRUEBAS

print(calcularPuntaje([ "1:2" , "1:1" , "3:2" , "0:2" ])== 4)
print(calcularPuntaje([ "0:2" , "0:1" , "3:2" , "0:2" ])== 3)
print(calcularPuntaje([ "2:1" , "3:1" , "3:2" , "5:2" ])== 12)
