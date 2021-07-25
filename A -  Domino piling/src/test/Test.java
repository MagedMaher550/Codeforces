package test;

import java.util.Scanner;

public class Test {

    public static void main(String[] args) {
       
        Scanner input = new Scanner(System.in);
        int M = input.nextInt();
        int N = input.nextInt();
        
        if(M%2 == 0)
            System.out.println(N*(M/2));
        
        else
            System.out.println((int)(Math.floor((N*M)/2)));
 
    }

}
