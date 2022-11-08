#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//랜덤으로 양의 정수를 생산하기 위해 난수생성
void GenRandSeed()
{
    srand((unsigned int)(time(NULL)));
    return;
}

unsigned int GenRandNum(unsigned int nRange)
{
    unsigned int nRes = 0;
    unsigned int nNum = rand();
    nRes = ((unsigned int)(nNum) % (nRange));
    return nRes;
}

int main(void)
{
    GenRandSeed();
    int nRange = 0;
    int RandomNumber = 0;
    int Answer = 0;
    int i;
    //사용자가 임의의 정수를 입력합니다.
    printf("Enter the range of numbers you want to match... : ");
    scanf_s("%d", &nRange);


    RandomNumber = GenRandNum(nRange);
    i = GenRandNum(10);
    //정수를 입력한 다음에는 n(3~10)번의 기회를 주고 기회안에 정수를 입력하여 답을 맞추어야 합니다.
    while (1)
    {
        if (i < 3)
        {
            i = GenRandNum(10);
        }
        else break;
    }

    printf("You have the chane to match number for %d...\n\n", i);
    printf("What is the number? : ");
    scanf_s("%d", &Answer);

    for (int j = 0; j < i; j++)
    {
        if (Answer > RandomNumber) //입력한 답보다 값이 낮을때는 down!이 출력되어 다시 맞춰야 합니다.
        {
            printf("Down!\n\n");
            printf("What is the number? : ");
            scanf_s("%d", &Answer);

            continue;
        }
        else if (Answer < RandomNumber) //입력한 답보다 값이 높을때는 up!이 출력되어 다시 맞춰야 합니다.
        {
            printf("Up!\n\n");
            printf("What is the number? : ");
            scanf_s("%d", &Answer);
        }
        else
        {
            break;
        }
    }

    if (Answer == RandomNumber)
    {
        printf("You enter the correct number~ congratulaion!\n"); //기회안에 맞출경우

        return 0;
    }
    else
    {
        printf(" You enter the wrong number..."); //기회안에 못 맞출경우

        return 0;
    }
}