#include <stdio.h>
#include <stdlib.h>

void print_score(char score[])
{
    printf("\n\
      %c :  %c  : %c     \n\
     ---+-----+---       \n\
      %c :  %c  : %c     \n\
     ---+-----+---       \n\
      %c :  %c  : %c     \n\
    \n",
           score[0], score[1], score[2], score[3], score[4], score[5], score[6], score[7], score[8]);
}

bool isEven(int x)
{
    return (x / (x / 2) == 2);
}

void takeTurn(char score[], char letter)
{
    while (true)
    {
        char in[6];
        int spot;
        spot = atoi(gets(in));

        // boundary check
        if (spot < 1 && spot > 9)
        {
            printf("try again - pick 1-9");
        }
        // make sure the square is unused
        else if ((score[spot] != 'X') && (score[spot] != 'O'))
        {
            score[spot] = letter;
            break;
        }
        else
        {
            printf("try again");
        }
    }
}

int main(void)
{
    int turn = 3;
    char score[9] = {'0', '1', '2', '3', '4', '5', '6', '7', '8'};

    print_score(score);

    while (true)
    {
        if (isEven(turn))
        {
            printf("pick one number on the table to change to O\n");
            takeTurn(score, 'O');
            print_score(score);
        }
        else
        {
            printf("pick one number on the table to change to X\n");
            takeTurn(score, 'X');
            print_score(score);
        }
        turn += 1;
        if (turn > 11)
        {
            break;
        }
    }

    // stop a square from being picked twice
    // detect a win instead of always going to 9 turns
    // reject a selection that is out of the range 1-9

    return 0;
}