/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 22:38:25 by mabd-ram          #+#    #+#             */
/*   Updated: 2025/01/17 22:38:27 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* arg_is_number:
*   Checks if the argument is a number. +1 1 and -1 are all valid numbers.
*   Return: 1 if the argument is a number, 0 if not.
*/
/* check_for_duplicates:
*   Checks if there are any duplicate strings in the argument list.
*   Returns 1 if duplicates are found, 0 otherwise.
*/
static int check_for_duplicates(char **args)
{
    int i = 1;
    int j;

    while (args[i])
    {
        j = 1;
        while (args[j])
        {
            if (j != i)
            {
                // Compare the strings directly
                int k = 0;
                while (args[i][k] && args[j][k] && args[i][k] == args[j][k])
                    k++;
                
                // If both strings are of the same length and characters match, they're equal
                if (args[i][k] == '\0' && args[j][k] == '\0')
                    return 1;  // Return 1 if a duplicate is found
            }
            j++;
        }
        i++;
    }
    return 0;  // No duplicates found
}

/* check_is_number:
*   Checks if a string is a valid number (integer) with an optional sign.
*   Returns 1 if valid, 0 if not.
*/
static int check_is_number(char *arg)
{
    int i = 0;

    // If the first character is a sign, skip it
    if (arg[i] == '+' || arg[i] == '-')
        i++;

    // If the string is empty after the sign, it's not a valid number
    if (arg[i] == '\0')
        return 0;

    // Check if all characters are digits
    while (arg[i])
    {
        if (arg[i] < '0' || arg[i] > '9')  // Check if the character is not a digit
            return 0;  // Invalid character
        i++;
    }
    return 1;  // All characters are digits, so it's a valid number
}

/* check_is_zero:
*   Checks if the string represents zero (including +0, -0, 0000, etc.).
*   Returns 1 if it's zero, 0 if not.
*/
static int check_is_zero(char *arg)
{
    int i = 0;

    // Skip the sign if it's there
    if (arg[i] == '+' || arg[i] == '-')
        i++;

    // If the remaining string contains only zeros, it's considered "zero"
    while (arg[i] == '0')
        i++;

    return (arg[i] == '\0');  // If we've reached the end, it's a valid zero
}

/* is_valid_input:
*   Validates that the arguments are all valid numbers without duplicates, and contains at most one zero.
*   Returns 1 if valid, 0 otherwise.
*/
int is_valid_input(char **args)
{
    int i = 1;
    int zero_count = 0;

    while (args[i])
    {
        if (!check_is_number(args[i]))  // Check if the argument is a valid number
            return 0;
        zero_count += check_is_zero(args[i]);  // Count how many arguments are zero
        i++;
    }

    if (zero_count > 1)  // More than one zero is invalid
        return 0;
    if (check_for_duplicates(args))  // Check if there are duplicates
        return 0;

    return 1;  // All checks passed, valid input
}

