#include<stdio.h>

int rand_extend(int max, int min);
int main()
{
    int a1, a2, a3, x, total, win, lose = 0;
    float prob_win, i2;
    printf("Input the number of iterations: ");
    scanf("%d", &x);
    printf("\n");
    printf("Die1 \tDie2 \tDie3 \tTotal \tWin \tLose\n");

    for (int i = 0; i < x; i++)
    {
        i2 = i + 1;
        a1 = rand_extend(6, 1);
        a2 = rand_extend(6, 1);
        a3 = rand_extend(6, 1);
        total = a1 + a2 + a3;
        if(total > 10){
            win++;
        }
        else{
            lose++;
        }
        prob_win = (win / i2) * 100;
        printf("%d \t%d \t%d \t%d \t%d \t%d \tWin probability: %.4f%%\n", a1, a2, a3, total, win, lose, prob_win);

    }
    printf("%f", 2);
    return 0;
}
int rand_extend(int max, int min)
{
    int random = rand() % (max + 1 - min) + min;
    return random;
}
