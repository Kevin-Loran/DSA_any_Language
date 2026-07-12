nome1: str
nome2: str
salario1: float
salario2: float
genero: str
idade:int

nome1 = str(input("digite o primeiro nome: "))
salario1 = float(input("digite o primeiro salario: "))
print("//////////////////////////////////////////")
nome2 = str(input("digite o segundo nome: "))
salario2 = float(input("digite o segundo salario: "))
print("//////////////////////////////////////////")
genero = str(input("Digite um genero: "))
idade = int(input("digite sua idade: "))
print("//////////////////////////////////////////")
print(" ")
print(f"a/o {nome1} ganha um salario de {salario1}")
print(f"a/o {nome2} ganha um salario de {salario2}")
print(f"genero: {genero}")
print(f"idade: {idade}")