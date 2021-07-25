package a.beros.file.system;

import java.util.*;

public class ABerOSFileSystem {

    public static void main(String[] args) {
        
        Scanner input = new Scanner(System.in);
        String s = input.next();

        if(s.length() == 1)
            System.out.println(s);

        else
        {
            ArrayList<Character> path = new ArrayList<>();
            boolean x;        
            for(int i=1; i<s.length(); i++)
            {
                x = true;
                if(s.charAt(i-1) == '/' && s.charAt(i) == '/' && s.length() != 1)
                    x = false;

                if(x)
                    path.add(s.charAt(i));
            }

            if(path.isEmpty() || path.get(0) != '/')
                path.add(0, '/');
        
            if(path.get(path.size()-1) == '/' && path.size() != 1)
                path.remove(path.size()-1);
            
        for(int i=0; i<path.size(); i++)
            System.out.print(path.get(i));
        }
        
        System.out.println();

    }

}
