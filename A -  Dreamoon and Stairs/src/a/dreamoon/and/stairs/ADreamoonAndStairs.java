package a.dreamoon.and.stairs;

import java.util.Scanner;

public class ADreamoonAndStairs {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int m = input.nextInt();
        
        //it's impossible to climb the stairs with his condition in case of m>n becasue he will never move m steps
        if(m > n)
            System.out.println(-1);
        
        else
        {
            //I wnat to ignore the first half of n, since he moves two steps at maximum then he will never climb to the top in less than (n+1)/2 steps
            //So i will start checking for i from (n+1)/2 untill the end of the stair
            for(int i=(n+1)/2; i<(n+1)/2+m; i++ )
            {
                if(i%m == 0)
                {
                    System.out.println(i);
                    break;
                }
            }
        }
    }

}
