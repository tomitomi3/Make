# メモ

## ArduinoUNO Serialの転送速度ベンチマーク

データ転送に用いるSerialの転送速度を調査。調査したコードは「benchmarkSerial」を参照。

1度に8バイト～32バイトを送るのがよさそうな結果。

|sample[N]|size[byte]|time[ms]|byte/s|kbyte/s|
|---|---|---|---|---|
|1|2|0.03|66667|66.7|
|2|4|0.05|80000|80.0|
|4|8|0.08|100000|100.0|
|8|16|0.16|100000|100.0|
|16|32|0.3|106667|106.7|
|32|64|1.44|44444|44.4|
|64|128|6.89|18578|18.6|

## ArduinoUNO A/D変換クロックと分周比設定

ArduinoのAD値読み込み関数の高速化。AD変換のクロック周波数を変更する。標準では128に設定されている。

分周比を下げることで高速化は可能だがその分精度が落ちる。AD変換の最高精度には50～200KHｚのADクロックが必要。

Arduinoの基準クロック16[MHz] = 16,000,000

|分周比|ADクロック|sample/S|
|---|---|---|
|2|8,000,000|615,385|
|4|4,000,000|307,692|
|8|2,000,000|153,846|
|16|1,000,000|76,923|
|32|500,000|38,462|
|64|250,000|19,231|
|128|125,000|9,615|
