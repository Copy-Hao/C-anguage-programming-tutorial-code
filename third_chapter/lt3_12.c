#include <stdio.h>
int main()
{
    int score;
    char grade;
    scanf("%d", &score);
    if (score < 60)
        grade = 'E';
    else if (score < 70)
        grade = 'D';
    else if (score < 80)
        grade = 'C';
    else if (score < 90)
        grade = 'B';
    else
        grade = 'A';
}