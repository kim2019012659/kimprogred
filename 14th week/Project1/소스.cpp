#include <Servo.h>

#define MINANALOG 0
#define MAXANALOG 1023
#define MINANG 0
#define MAXANG 180

int nPotenPin = A0;
int nServoPin = 2;
int nDelay = 20;
int nRedPin = 3;
int nBluePin = 4;
const int potentiometerPin = 0; //�������ױ⿡ �Ƴ��α� �� ����


Servo myServol;

void setup()
{
    pinMode(nRedPin, OUTPUT);
    pinMode(nBluePin, OUTPUT);
    myServol.attach(nServoPin);
    Serial.begin(9600);
}

void loop()
{
    int nKnobServo = analogRead(nPotenPin);
    int nServoAng = map(nKnobServo, MINANALOG, MAXANALOG, MINANG, MAXANG);// ������ 0~180���� �۵� �� �߱��ӵ�(0~1023)

    if (nServoAng <= 60) //������ 60�����ϸ� �������� ���ڰŸ��ϴ�(�������ױ��� ������ ���� �Һ��� ������ �ӵ��� �ٸ��ϴ�).
    {
        digitalWrite(nRedPin, HIGH);
        delay(nKnobServo);
        digitalWrite(nRedPin, LOW);
        delay(nKnobServo);
    }
    else if (nServoAng <= 120)  //������ 120���ϸ� �Ķ����� ���ڰŸ��ϴ�(�������ױ��� ������ ���� �Һ��� ������ �ӵ��� �ٸ��ϴ�).
    {
        digitalWrite(nBluePin, HIGH);
        delay(nKnobServo);
        digitalWrite(nBluePin, LOW);
        delay(nKnobServo);
    }
    else//120���̻��̸� ���� �����ϴ�.
    {
        digitalWrite(nRedPin, LOW);
        digitalWrite(nBluePin, LOW);
    }

    Serial.println(nKnobServo);
    Serial.println(nServoAng);

    myServol.write(nServoAng);

    delay(nDelay);
}
}