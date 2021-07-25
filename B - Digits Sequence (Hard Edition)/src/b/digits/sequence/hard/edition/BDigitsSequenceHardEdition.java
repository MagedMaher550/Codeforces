package b.digits.sequence.hard.edition;

import java.util.Scanner;

public class BDigitsSequenceHardEdition {
    
public static void gDig(long k , long count)
{
    long res = 0;
    while(count != 0)
    {
        count--;
        res = k % 10;
        k /= 10;
    }
    System.out.println(res);
}
    
public static void solve(long k , long tmp ,long bound)
{
    if(k%bound < bound)
        gDig(tmp , bound - k%bound);
}


    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        long k = input.nextLong();
        long tmp = 0;
        long x = 9   * (long)Math.pow(10, 10);
        long y = 99  * (long)Math.pow(10, 10);
        long z = 108 * (long)Math.pow(10, 11);
        
        if(k < 10)
            System.out.println(k);
        
        else
        {
            //from 10 to 100
             if(k >=10 && k < 190)
             {
                k -= 9;
                tmp += k/2 + 9;
                
                if(k%2 == 0)
                    gDig(tmp , 1);
                
                else
                {
                    tmp++;
                    gDig(tmp , 2);
                }
             }
             //from 100 to 1000
             else if(k >= 190 && k < 2890)
             {
                 k -= 190;
                 tmp += k/3 + 100;
                 solve(k , tmp , 3);
                 
             }
             //from 1000 to 10000
             else if(k >= 2890 && k < 38890)
             {
                 k -= 2890;
                 tmp += k/4 + 1000;
                 solve(k , tmp , 4);
             }
             //from 10^4 to 10^5
             else if(k >= 38890 && k < 488890)
             {
                 k -= 38890;
                 tmp += k/5 + 10000;
                 solve(k , tmp , 5);
             }
             //from 10^5 to 10^6
             else if(k >= 488890 && k < 5400000)
             {
                 k -= 488890;
                 tmp += k/6 + 100000;
                 solve(k , tmp , 6);
             }
             //from 10^6 to 10^7
             else if(k >= 5400000 && k < 63000000)
             {
                    k -= 5400000;
                    tmp += k/7 + 1000000;
                    solve(k , tmp , 7);
             }
             //from 10^7 to 10^8
             else if(k >= 63000000 && k < 720000000)
             {
                 k -= 63000000;
                 tmp += k/8 + 10000000;
                 solve(k , tmp , 8);
             }
             //from 10^8 to 10^9
              else if(k >= 720000000 && k < 8100000000L)
             {
                 k -= 720000000;
                 tmp += k/9 + 100000000;
                 solve(k , tmp , 9);
             }
             //from 10^9 to 10^10
              
             else if(k >= 8100000000L && k < x)
             {
                 k -= 8100000000L;
                 tmp += k/10 + 1000000000;
                 solve(k , tmp , 10);
             }
             
             //from 10^10 to 10^11
             else if(k >= x && k < y)
             {
                 k -= x;
                 tmp += k/11 + 10000000000L;
                 solve(k , tmp , 11);
             }
             
             //from 10^11 to 10^12
             else if(k >= y && k < z)
             {
                 k -= y;
                 tmp += k/12 + 100000000000L;
                 solve(k , tmp , 12);
             }
             

        }

    }

}