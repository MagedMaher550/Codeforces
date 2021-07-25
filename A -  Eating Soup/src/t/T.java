package t;

import java.util.Scanner;

public class T {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int m = input.nextInt();        
	if (m==0)
            System.out.println(1);
	
        else if (m <= n / 2) System.out.println(m);
	else System.out.println(n - m);
    }

}
