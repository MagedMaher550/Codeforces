package a.playing.with.paper;

import java.util.Scanner;

public class APlayingWithPaper {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        long a = input.nextLong();
        long b = input.nextLong();
        long count = 0;
        
        while(true)
        {
            if(a > b)
            {
                count += a/b;
                a -= (a/b)*b;
            }
            if(a == 0)
                break;
            
            if(b > a)
            {
                count += b/a;
                b -= (b/a)*a;
            }
            
            if(b == 0)
                break;
        }
        
        System.out.println(count);
    }

}
