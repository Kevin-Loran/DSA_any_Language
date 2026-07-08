package main;

import java.util.Locale;
import java.util.Scanner;

public class main {
	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		String nome1, nome2;
		double salario1, salario2;
		int idade;
		char sexo;
		
		System.out.print("Digite o primeiro nome: ");
		sc.nextLine();
		nome1 = sc.nextLine();
		System.out.print("Digite o primeiro salario: ");
		salario1 = sc.nextDouble();
		

		System.out.println("//////////////////////////");
		System.out.print("Digite o Segundo nome: ");
		sc.nextLine();
		nome2 = sc.nextLine();
		System.out.print("Digite o Segundo salario: ");
		salario2 = sc.nextDouble();
		
		System.out.println("//////////////////////////");
		System.out.print("Digite a idade: ");
		idade = sc.nextInt();
		System.out.println("Digite o sexo: ");
		sexo = sc.next().charAt(0);
		
		
		
		
	}
}
