package main;

import java.util.Locale;

public class main {
	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		
		double a;
		int b;
		
		a = 5.67;
		b = (int) a;
		
		System.out.println(b);
	}
}
