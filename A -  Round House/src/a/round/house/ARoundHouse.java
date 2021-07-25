package a.round.house;

import java.util.Scanner;

public class ARoundHouse {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int a = input.nextInt();
        int b = input.nextInt();
        
        if(b >= 0)
        {
            if((a+b)%n == 0)
                System.out.println(n);
            else
                System.out.println((a+b)%n);
        }
        
        else
        {
            b = -b;
            if(a > b)
                System.out.println(a-b);
            else
            {
                if((b-a)%n == 0)
                    System.out.println(n);
                else
                    System.out.println(n-(b-a)%n);
            }
        }
 
    }

}
