package main;

import java.util.Scanner;

public class main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		int m, n, i, j;
		
		System.out.print("Digite o linha da matriz: ");
		m = sc.nextInt();
		System.out.print("Digite a coluna da matriz: ");
		n = sc.nextInt();
		
		int[][] mat = new int[m][n];
		
		for (i = 0; i < m; i++) {
			for (j = 0; j < n; j++) {
				System.out.print("Elemento ["+ i +  ", " + j +" ]: ");
				mat[i][j] = sc.nextInt();			
			}
		}
		
		System.out.println();
		System.out.println("a matriz digitada: ");
		for (i = 0; i < m; i++) {
			for (j = 0; j < n; j++) {
				System.out.print(mat[i][j]);			
			}
			System.out.println();
		}
		
		sc.close();
	}
}
