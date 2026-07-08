package main;

import java.util.Locale;
import java.util.Scanner;

public class main {
  public static void main(String[] args) {
	  
	Locale.setDefault(Locale.US);  
	Scanner sc= new Scanner(System.in);
	
	int x, y;
	
	System.out.print("Digite o primeiro valor: ");
	x = sc.nextInt();
	
	System.out.print("Digite o segundo valor: ");
	y = sc.nextInt();
	
	if (x > y) {
		System.out.println("DECRESCENTE");
	}
	else if (y > x) {
		System.out.println("CRESCENTE");
	}
	
	sc.close();
  }
}
