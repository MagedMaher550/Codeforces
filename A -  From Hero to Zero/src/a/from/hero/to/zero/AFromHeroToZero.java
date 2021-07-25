package a.from.hero.to.zero;

import java.util.Scanner;

public class AFromHeroToZero {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int  t = input.nextInt();
        
        long query[][] = new long[t][2];
        long steps[] = new long[t];
        
        long N , K , count;
        
        for(int i=0; i<t; i++)
        {
            N = query[i][0] = input.nextLong();
            K = query[i][1] = input.nextLong();
            
            count = -1;
            while(N != 0)
            {
                
                if(N%K == 0)
                {
                    N /= K;
                    count++;
                }
                    
                else
                {
                    count += N%K;
                    N -=  N%K;  
                    N /= K;
                    count++;
                }
                    
            }
            steps[i] = count;
        }

        
        for(int i=0; i<t; i++)
            System.out.println(steps[i]);
        
        
    }

}
