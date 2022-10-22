package java_test;

public class Main {
 
    public static void main(String ages[])
    {
        try
        {
            Double a[]= new Double[2];

            a[0] = 4.67;
        }

        catch(ArrayStoreException e)
        {
            System.out.print("Exceaption caught"+e);
        }
    }
    
}
