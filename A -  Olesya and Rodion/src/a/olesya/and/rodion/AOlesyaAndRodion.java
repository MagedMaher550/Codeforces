package a.olesya.and.rodion;

import java.util.Scanner;

public class AOlesyaAndRodion {

    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        
        int n = input.nextInt();
        int t = input.nextInt();
        
        if(n == 1 && t == 10)
            System.out.println(-1);
        else
        {
            if(t == 10)
            {
                System.out.print(1);
                for(int i=0; i<n-1; i++)
                    System.out.print(0);            
            }
            else
            {
                for(int i=0; i<n; i++)
                    System.out.print(t);
            }
        }
        
        System.out.println();
    }

}
