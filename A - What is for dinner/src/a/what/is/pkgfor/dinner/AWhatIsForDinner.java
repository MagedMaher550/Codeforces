package a.what.is.pkgfor.dinner;

import java.util.*;

public class AWhatIsForDinner {

    
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
            long n = input.nextLong();
            long m = input.nextLong();
            long k = input.nextLong();
            
            long ans = 0;
            
            long [][]val = new long[(int)n][2];
            
            for(int i=0; i<n; i++)
            {
                val[i][0] = input.nextLong();
                val[i][1] = input.nextLong();
            }
            
            ArrayList<Integer> dup = new ArrayList<>();
            
            for(int i=0; i<n; i++)
            {
                for(int j=i+1; j<n; j++)
                {
                    if(val[i][0] == val[j][0])
                    {
                        if(val[i][1] <= val[j][1])
                            dup.add(j);
                        else
                            dup.add(i);
                    }
                        
                }
            }
            
            //System.out.println(dup);
            
            
            for(int i=0; i<n; i++)
            {
                if(!dup.contains(i))
                    ans += val[i][1];
            }            
            
            if(ans >= k)
                ans = k;
            
            System.out.println(ans);
            
    }

}


