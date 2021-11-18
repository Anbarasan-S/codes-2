import java.util.*;
public class Factors{
    static int count=0;
    static Boolean isPerfectSquare(int num)
    {
        for(int i=2;i<=num;i++)
        {
            if(num%i==0)
            {
                int val=(int)Math.sqrt(i);
                if(val*val==i)  //Checks if a number is perfect square
                {
                    return false;
                }
            }
        }
        return true;
    }
    static void checkFactor(int num)
    {
        for(int i=2;i<num;i++)
        {
            if(num%i==0)
            {
                if(isPerfectSquare(i))
                {
                count+=1;
                }
            }
        }
    }
    public static void main(String[] args)
    {
        double startTime = System.nanoTime();
        Scanner sc=new Scanner(System.in);
        int num=523908000;
        checkFactor(num);
        System.out.println(count);
        double endTime = System.nanoTime();
        double timeElapsed = endTime - startTime;
        System.out.println("Execution time in seconds: " +timeElapsed/1000000000);
    }
}
