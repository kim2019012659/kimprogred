#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//�������� ���� ������ �����ϱ� ���� ��������
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
    //����ڰ� ������ ������ �Է��մϴ�.
    printf("Enter the range of numbers you want to match... : ");
    scanf_s("%d", &nRange);


    RandomNumber = GenRandNum(nRange);
    i = GenRandNum(10);
    //������ �Է��� �������� n(3~10)���� ��ȸ�� �ְ� ��ȸ�ȿ� ������ �Է��Ͽ� ���� ���߾�� �մϴ�.
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
        if (Answer > RandomNumber) //�Է��� �亸�� ���� �������� down!�� ��µǾ� �ٽ� ����� �մϴ�.
        {
            printf("Down!\n\n");
            printf("What is the number? : ");
            scanf_s("%d", &Answer);

            continue;
        }
        else if (Answer < RandomNumber) //�Է��� �亸�� ���� �������� up!�� ��µǾ� �ٽ� ����� �մϴ�.
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
        printf("You enter the correct number~ congratulaion!\n"); //��ȸ�ȿ� ������

        return 0;
    }
    else
    {
        printf(" You enter the wrong number..."); //��ȸ�ȿ� �� ������

        return 0;
    }
}