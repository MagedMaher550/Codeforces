package a.string.task;

import java.util.*;

public class AStringTask {
  
    
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        String s = input.next();
        s = s.toLowerCase();
        
        //System.out.println(s);
        ArrayList<Character> word = new ArrayList<>();
        
        for(int i=0; i<s.length(); i++)
        {
            if(s.charAt(i) != 'a' && s.charAt(i) != 'e' && s.charAt(i) !='o' && s.charAt(i) != 'i' && s.charAt(i) != 'u' && s.charAt(i) != 'y')
            {
                word.add('.');
                word.add(s.charAt(i));            
            }
        }
        
        for(int i=0; i<word.size(); i++)
            System.out.print(word.get(i));
        
        System.out.println();
    }

}
