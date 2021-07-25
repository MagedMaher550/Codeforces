package pkg1157a.reachable.numbers;
import java.util.ArrayList; 
import java.util.Scanner;
public class ReachableNumbers {

public static int removeZero(int n)
{
    int z;
    StringBuilder s = new StringBuilder();    

    ArrayList<Integer> nums = new ArrayList<>();
    ++n;
    while(n > 0)
    {
        nums.add(n%10);
        n /= 10;
    }    
    while(nums.get(0) == 0)
    {
        nums.remove(0);
    }
    
    
    for(int i = nums.size()-1; i>=0; i--)
    {
        s.append(nums.get(i));
    }
    
    z = Integer.parseInt(s.toString());
  
    return z;
}
    
public static int ReachableNums(int n)
{
    ArrayList<Integer> Rnums = new ArrayList<>();
    int count = 1;
    Rnums.add(n);
    int x = removeZero(n);
   

    
    while(!Rnums.contains(x))
    {
        
        count++;
        Rnums.add(x);
        x = removeZero(x);
    }
    
    return count;
}    
    
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter a number: ");
        int x = input.nextInt();
        System.out.println("The number of reachable numbers from " + x + " is: " + ReachableNums(x));
    }

}
