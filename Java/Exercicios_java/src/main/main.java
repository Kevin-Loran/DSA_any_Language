package main;

import java.util.Scanner;
import java.util.Locale;

public class main {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		
		double altura, comprimento, area, perimetro, diagonal;
		
		System.out.print("Digite a altura do retangulo: ");
		altura = sc.nextDouble();
		System.out.print("Digite o comprimento do retangulo: ");
		comprimento = sc.nextDouble();
		
		area = altura * comprimento;
		perimetro = (2 * altura) + (2 * comprimento);
		diagonal = Math.sqrt((altura * altura) + (comprimento * comprimento));
		
		System.out.println();
		System.out.println(" area = " + area);
		System.out.println(" perimetro = " + perimetro);
		System.out.println(" diagonal = " + String.format("%.2f", diagonal));
		
		
		

	}

}
