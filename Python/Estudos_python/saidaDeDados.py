idade: int
nome: str
salario: float
genero: str

idade = 67
nome = "Maria Silva"
salario = 4560.9
genero = "F"

print(f" a funcionaria {nome} do genero {genero},tem {idade} anos e ganha {salario:.3f}")

print(" a funcionaria {:s} do genero {:s},tem {:d} anos e ganha {:.2f}".format(nome, genero, idade, salario))