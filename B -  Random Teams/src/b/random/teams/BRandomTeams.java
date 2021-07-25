package b.random.teams;

import java.util.Scanner;

public class BRandomTeams {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        
        long n = input.nextLong();
        long m = input.nextLong();
        
        long k = n - m + 1 , s = (k * (k-1) )/2 , t = n/m ,  u = n%m;
        
        System.out.println(( (t * (t+1) )/2  ) * u + (t * ( (t-1) )/2 ) * (m - u) + " " + s);
        
    }
    
}
