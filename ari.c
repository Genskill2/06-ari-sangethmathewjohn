#include <string.h>
#include <math.h>
#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

string ari(string text)
{
    float score;
    int chara = 0, words = 0, sentence = 0;
    
    for (int i = 0; text[i] != '\0'; ++i)
    {
        if (isalnum(text[i]))
            chara++;
        if (text[i] == ' ')
            words++;
        if ((text[i] == '.') || (text[i] == '!') || (text[i] == '?'))
            sentence++;
    }
    
    score = (4.71 * (float)chara / (float)words) + (0.5 * (float)words / (float)sentence) - 21.43;
    score = (int)ceil(score);
    
    if (score == 1)
        return "Kindergarten";
    
    else if (score == 2)
        return "First/Second Grade";
    
    else if (score == 3)
        return "Third Grade";
    
    else if (score == 4)
        return "Fourth Grade";
    
    else if (score == 5)
        return "Fifth Grade";
    
    else if (score == 6)
        return "Sixth Grade";
    
    else if (score == 7)
        return "Seventh Grade";
    
    else if (score == 8)
        return "Eighth Grade";
    
    else if (score == 9)
        return "Ninth Grade";
    
    else if (score == 10)
        return "Tenth Grade";
    
    else if (score == 11)
        return "Eleventh Grade";
    
    else if (score == 12)
        return "Twelfth grade";
    
    else if (score == 13)
        return "College student";
    
    else
        return "Professor";
}
