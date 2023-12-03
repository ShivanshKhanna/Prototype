int a = 11; //top
int f = 9; //top left
int b = 12; //top right
int g = 10; //middle
int c= 7; //bottom right
int e = 6; //bottom left
int d = 2; //bottom

void setup(){
pinMode(a, OUTPUT);
pinMode(b, OUTPUT);
pinMode(c, OUTPUT);
pinMode(d, OUTPUT);
pinMode(e, OUTPUT);
pinMode(f, OUTPUT);
pinMode(g, OUTPUT);

}
int pins[7] = {a, b, c, d, e, f, g};
void displayNumber(int *number) {
  for (int i = 0; i < 7; i++) {
    digitalWrite(pins[i], number[i]);
  }
}

void loop(){

int numberCount = 3;

int numbers[numberCount][7] = {
  {1, 1, 1, 1, 1, 1, 0}, // 0
  {0, 1, 1, 0, 0, 0, 0}, // 1
  {1, 1, 0, 1, 1, 0, 1}, // 2
};

for (int i = 0; i < numberCount; i++) {
  displayNumber(numbers[i]);
  delay(1000);
}
}


