package a.drazil.and.date;

import java.util.Scanner;

public class ADrazilAndDate {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        long a = input.nextLong();
        long b = input.nextLong();
        long s = input.nextLong();
        
        if((s - Math.abs((double)a) - Math.abs((double)b)) >= 0 && (s - Math.abs((double)a) - Math.abs((double)b))%2 == 0)
            System.out.println("YES");
        else
            System.out.println("NO");

    }
    
}
