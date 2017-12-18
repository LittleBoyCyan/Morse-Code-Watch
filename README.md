# Morse-Code-Watch
모스코드 워치 프로젝트

점과 선의 단순한 표현기호를 사용한 의사소통 방법인 모스코드를 보낼 수 있는 손목시계입니다.

기능
1. 아두이노와 ATEML ATtiny85 마이크로 컨트롤러 칩을 사용해서 원하는 메시지를 출력할 수 있습니다.
2. 전세계적으로 사용하는 인터네셔널 모스코드를 사용합니다.
3. 내장된 버튼을 이용해서 모스코드를 직접 발신할 수 있습니다. LED 밝기에 따라 멀리 있는 곳에서도 인지할 수 있는 통신 수단으로 사용해보세요.

가이드
1. 전원 스위치를 켜면 아두이노 코드에 미리 입력한 메시지를 반복적으로 출력합니다.
2. 모스코드 메시지가 끝날 때까지 버튼을 누르고 있으면 수동 모드로 전환됩니다.
3. 수동모드로 전환되면 버튼을 누를 때에만 LED가 켜져서 원하는 메시지를 직접 보낼 수 있습니다.
4. 배터리가 닳아서 밝기가 줄어들면 배터리를 교체하세요. 쉽게 구매할 수 있는 2032 코인 배터리를 사용합니다.

개발자
1. 아두이노 코드를 변경해서 자유롭게 해킹하세요.
2. 기본 코드에서는 영문 대문자와 숫자만 사용할 수 있습니다. 다른 언어도 직접 추가하거나 변경 가능합니다.
3. LED에는 마이크로 컨트롤러에서 3개의 출력 포트를 사용합니다. 밝기 제어를 위해 개별적으로 사용할 수 있습니다. 디폴트 세팅은 3개를 동시에 사용합니다.
4. PCB상의 ICSP 포트르 사용해서 코드를 업로드하세요. 아두이노 우노 보드가 있다면 ArduinoISP 를 사용해서 업로드 할 수 있습니다.
5. 아두이노의 입력 포트로 사용할 수 있는 것은 버튼이 있습니다.
6. 회로와 PCB 제작을 위한 파일, 아두이노 코드를 다운받을 수 있습니다.

코드 업로드
Arduino IPS 참조
https://www.arduino.cc/en/Tutorial/ArduinoISP

Arduino UNO 와 모스코드 워치의 왼쪽 상단의 ICSP 포트와의 결선 방법입니다.

아두이노 - 모스코드 워치
13 - SCK /
12 - MISO /
11 - MOSI /
10 - RESET /
5+ - VTG /
GND - GND 

<img src=https://www.arduino.cc/en/uploads/Tutorial/ISP.png>
  
  
  
1. 최신 아두이노 IDE 기준, 메뉴의 Tools > Board > Boards Manager 에서 ATtiny 검색하여 설치
2. 업로드시 ATtiny 선택
Boards : ATtiny
Processor : ATtiny85
Clock : 1Mhz
Port : 연결된 아두이노 우노 보드 선택
Programmer : Arduino as ISP



<img src=http://ringjoon.dothome.co.kr/morse_code_watch_01.jpg width=600>
<img src=http://ringjoon.dothome.co.kr/morse_code_watch_02.jpg width=600>
<img src=http://ringjoon.dothome.co.kr/morse_code.jpg>

