hora = int(input("Digite um horario: "))

if (hora <= 12  and hora >= 6):
    print("Bom dia")
elif (hora > 12 and hora <= 18):
    print("Boa Tarde")
else:
    print("Boa Noite")