//char NAME[] = "JANG MIN JOON"; // 이름
char MESSAGE[] = "I LOVE MY CATS"; // 메시지

char LED1 = 12; // Tiny 6번 핀
char LED2 = 2; // Tiny 7번 핀
char LED3 = 3; // Tiny 2번 핀
char TACT = 4; // Tiny 3번 핀

boolean TactState; // 택 버튼 입력 저장

volatile byte state = LOW;

int shortTime = 150; // 모스코드 Dot 길이 시간 - 전체 빠르기 조절은 이걸로
int longTime = shortTime * 3; // 모스코드 Dash 길이 시간
int pause = longTime * 2; // 문자 사이 시간
int wordSpace = longTime * 3; // 띄어쓰기 시간

char mode; // 택 버튼 누를 때 마다 변하는 모드

char A[] = {1, 2, 0, 0, 0, 0};
char B[] = {2, 1, 1, 1, 0, 0};
char C[] = {2, 1, 2, 1, 0, 0};
char D[] = {2, 1, 1, 0, 0, 0};
char E[] = {1, 0, 0, 0, 0, 0};
char F[] = {1, 1, 2, 1, 0, 0};
char G[] = {2, 2, 1, 0, 0, 0};
char H[] = {1, 1, 1, 1, 0, 0};
char I[] = {1, 1, 0, 0, 0, 0};
char J[] = {1, 2, 2, 2, 0, 0};
char K[] = {2, 1, 2, 0, 0, 0};
char L[] = {1, 2, 1, 1, 0, 0};
char M[] = {2, 2, 0, 0, 0, 0};
char N[] = {2, 1, 0, 0, 0, 0};
char O[] = {2, 2, 2, 0, 0, 0};
char P[] = {1, 2, 2, 1, 0, 0};
char Q[] = {2, 2, 1, 2, 0, 0};
char R[] = {1, 2, 1, 0, 0, 0};
char S[] = {1, 1, 1, 0, 0, 0};
char T[] = {2, 0, 0, 0, 0, 0};
char U[] = {1, 1, 2, 0, 0, 0};
char V[] = {1, 1, 1, 2, 0, 0};
char W[] = {1, 2, 2, 0, 0, 0};
char X[] = {2, 1, 1, 2, 0, 0};
char Y[] = {2, 1, 2, 2, 0, 0};
char Z[] = {2, 2, 1, 1, 0, 0};

char Num0[] = {2, 2, 2, 2, 2, 0};
char Num1[] = {1, 2, 2, 2, 2, 0};
char Num2[] = {1, 1, 2, 2, 2, 0};
char Num3[] = {1, 1, 1, 2, 2, 0};
char Num4[] = {1, 1, 1, 1, 2, 0};
char Num5[] = {1, 1, 1, 1, 1, 0};
char Num6[] = {2, 1, 1, 1, 1, 0};
char Num7[] = {2, 2, 1, 1, 1, 0};
char Num8[] = {2, 2, 2, 1, 1, 0};
char Num9[] = {2, 2, 2, 2, 1, 0};

char dot[] = {1, 2, 1, 2, 1, 2};
char comma[] = {2, 2, 1, 1, 2, 2};
char que[] = {1, 1, 2, 2, 1, 1};
char excl[] = {2, 1, 2, 1, 2, 2};
char slash[] = {2, 1, 1, 2, 1, 0};
char col[] = {2, 2, 2, 1, 1, 1};
char semicol[] = {2, 1, 2, 1, 2, 1};
char equal[] = {2, 1, 1, 1, 2, 0};
char plus[] = {1, 2, 1, 2, 1, 0};
char dash[] = {2, 1, 1, 1, 1, 2};
char underbar[] = {1, 1, 2, 2, 1, 2};
char at[] = {1, 2, 2, 1, 2, 1};
char quo[] = {1, 2, 2, 2, 2, 1};
char doublequo[] = {1, 2, 1, 1, 2, 1};


void pulse() { // 펄스 출력 함수
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  delay(100);
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  delay(100);
}


char morse(char i[]) { // 각 알파벳마다 Dot 과 Dash 로 변환해서 출력해주는 함수

  for (char j = 0; j < 6; j++) {
    if (i[j] == 2) {
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, HIGH);
      delay(longTime);
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, LOW);
      delay(shortTime);
    } else if (i[j] == 1) {
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, HIGH);
      delay(shortTime);
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, LOW);
      delay(shortTime);
    }
  }
  delay(pause);
}


char morseString(char i[], int y) { // 문자열을 분해해서 알파벳에 맞는 모스 함수를 실행해주는 함수
  for (int j = 0; j < y; j++) {
    switch (i[j]) {
      case 'A':
        morse(A);
        break;
      case 'B':
        morse(B);
        break;
      case 'C':
        morse(C);
        break;
      case 'D':
        morse(D);
        break;
      case 'E':
        morse(E);
        break;
      case 'F':
        morse(F);
        break;
      case 'G':
        morse(G);
        break;
      case 'H':
        morse(H);
        break;
      case 'I':
        morse(I);
        break;
      case 'J':
        morse(J);
        break;
      case 'K':
        morse(K);
        break;
      case 'L':
        morse(L);
        break;
      case 'M':
        morse(M);
        break;
      case 'N':
        morse(N);
        break;
      case 'O':
        morse(O);
        break;
      case 'P':
        morse(P);
        break;
      case 'Q':
        morse(Q);
        break;
      case 'R':
        morse(R);
        break;
      case 'S':
        morse(S);
        break;
      case 'T':
        morse(T);
        break;
      case 'U':
        morse(U);
        break;
      case 'V':
        morse(V);
        break;
      case 'W':
        morse(W);
        break;
      case 'X':
        morse(X);
        break;
      case 'Y':
        morse(Y);
        break;
      case 'Z':
        morse(Z);
        break;
      case '1':
        morse(Num1);
        break;
      case '2':
        morse(Num2);
        break;
      case '3':
        morse(Num3);
        break;
      case '4':
        morse(Num4);
        break;
      case '5':
        morse(Num5);
        break;
      case '6':
        morse(Num6);
        break;
      case '7':
        morse(Num7);
        break;
      case '8':
        morse(Num8);
        break;
      case '9':
        morse(Num9);
        break;
      case ' ':
        delay(wordSpace);
        break;
      default:
        break;
    }
  }
}


void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  //pinMode(TACT, INPUT);

  attachInterrupt(TACT, pulse, CHANGE);

}


void loop() {


  TactState = digitalRead(TACT);


  if (TactState) {
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    digitalWrite(LED3, HIGH);
    mode = 1;
  } else if (!TactState) {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
    digitalWrite(LED3, LOW);
  }

  if (!mode) {
    morseString(MESSAGE, sizeof(MESSAGE) - 1);
    //morseString(NAME, sizeof(NAME) - 1);
    delay(5000);
  }


}




