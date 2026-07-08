package main;

import java.util.Locale;
import java.util.Scanner;

public class main {
  public static void main(String[] args) {
	  
	Locale.setDefault(Locale.US);  
	Scanner sc= new Scanner(System.in);
	
	int x, i;
	System.out.print("Qual o tamanho do vetor: ");
	x = sc.nextInt();
	 
	double[] vet = new double[x];
	
	System.out.println();
	for (i = 0; i < x; i++) {
		System.out.print("Digite um valor para o vetor: ");
		vet[i] = sc.nextDouble();
	}
	
	System.out.println();
	System.out.println("Vetor digitado: ");
	for (i = 0; i < x; i++) {
		System.out.println(vet[i]);
	}
	
	sc.close
  }
}
