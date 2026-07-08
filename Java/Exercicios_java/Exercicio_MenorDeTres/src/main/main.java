package main;

import java.util.Locale;
import java.util.Scanner;

public class main {
  public static void main(String[] args) {
	  
	Locale.setDefault(Locale.US);  
	Scanner sc= new Scanner(System.in);
	
	int a, b, c, menor;
	
	System.out.println("Digite tres valores: ");
	a = sc.nextInt();
	b = sc.nextInt();
	c = sc.nextInt();
	
	if (a < b && a < c) {
		menor = a;
	}
	else if (b < a &&  b < c) {
		menor = b;
	}else {
		menor = c;
	}
	
	System.out.println();
	System.out.println("Menor numero: " + menor);

	
	sc.close();
  }
}
