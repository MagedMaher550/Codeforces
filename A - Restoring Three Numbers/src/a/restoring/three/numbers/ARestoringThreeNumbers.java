package a.restoring.three.numbers;
import java.util.*;
import java.util.ArrayList;

//In this program i supposed that the three numbers are not ordered and may be negative

public class ARestoringThreeNumbers {

    
//This function gets the substitutions of the four numbers (in case none of the given numbers are equal)
public static ArrayList subNums(int n1 , int n2 , int n3 , int n4)
{  
    int x1 = n1 - n2;
    int x2 = n1 - n3;
    int x3 = n1 - n4;
    
    int x4 = n2 - n1;
    int x5 = n2 - n3;
    int x6 = n2 - n4;

    int x7 = n3 - n1;
    int x8 = n3 - n2;
    int x9 = n3 - n4;

    int x10 = n4 - n1;
    int x11 = n4 - n2;
    int x12 = n4 - n3;
    
    ArrayList<Integer> nums = new ArrayList<>();
    
    nums.add(x1);
    nums.add(x2);
    nums.add(x3);
    nums.add(x4);
    nums.add(x5);
    nums.add(x6);
    nums.add(x7);
    nums.add(x8);
    nums.add(x9);
    nums.add(x10);
    nums.add(x11);
    nums.add(x12);
    

    return nums;
}



//This function remove the duplicated values from the arrayList
public static ArrayList removeDuplicates(ArrayList<Integer> subNums) 
{ 
    ArrayList<Integer> newList = new ArrayList<>(); 
    
    for (Integer e : subNums) 
    { 
        if (!newList.contains(e)) 
        { 
            newList.add(e); 
        } 
    } 
    
    return newList; 
}
//This function gets the solutions in case none of the numbers are equal
public static void SolutionOfCase3(ArrayList<Integer> newList , int n1 , int n2 , int n3 , int n4)
{
    int k , a , b , c;
    ArrayList<Integer> numsAdditions = new ArrayList<>();
        
    for(int i=0; i<newList.size(); i++)
    {
        for(int j=i+1; j<newList.size(); j++)
        {
            //numsAdditions.add(newList.get(i) + newList.get(j));            
            k = newList.get(i) + newList.get(j);
            if(k==n1 || k==n2 || k==n3 ||k==n4)
            {
            numsAdditions.add(newList.get(i));
            numsAdditions.add(newList.get(j));
            }
        }
    }
        
    ArrayList<Integer> test = new ArrayList<>();
    test = removeDuplicates(numsAdditions);
        
    if(test.size() > 3)
    {
        test.remove(0);
    }            
    if(test.size()==2)
    {
        a = test.get(0);
        b = test.get(1);
        int h =a+b+b;
        if(h != n1 || h != n2 || h != n3 || h != n4)
            c = test.get(0);
        
        else
            c = test.get(1);
     }
    
    else
    {
        a = test.get(0);
        b = test.get(1);
        c = test.get(2);
    }
    
    System.out.println(a + " " + b + " " + c);
}


//This functions determine whether there is duplicated values or not and prints the solutions for each case    
public static void determine(int n1 , int n2 , int n3 , int n4)
{
    int a=0 , b=0 , c=0 ,nD;
    
    // Case 1: if the three numbers are equal
    if((n1==n2 && n2==n4) || (n1==n2 && n1==n3) || (n1==n3 && n1==n4)|| (n2==n3 && n2==n4))
    {   
        if(n1==n2 && n1==n3)
            a=b=c=n1/2;
        
        if(n2==n3 && n2==n4)
            a=b=c=n2/2;
        
        if(n1==n3 && n1==n4)
            a=b=c=n1/2;
            
        if(n1==n2 && n2==n4)
        {
            a=b=c=n2/2;
        }
        
        System.out.println(a + " " + b + " " + c);
    }

    else
    {
      SolutionOfCase3(removeDuplicates(subNums(n1,n2,n3,n4)),n1,n2,n3,n4);
    }
    
    //System.out.println(a + " , " + b + " , " + c);
}   
    


    public static void main(String[] args) {       
              
    Scanner input = new Scanner(System.in);
    int n1 = input.nextInt();
    int n2 = input.nextInt();
    int n3 = input.nextInt();
    int n4 = input.nextInt(); 
    
    determine(n1,n2,n3,n4);
            

    }

}