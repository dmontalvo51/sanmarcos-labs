#Para Ejecutar, Instale Python y ejecute el comando "python demo.py"
import datetime

now = datetime.datetime.now()

print ("Bienvenidos al curso de programacion!")

if (now.hour in [18, 19]):
    matriculados = 39
    print("..:: PRIMER TURNO ::..")
    print("(%d alumnos)\n" % matriculados)
elif (now.hour in [20, 21]):
    matriculados = 38
    print("..:: SEGUNDO TURNO ::..")
    print("(%d alumnos)\n" % matriculados)
else:
    print("Que haces en el laboratorio? Ya vete a tu casa")

presentes = input("Cuantos alumnos hay? : ")

print("Donde estan los otros %d !? Hay que jalarlos por irse a Huancayo!!" % (matriculados - int(presentes)))