package a.sereja.and.dima;

import java.util.*;

public class ASerejaAndDima {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        
        ArrayList<Integer> cards = new ArrayList<>();
       
        for(int i=0; i<n; i++)
            cards.add(input.nextInt());
        
         int countS =0 , countD = 0;
        

        while(!cards.isEmpty())
        {
            if(cards.get(0) > cards.get(cards.size()-1))
            {
                countS += cards.get(0);
                cards.remove(0);
            }
            
            else
            {
                countS += cards.get(cards.size()-1);
                cards.remove(cards.get(cards.size()-1));
            }
            
            if(!cards.isEmpty())
            {
                if(cards.get(0) > cards.get(cards.size()-1))
                {
                    countD += cards.get(0);
                    cards.remove(0);
                }

                else
                {
                    countD += cards.get(cards.size()-1);
                    cards.remove(cards.get(cards.size()-1));
                }            
            }

        }
        
        System.out.println(countS + " " + countD);
    }

}
