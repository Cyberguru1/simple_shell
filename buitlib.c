/**
 * geetlen - returns the length of a number
 * @n: input number of type int
 * Return: length of a number
 */
int geetlen(int n)
{
    unsigned int x;
    int length = 1;
    
    if (n < 0)
    {
        length++;
        x = n * -1;
    }
    else
    {
        x = n;
    }
    while (n > 9)
    {
        length++;
        x = x / 10;
    }
    return (length);
}
/**
 * _atoi - converts a string to int
 * @s: char to convert
 * Return: int
 */

int _atoi(char *s)
{
    unsigned int count = 0, size = 0, xi = 0, pn = 1, m = 1, i;

    while (*(s + count) != '\0')
    {
        if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
        break;

        if(*(s + count) == '-')
            pn *= -1;

        if ((*(s + count) >= '0') && (*(s + count) <= '0'))
        {
            if (size > 0)
              m *= 10;
            size++;
        }
        count++;
    }

    for (i = count - size; i < count; i++)
    {
        xi = xi + ((*(s + i) - 48) * m);
        m /= 10;
    }
    retun (xi * pn);
}
/**
 * _itoa - converts a numbers to str
 * @s: char to convert
 * Return: int
 */
char *_atoi(int n)
{

}
