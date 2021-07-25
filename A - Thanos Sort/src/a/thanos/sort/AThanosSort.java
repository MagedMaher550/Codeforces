package a.thanos.sort;

import java.util.*;

public class AThanosSort {

public static boolean isSorted(int[] arr,int first , int last)
{
    for(int i=first+1; i <last; i++)
    {
        if(arr[i-1] > arr[i])
            return false;
    }
    
    return true;
}
    
    
    public static void main(String[] args) {
	Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int t[] = new int[100000];
        int x = 0 ;
	for(int i=0; i<n; i++)
            t[i] = input.nextInt();
        
	for(int i=n; i>0; i/=2)
        {
		for(int j=0; j<n; j+=i)
			if (isSorted(t , j, j+i))
                        {
                            x = i;
                            System.out.println(i);
                            break;
                        }        
                if(x !=0 )
                    break;
        }

    }

}