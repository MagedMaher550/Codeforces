package a.football;

import java.util.Scanner;

public class AFootball {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        String s = input.next();
        
        int countZero , countOne;
        countZero = countOne = 0;
        boolean x = false;
        
        
        for(int i=0; i<s.length()+1; i++)
        {
            if(countZero >= 7 || countOne >= 7)
                x = true;
            
            if(i<s.length())
            {
                if(s.charAt(i) == '0')
                {
                    countZero++;
                    countOne=0;
                }

                else
                {
                    countOne++;
                    countZero=0;            
                }            
            }
        }
        
        if(x)
            System.out.println("YES");
        else
            System.out.println("NO");
        
    }

}
