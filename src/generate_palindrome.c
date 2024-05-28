/*
** EPITECH PROJECT, 2023
** B-SYN-200-MPL-1-1-palindrome-edgar1.maurel
** File description:
** generate_palindrome.c
*/

#include "palindrome.h"

void generate_palindrome(palindrome_t *palindrome)
{
    int a = palindrome->number;
    while (!check_palindrome(a, palindrome->base)) {
        int b = 0;
        int c = a;
        while (a != 0) {
            b = b * palindrome->base + a % palindrome->base;
            a = a / palindrome->base;
        }
        a = c + b;
        palindrome->iteration++;
        if (palindrome->iteration > palindrome->max)
            break;
    }
    if (palindrome->iteration > palindrome->max)
        error_message("no solution\n");
    palindrome->palindrom_res = a;
}