package a.game.with.sticks;

import java.util.Scanner;

public class AGameWithSticks {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int m = input.nextInt();
        
        if(m != n)
        {
            if(n > m)
            {
                if(m%2 == 0)
                    System.out.println("Malvika");
                else
                    System.out.println("Akshat");                
            }
            
        else if(m > n)
            {
                if(n%2 == 0)
                    System.out.println("Malvika");
                else
                    System.out.println("Akshat");                
            }
        }
        
        else
        {
            if(n%2 == 0)
                System.out.println("Malvika");
            else
                System.out.println("Akshat");
        }
        
    }

}
