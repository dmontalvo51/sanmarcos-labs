def contarPositivosSumarNegativos(lista):
    cuenta = 0
    suma = 0

    if len(lista) == 0:
        return None

    for num in lista:
        if num > 0:
            cuenta += 1
        elif num < 0:
            suma += num

    return [cuenta, suma]


 #PRUEBAS
lista = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15]
print(contarPositivosSumarNegativos(lista) == [10, -65])



   