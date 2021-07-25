package love.a;

import java.util.Scanner;

public class LoveA {

public static int Do(String s)
{   
    int nonAnum = 0;
    for(int i=0; i<s.length(); i++)
    {
        if(s.charAt(i) != 'a')
            nonAnum++;
    }
    int Anum = s.length() - nonAnum;
    int D = nonAnum - Anum + 1;
    int LongestPossibkeString = s.length() - D;
    
    if(Anum <= nonAnum)
        return LongestPossibkeString;
                
    else
        return s.length() ;
}
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String n = input.next();
        System.out.println(Do(n));
                               
    }

}
