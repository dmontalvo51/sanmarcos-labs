def derrotarVenonmancer(nivel,ataque):
	salud = 760 +120*nivel
	armadura = 1.2 +0.2*nivel
	ataque = armadura
	tiempo = salud/ataque
	return tiempo


heroe='venom'

def testMirana():
	print(str(derrotarMirana(1,1)).upper()=='CERO' or derrotarMirana(1,1)==0)
	print(round(derrotarMirana(10,20),2)==189.63)
	print(round(derrotarMirana(5,10),2)==552.86)

def testAxe():
	print(str(derrotarAxe(1,1)).upper()=='CERO')
	print(round(derrotarAxe(10,20),2)==116.67)
	print(round(derrotarAxe(5,10),2)==174.36)

def testHuskar():
	print(str(derrotarHuskar(1,1)).upper()=='CERO' or derrotarHuskar(3,1)==0)
	print(round(derrotarHuskar(10,20),2)==106.36)
	print(round(derrotarHuskar(5,10),2)==147.91)

def testZeus():
	print(str(derrotarZeus(1,1)).upper()=='CERO' or derrotarZeus(1,1)==0)
	print(round(derrotarZeus(10,20),2)==65.71)
	print(round(derrotarZeus(5,10),2)==125.44)

def testJakiro():
	print(str(derrotarJakiro(1,1)).upper()=='CERO' or derrotarJakiro(1,1)==0)
	print(round(derrotarJakiro(10,20),2)==79.03)
	print(round(derrotarJakiro(5,10),2)==169.39)

def testVenomancer():
	print(str(derrotarVenonmancer(1,1)).upper()=='CERO' or derrotarVenonmancer(1,1)==0)
	print(round(derrotarVenonmancer(10,20),2)==372.14)
	print(round(derrotarVenonmancer(5,10),2)==0)

Pruebas = {
	'mirana':testMirana,
	'axe':testAxe,
	'huskar':testHuskar,
	'zeus': testZeus,
	'jakiro' : testJakiro,
	'venom' : testVenomancer
}

if(heroe in Pruebas):
	Pruebas[heroe]()	




"""
AXE
Tipo : Fuerza
Salud base : 760
Armadura base: 1.2

HUSKAR

Tipo : Fuerza
Salud base : 672
Armadura base: 0.4

ZEUS

Tipo : Inteligencia
Salud base : 570
Armadura base: 1.76

JAKIRO

Tipo : Inteligencia
Salud base : 680
Armadura base: 2.6


MIRANA

Tipo : Agilidad
Salud base : 524
Armadura base: 2.6

VENOMANCER

Tipo : Agilidad
Salud base : 542
Armadura base: 5.2 
"""