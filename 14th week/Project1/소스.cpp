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
const int potentiometerPin = 0; //가변저항기에 아날로그 핀 설정


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
    int nServoAng = map(nKnobServo, MINANALOG, MAXANALOG, MINANG, MAXANG);// 각도가 0~180까지 작동 및 발광속도(0~1023)

    if (nServoAng <= 60) //각도가 60도이하면 빨간불이 깜박거립니다(가변저항기의 각도에 따라 불빛의 깜빡이 속도가 다릅니다).
    {
        digitalWrite(nRedPin, HIGH);
        delay(nKnobServo);
        digitalWrite(nRedPin, LOW);
        delay(nKnobServo);
    }
    else if (nServoAng <= 120)  //각도가 120이하면 파란불이 깜박거립니다(가변저항기의 각도에 따라 불빛의 깜빡이 속도가 다릅니다).
    {
        digitalWrite(nBluePin, HIGH);
        delay(nKnobServo);
        digitalWrite(nBluePin, LOW);
        delay(nKnobServo);
    }
    else//120도이상이면 불이 꺼집니다.
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