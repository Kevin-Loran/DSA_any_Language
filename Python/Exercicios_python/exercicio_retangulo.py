import math

comprimento = float(input("Digite o comprimento: "))
altura = float(input("Digite o altura: "))

area = float(comprimento * altura)
perimetro = float(2 * (comprimento + altura))
angulo = float(math.sqrt((comprimento ** 2) + (altura ** 2)))

print("AREA = ", area)
print("PERIMETRO = ", perimetro)
print(f"ANGULO = {angulo:.2f}")