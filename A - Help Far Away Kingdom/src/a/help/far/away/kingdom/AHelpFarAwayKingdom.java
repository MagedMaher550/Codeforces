package a.help.far.away.kingdom;

import java.util.Scanner;
import java.math.*;


public class AHelpFarAwayKingdom {

public static int Do(BigDecimal n)
{
    String s = n.toPlainString();
    int dotPos =s.indexOf('.');
    
    int numPos = Character.getNumericValue(s.charAt(dotPos + 1));  
    int LastIntnumPos = Character.getNumericValue(s.charAt(dotPos - 1));  
    if(LastIntnumPos == 9)
    {
        return -1;
    }

    else if(LastIntnumPos != 9 && numPos >=5)
    {
        return 1;
    }
     //System.out.println(numPos);

    return 0;
    
    
}    
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        BigDecimal n = input.nextBigDecimal();
    int i = 1;
    BigInteger a = new BigInteger("" + i);
    switch (Do(n)) {
        case -1:
               System.out.println("GOTO Vasilisa.");
            break;
        case 1:
            System.out.println(n.toBigInteger().add(a));
            break;
        default:
            System.out.println(n.toBigInteger());
            break;
    } 

        
    }

}
