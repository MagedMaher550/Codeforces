package a.vasya.and.socks;

import java.util.Scanner;

public class AVasyaAndSocks {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int m = input.nextInt();
        int k = 0;
        
        for(int i=0; i<n; i++)
            if(i%m == 0)
                n++;
                        
        System.out.println(n-1);
        
    }

}
