const int gasPin = A1;     // ガスセンサを接続したピン番号
const int buzzerPin = 2;   // ブザーを接続したピン番号
const int red_LED = 3;     // 赤色のLEDを接続したピン番号
const int green_LED = 4;   // 緑色のLEDを接続したピン番号

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(red_LED , OUTPUT);
  pinMode(green_LED , OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value = map(analogRead(gasPin), 300, 750, 0, 100);
  Serial.println(value); // デバッグ用の出力 
  if (value < 30) {
    digitalWrite(green_LED, HIGH);
    noTone(buzzerPin); // ガス値が30未満の場合は音を止める
  } 
  else {
    digitalWrite(red_LED, HIGH);
    digitalWrite(green_LED, LOW);
    delay(150); 
	tone(buzzerPin, 1000);  // 1kHzで鳴らす
  	delay(150);           // 1秒間鳴らす
  	noTone(buzzerPin);     // 音を止める
  	delay(150);
  }
  digitalWrite(red_LED, LOW);  // LEDを消灯
  delay(250);
}
