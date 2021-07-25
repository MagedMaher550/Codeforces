package a.rewards;

import java.util.Scanner;

public class ARewards {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int a1 = input.nextInt();
        int a2 = input.nextInt();
        int a3 = input.nextInt();
        int b1 = input.nextInt();
        int b2 = input.nextInt();
        int b3 = input.nextInt();
        int n = input.nextInt();
        
        /*
        
            Here i got the addition of all the cups and the addition of all the medals and i made a simple condition
            if the addition of (all the cups added to four divided by 5) and (all the medals added to nine divided by 10)
            is less or equal to one then the conditions are fulfilled otherwise no.
        
            the four and nine are to prevent the possibility that cups and medals may be on the same shelf.
            the division is to prevent the no of cups and medals from exceeding 5 and 10 respectively.
        */
        
        int a = (a1+a2+a3+4)/5;
        int b = (b1+b2+b3+9)/10;
        
        if( a + b <= n)
            System.out.println("YES");
        else
            System.out.println("NO");
        
    }

}
