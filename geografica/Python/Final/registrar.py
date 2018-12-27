import filecmp

def registrarAprobados(original,copia):
    open(original,'a')
    f=open(copia,'w')
    f.write(original)
    print(diccionario.keys())
    print(n)
    f.close()

    
diccionario = {'pepito' : 12 , 'jaime' : 16  , 'walter' : 10  , 'tommy' : 10.5  , 'carlitos' : 2 }
registrarAprobados(diccionario)
print(filecmp.cmp('aprobados.txt','aprobadosPrueba.txt'))


