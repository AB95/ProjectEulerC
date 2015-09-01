//
// Created by bouch on 01/09/15.
//

#include <stdio.h>

int main()
{
    int one_to_nine = (3 + 3 + 5 + 4 + 4 + 3 + 5 + 5 + 4);
    int ten_to_nineteen = (3 + 6 + 6 + 8 + 8 + 7 + 7 + 9 + 8 + 8);
    int twenty_to_ninetynine = (6 + 6 + 5 + 5 + 5 + 7 + 6 + 6) * 10 + one_to_nine * 8;
    int one_to_ninetynine = one_to_nine + ten_to_nineteen + twenty_to_ninetynine;

    int hundred = 7 * 900;
    int and = 3 * (900 - 9);
    int hundreds = one_to_nine * 100 + hundred + and + one_to_ninetynine * 9;

    int one_thousand = 11;

    printf("%li\n", one_to_ninetynine + hundreds + one_thousand);
}