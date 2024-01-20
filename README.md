# gas-security-alarm-system

## 概要

ガスセンサを使用してセキュリティアラームシステムを構築したものです。ガスの検知により、異常が検知された場合にアラームが発動します。

## 特徴

- ガスセンサによるリアルタイムなガス検知
- アラーム音およびLEDによる迅速な警報
- 通常時は安全な状態を示すLED点灯
- プロジェクトはArduinoボード上で動作
  
## インストールと実行

1. Arduino IDEをインストールします。
2. `gas-security-alarm-system.ino`ファイルをArduino IDEで開きます。
3. Arduinoボードを接続し、プログラムを書き込みます。
4. ガスセンサやLED、ブザーなどを適切に接続します。
5. プロジェクトを起動し、正常に動作することを確認します。

## 回路及び周辺機器

| 名前    | 数量 | コンポーネント            |
|--------|------|--------------------------|
| U1     | 1    | Arduino Uno R3           |
| buzzarPin | 1    | 圧電                      |
| R1, R3 | 2    | 1 kΩ 抵抗                |
| R2     | 1    | 4.5 kΩ 抵抗              |
| red_LED | 1    | 赤 LED                   |
| greeen_LED | 1    | 緑 LED                   |
| gasPin | 1    | ガス センサー            |

## 接続

![Gas Security Alarm System](https://csg.tinkercad.com/things/gxVJNNoJG8g/t725.png?rev=1705744194024000000&s=&v=1&type=circuits)

Tinkercad : [gas-security-alarm-system](https://www.tinkercad.com/things/gxVJNNoJG8g-gas-security-alarm-system)

## 作者

[yhotta240](https://github.com/yhotta240)

