package main;

import java.util.Locale;

public class main {

	public static void main(String[] args) {
		
		Locale.setDefault(Locale.US);
		
		int idade;
		double salario, altura;
		char genero;
		String nome;
		
		idade = 30;
		salario = 1.700;
		altura = 1.87;
		genero = 'm';
		nome = "so mais um silva";
		
		System.out.println("nome = " + nome);
		System.out.println("idade = " + idade);
		System.out.println("Salario = " + String.format("%.2f", salario));
		System.out.println("altura = " + String.format("%.2f", altura));
		System.out.println("genero = " + genero);
	}

}
