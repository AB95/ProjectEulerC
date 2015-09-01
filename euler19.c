//
// Created by bouch on 01/09/15.
//

#include <stdio.h>

int main()
{
    int day_of_week = 0; //Sun
    int sum = 0;

    int days_in_month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (int year = 1900; year < 2001; year++)
    {
        if (year%100 && ((!(year%400)) || (!(year%4))))
        {
            days_in_month[1] = 29;
        }
        else
        {
            days_in_month[1] = 28;
        }
        for (int month = 0; month < 12; month++)
        {
            for (int day = 0; day < days_in_month[month]; day++)
            {
                day_of_week++;
                if (day == 0 && !(day_of_week%7) && year > 1900)
                {
                    day_of_week = 0;
                    sum += 1;
                }
            }
        }
    }

    printf("%d\n", sum);
}