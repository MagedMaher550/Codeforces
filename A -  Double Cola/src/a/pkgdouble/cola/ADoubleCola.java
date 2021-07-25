package a.pkgdouble.cola;

import java.util.Scanner;

public class ADoubleCola {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        long n = input.nextLong();
        long j = 1;
        
        /*
            In the for loop what i'm doing is that i'm countng how many people have drunk cans in order to skip the repitioon of the drunk people
            and then in the if conditions i'm trying to know what interval the given number is in.
        */
        
        for(int i=1; n>0; i++)
        {
            n -= 5*j;
            j *= 2;
        }
        j /=2;
        n += 5*j;
        
        if(n <= j)
            System.out.println("Sheldon");
        
        else if(n <= 2*j)
            System.out.println("Leonard");
        
        else if(n <= 3*j)
            System.out.println("Penny");
        
        else if(n <= 4*j)
            System.out.println("Rajesh");
        
        else
            System.out.println("Howard");
        
    }
}
