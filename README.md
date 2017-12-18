# Make / Nico tech
Make/Nico techで作ったもの、メモのリポジトリ

## ArduinoUNOメモ

* Serialの転送速度ベンチマーク
* A/D変換と分周比

https://github.com/tomitomi3/Make/wiki/ArduinoMemo

## サイコロの目を読み取るソフト「DiceRecognizer」

![Dice](https://raw.githubusercontent.com/tomitomi3/Make/master/_img/dicerecognizer_NTKaga2017.PNG)

* 概要

[NT金沢2015](http://wiki.nicotech.jp/nico_tech/?NT%E9%87%91%E6%B2%A22015)、[NT加賀2017](http://wiki.nicotech.jp/nico_tech/index.php?NT%E5%8A%A0%E8%B3%802017)で展示。NT加賀2017でまともに動くソフトとなった。

ハフ変換でサイコロの目（〇の部分）を検出しカウントします。Oxyplotを使って棒グラフを描きます。

FET(2SK4017)とソレノイドがつながったArudinoに接続されていると一定間隔でソレノイドのON/OFFを行います。コードは[ここ](https://github.com/tomitomi3/Make/tree/master/DiceRecognizer/ShootDice)にあります。

* ToDo（いつか。。）
  * サイコロの目に応じてパラメータ最適化。一部実装したけど値が発散してしまった。
  * 画像認識ロジックをDNNなどを使用する
