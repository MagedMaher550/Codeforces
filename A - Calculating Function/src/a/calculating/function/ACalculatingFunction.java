package a.calculating.function;

import java.util.Scanner;

public class ACalculatingFunction {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        long n = input.nextLong();
        
        if(n%2 == 0)
            System.out.println((long)n/2);
        
        else
            System.out.println(-((long)n/2 + 1));
    
    }
}
