package main;

import java.util.Locale;
import java.util.Scanner;

public class main {
  public static void main(String[] args) {
	  
	Locale.setDefault(Locale.US);  
	Scanner sc= new Scanner(System.in);
	
	int idade1, idade2;
	String nome1, nome2;
	double media;
	
	System.out.println("Dados da primeira pessoa: ");
	System.out.print("nome: ");
	nome1= sc.nextLine();	
	System.out.print("idade: ");
	idade1 = sc.nextInt();
	
	System.out.println("Dados da segunda pessoa: ");
	System.out.print("nome: ");
	sc.nextLine();
	nome2= sc.nextLine();	
	System.out.print("idade: ");
	idade2 = sc.nextInt();
	
	media = (int)(idade1 + idade2) / 2;
	
	System.out.println();
	System.out.println("a media de " + nome1 + " e " + nome2 +  "é de: " + media);
	
  }
}
