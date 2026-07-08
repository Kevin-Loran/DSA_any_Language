package main;

import java.util.Locale;
import java.util.Scanner;

public class main {
  public static void main(String[] args) {
	  
	Locale.setDefault(Locale.US);  
	Scanner sc= new Scanner(System.in);
	
	int x, y, z, i, soma;
	
	System.out.println("Digite o primeiro numero: ");
	x = sc.nextInt();
	System.out.println("Digite o segundo numero: ");
	y = sc.nextInt();
	
	if (x < y) {
		z = x;
		x = y;
		y = z;
	}
	
	soma = 0;
	for (i = y; i < x; i++) {
		if (i % 2 != 0) {
			soma = soma + i;
		}
	}
	System.out.println();
	System.out.println("a soma de todos os impares é de: " + soma);
	
	sc.close();
  }
}
