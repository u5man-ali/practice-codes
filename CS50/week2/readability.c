#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(void)
{
    string text = get_string("Text: "); //input the sentence from user
    float letter_count=0;
    float word_count=1;
    float sentence_count=0;
    int length = strlen(text);
    for (int i = 0; i < length; i++)
    {
        if(!(isspace(text[i])) && !(ispunct(text[i])))
        {
            letter_count ++;
        }
        if(isspace(text[i]))
        {
            word_count ++;
        }
        if(text[i] == 46 || text[i] == 33 || text[i] == 63)
        {
            sentence_count ++;
        }
    }
    //printf("letter_count %.0f\n", letter_count);
    //printf("word_count %.0f\n", word_count);
    //printf("sentence_count %.0f\n", sentence_count);
    float L = letter_count / word_count * 100;
    //printf("L %.3f\n", L);
    float S = sentence_count / word_count * 100;
    //printf("S %.3f\n", S);
    float Grade = L * .0588 - S * .296 - 15.8;
    if(Grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if(Grade > 16)
    {
        printf("Grade 16+\n");
    }
    else
    printf("Grade %.0f\n", Grade);
}