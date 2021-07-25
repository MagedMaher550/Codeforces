package a.theatre.square;

import java.util.Scanner;

public class ATheatreSquare {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        long n = input.nextLong();
        long m = input.nextLong();
        long a = input.nextLong();
        
        long ans;
        
        if(a == 1)
            ans = n*m;
        
        else if(n*m <= a*a)
            ans = 1;
        
        else
        {
            long x = (long)Math.ceil((double)n / (double)a);
            long y = (long)Math.ceil((double)m / (double)a);
            ans = x*y;
        }

        System.out.println(ans);
    }

}

