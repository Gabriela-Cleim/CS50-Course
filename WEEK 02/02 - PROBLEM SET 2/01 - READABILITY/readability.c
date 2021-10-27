#include <string.h>
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>


int main()
{
    //getting user input
    string g = get_string("Text: ");
    printf("%s\n", g);

    int letters = 0;
    int words = 1;
    int sentences = 0;
    for (int i = 0; i < strlen(g); i++)
    {
        if ((g[i] >= 'a' && g[i] <= 'z') || (g[i] >= 'A' && g[i] <= 'Z'))
        {
            letters++;
        }
        if (g[i] == ' ')
        {
            words++;
        }
        if (g[i] == '.' || g[i] == '!' || g[i] == '?')
        {
            sentences++;
        }
    }
    //printf("%i letter(s)\n", letters);
    //printf("%i word(s)\n", words);
    //printf("%i sentence(s)\n", sentences);

    float grade = 0.0588 * (100 * (float)letters / (float)words) - 0.296 * (100 * (float)sentences / (float)words) - 15.8;
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %.f\n", grade);
    }
}