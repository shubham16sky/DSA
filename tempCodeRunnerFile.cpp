int fact(int number)
{
    int factorial = 1;
    for(int i=2;i<=number;i++)
    {
        factorial = factorial*i;
    }

    return factorial;
}