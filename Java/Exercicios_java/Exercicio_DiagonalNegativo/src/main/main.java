package main;

import java.util.Locale;
import java.util.Scanner;

public class main {
  public static void main(String[] args) {
	  
	Locale.setDefault(Locale.US);  
	Scanner sc= new Scanner(System.in);
	
	int m, i, j, contador;
	
	System.out.print("Qual ordem da matriz: ");
	m = sc.nextInt();
	
	double[][] mat= new double[m][m];
	
	contador = 0;
	for (i = 0; i < m; i++) {
		for (j = 0; j < m; j++) {
			System.out.print("Elemento ["+ i +"," + j+"]: ");
			mat[i][j] = sc.nextDouble();
			
			if (mat[i][j] < 0) {
				contador = contador + 1;
			}
		}
	}
	
	System.out.println();
	System.out.println("Diagonal principal: ");
	for (i = 0; i < m; i++) {
		System.out.print(mat[i][i] + " ");
	}
	System.out.println("quanatidade de negativos: " + contador);
	sc.close();
  }
}
