abstract class Bank
{
    abstract void getbalance();
}

class A extends Bank
{
    int tot=0;
    void getbalance(int n)
    {
        tot = tot+n;
    }
}

class B extends Bank
{
    int tot=0;
    void getbalance(int n)
    {
        tot = tot+n;
    }
}

class C extends Bank
{
    int tot=0;
    void getbalance(int n)
    {
        tot = tot+n;
        // 7 9 10 13 28 38 46 88 96 102 
        // 38 9 102 10 7 46 28 88 13
    }
}
class abstract3
{
    public static void main(String args[])
    {

    }
}