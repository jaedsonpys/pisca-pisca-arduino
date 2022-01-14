#define led1 6
#define led2 5
#define led3 4
#define led4 3

int time = 100;

void setup() {
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
    pinMode(led4, OUTPUT);
}

void loop() {
    for(int i = 0; i < 5; i++){
        digitalWrite(led1, HIGH);
        delay(time);
        digitalWrite(led1, LOW);

        digitalWrite(led2, HIGH);
        delay(time);
        digitalWrite(led2, LOW);

        digitalWrite(led3, HIGH);
        delay(time);
        digitalWrite(led3, LOW);

        digitalWrite(led4, HIGH);
        delay(time);
        digitalWrite(led4, LOW);
    }

    delay(500);

    for(int i = 0; i < 2; i++){
        digitalWrite(led1, HIGH);
        digitalWrite(led2, HIGH);
        digitalWrite(led3, HIGH);
        digitalWrite(led4, HIGH);

        delay(time);

        digitalWrite(led1, LOW);
        digitalWrite(led2, LOW);
        digitalWrite(led3, LOW);
        digitalWrite(led4, LOW);
    }
}