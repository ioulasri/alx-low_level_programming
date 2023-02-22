void print_times_table(n)
{
    int i = 0;
    int j = 1;
    int num = 0;

    while (i <= n)
    {
        putchar('0');
        putchar(',');
        putchar(' ');
        while (j <= (n + 1))
        {
            num = i * j;
            if ((num / 10) > 0)
                putchar((num / 10) + '0');
            else
                putchar(' ');
            putchar((num % 10) + '0');
            if (j != (n + 1))
            {
                putchar(',');
                putchar(' ');
            }
            j++;
        }
        putchar('\n');
        i++;
        j = 1;
    }
}