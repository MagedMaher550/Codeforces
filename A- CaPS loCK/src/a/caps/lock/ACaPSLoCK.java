package a.caps.lock;

import java.util.Scanner;

public class ACaPSLoCK {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        String s = input.next();
        char []word = new char[s.length()];
        int i , n = s.length();
        
        word[0] = s.charAt(0);
        
        for(i=1; i<n; i++)
        {
            word[i] = s.charAt(i);
            if(word[i] > 95)
                break;
        }
        if(i != n)
            System.out.println(s);
        else
        {
            for(i=0; i<n; i++)
            {
                if(word[i] < 95)
                    word[i] += 32;
                else
                    word[i] -= 32;
            }
            
            String ss = new String(word);
            System.out.println(ss);
        }
        
    }

}
