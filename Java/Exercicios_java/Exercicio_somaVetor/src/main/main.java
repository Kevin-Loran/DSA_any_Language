package main;

import java.util.Locale;
import java.util.Scanner;

public class main {
  public static void main(String[] args) {
	  
	Locale.setDefault(Locale.US);  
	Scanner sc= new Scanner(System.in);
	
	int x, i;
	double soma, media;
	
	System.out.print("Qual o tamanho do vetor: ");
	x = sc.nextInt();
	
	double[] vet = new double[x];
	
	soma = 0;
	for (i = 0; i < x; i++) {
		System.out.print("Digite o valor da posição " + 1 + ": ");
		vet[i] = sc.nextDouble();
		
		soma = soma + vet[i];
	}
	
	media = soma / x;
	
	System.out.println();
	System.out.print("VALORES = ");
	for (i = 0; i < x; i++) {
		System.out.print(vet[i]+ " ");
	}
	System.out.println("SOMA = "+ soma);
	System.out.println("MEDIA = "+ media);
	
	sc.close();
  }
}
