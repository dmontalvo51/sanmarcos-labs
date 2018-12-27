

def promedio(a,b,c=30):
	return a+b+c/3

print(promedio(5,7))


def evaluarNeg(a,b):
	return not b==10 or a<20

print(evaluarNeg(10,20))


def readFiles(directorio):
	
	#file = open(directorio,"r")
	
	for l in range(1,2):
		print("linea")

	print("Fin de archivo")
	#file.close()

readFiles("input.txt")	


for alfa in range(1,10):
	print(alfa,end="_")



	








