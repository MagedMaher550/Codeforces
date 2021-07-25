package a.business.trip;

import java.util.*;

public class ABusinessTrip {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int k = input.nextInt();
        ArrayList<Integer> month = new ArrayList<>();
        
        for(int i=0; i<12; i++)
            month.add(input.nextInt());

      Comparator c = Collections.reverseOrder();        
      Collections.sort(month , c);
        
      if(k == 0)
            System.out.println(0);
      else
      {
          int count = 0 , num = 0;
          for(int i=0; i<12; i++)
          {
              num += month.get(i);
              count++;
              if(num >= k)
                  break;
          }
          if(num >= k)
           System.out.println(count);
          else
              System.out.println(-1);
      }
    }

}
