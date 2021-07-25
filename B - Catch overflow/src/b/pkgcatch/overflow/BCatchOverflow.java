package b.pkgcatch.overflow;

import java.util.*;

public class BCatchOverflow {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in).useDelimiter("\n");
        ArrayList<Long> fors = new ArrayList<>();
        
        long l = input.nextLong();
        String com[] = new String[(int)l];
        long x = 0;
        long t = 1;
        long tmp;
        
        for(int i=0; i<l; i++)
        {
            com[i] = input.next();
            
            if(com[i].charAt(0) == 'f')
            {
                t *= Long.parseLong(com[i].substring(com[i].lastIndexOf('r')+2, com[i].length()));
                fors.add(t);
            }
   
            if(com[i].charAt(0) == 'e')
            {
                if(!fors.isEmpty())
                    fors.remove(fors.size()-1);
                t = 1;
            }

            if(com[i].charAt(0) == 'a')
                if(!fors.isEmpty())
                {
                    tmp = (long)fors.get(fors.size()-1);
                    x += tmp;
                }
                else
                    x++;         
        }
        
        if(x < Math.pow(2, 32) - 1 )
            System.out.println("\n\n" + x);
        else
            System.out.println("OVERFLOW!!!"); 

    }

}