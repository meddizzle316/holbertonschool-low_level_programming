#include "main.h"
/**
 * times_table - printing the 9 times table, starting with 0
 *
 * Return: 0
 */
void times_table(void)
{
        int x;
        int y;
        int sum;

        for (x = 0; x < 10; x++)
        {
                for (y = 0; y < 10; y++)
                {
                        sum = x * y;
                        if (sum < 10 && y != 9)
                        {
                                putchar('0' + sum);
                                putchar (',');
                                putchar (' ');
                                putchar (' ');

                        }
                        else if (sum > 9 && y != 9)
                        {
                                putchar((sum/10) + '0');
                                putchar((sum%10) + '0');
                                putchar(',');
                                putchar(' ');
                        }
                        else if (sum < 10)
                        {
                                putchar(' ');
                                putchar('0' + sum);
                        }
                        else if (sum > 9)
                        {
                                putchar((sum/10) + '0');
                                putchar((sum%10) + '0');
                        }

                }
                putchar('\n');
        }
}
