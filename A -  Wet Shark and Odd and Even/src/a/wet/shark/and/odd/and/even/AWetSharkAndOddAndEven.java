package a.wet.shark.and.odd.and.even;

import java.util.*;

public class AWetSharkAndOddAndEven {

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        long n = input.nextLong();
        long num[] = new long[(int)n];
	int i;
        long sum = 0;
        
        for(i=0; i<n; i++)
	{
            num[i] = input.nextLong();
            sum+=num[i];
	}
	if(sum%2==0)
            System.out.println(sum);
	else
	{
		for(i=0; i<n; i++)
		{
			if(num[i]%2 != 0)
			{
				num[0]=num[i];
				break;
			}
		}
                
		for(i=0; i<n; i++)
			if(num[i]%2!=0 && num[i]<num[0])
				num[0]=num[i];
                    
                System.out.println(sum-num[0]);
	}
        
    }

}
