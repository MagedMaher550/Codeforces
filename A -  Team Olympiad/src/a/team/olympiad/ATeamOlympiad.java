package a.team.olympiad;

import java.util.*;

public class ATeamOlympiad {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] skill = new int[n];
        
        
        ArrayList<Integer> a = new ArrayList<>();
        ArrayList<Integer> b = new ArrayList<>();
        ArrayList<Integer> c = new ArrayList<>();
       
        for(int i=0; i<n; i++)
        {
            skill[i] = input.nextInt();
            
            switch (skill[i]) {
                case 1:
                    a.add(i+1);
                    break;
                case 2:
                    b.add(i+1);
                    break;
                default:
                    c.add(i+1);
                    break;
            }
        }        
        
        System.out.println();
        
        if(a.isEmpty() || b.isEmpty() || c.isEmpty())
            System.out.println(0);
        
        else if (a.size() <= b.size() && a.size() <= c.size()) 
        {
                System.out.println( a.size());                 
                for(int i=0; i<a.size(); i++)
                {
                    System.out.print(a.get(i) + " ");
                    System.out.print(b.get(i) + " ");
                    System.out.print(c.get(i) + "\n");
                }
                    
        }

        else if (b.size() <= a.size() && b.size() <= c.size())
        {
                System.out.println( b.size());                 
                for(int i=0; i<b.size(); i++)
                {
                    System.out.print(a.get(i) + " ");
                    System.out.print(b.get(i) + " ");
                    System.out.print(c.get(i) + "\n");
                }          
        }
        
        else if (c.size() <= a.size() && c.size() <= b.size())
        {
                System.out.println(c.size());                 
                for(int i=0; i<c.size(); i++)
                {
                    System.out.print(a.get(i) + " ");
                    System.out.print(b.get(i) + " ");
                    System.out.print(c.get(i) + "\n");
                }       
        }
 
    }

}
