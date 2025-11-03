class Logic
{
    void countEvenOddRange(int n)
    {
        int even = 0, odd = 0;

        for(int i = 1; i <= n; i++)
        {
            if(i % 2 == 0)
                even++;
            else
                odd++;
        }

        System.out.println("Even numbers: " + even);
        System.out.println("Odd numbers: " + odd);
    }
}

class Program21_2
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.countEvenOddRange(50);
    }
}
