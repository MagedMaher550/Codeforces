package a.hulk;

import java.util.Scanner;

public class AHulk {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        
        System.out.print("I hate ");
        
            for(int i=1; i<n; i++)
            {
                if(i%2 == 0)
                    System.out.print("that I hate ");
                else
                    System.out.print("that I love ");
            }
            System.out.print("it\n");
        
    }

}
