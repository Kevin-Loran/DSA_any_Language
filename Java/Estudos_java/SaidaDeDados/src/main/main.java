package main;

import java.util.Locale;

public class main {
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		
		int idade;
		double salario;
		String nome;
		char sexo;
		
		idade = 32;
		salario = 3456.70;
		nome = "Maria Silva";
		sexo = 'F';
		
		
		System.out.println(nome +" do sexo "+ sexo + ". tem " + idade + " anos" + " e ganha " + String.format("%.2f", salario) );

	}
}
