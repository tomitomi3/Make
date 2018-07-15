# Make / Nico tech
Make/NT(Nico tech, Nanka tukuttemita)で作ったもの、メモのリポジトリ

# メモ

# Adurinoメモ

* Serialの転送速度ベンチマーク
* A/D変換と分周比

https://github.com/tomitomi3/Make/wiki/ArduinoMemo

# 作ってみた

# サイコロを振ってサイコロの目を読みとるシステム

数学をテーマに何か作ってみたを考えたとき。乱数生成、サイコロ、自動化・・・でこのシステムが出来ました。サイコロを振る装置とサイコロの目を読み取る２つからなる。[NT金沢2015](http://wiki.nicotech.jp/nico_tech/?NT%E9%87%91%E6%B2%A22015)、[NT加賀2017](http://wiki.nicotech.jp/nico_tech/index.php?NT%E5%8A%A0%E8%B3%802017),[NT金沢2018](http://wiki.nicotech.jp/nico_tech/index.php?NT%E9%87%91%E6%B2%A22018)で展示。

* システム全景

![DiceRecogSystem](https://raw.githubusercontent.com/tomitomi3/Make/master/_img/ntkaga2017.jpg)

* サイコロの目を読み取るソフト「DiceRecognizer」

![Dice](https://raw.githubusercontent.com/tomitomi3/Make/master/_img/dicerecognizer_NTKaga2017.PNG)

ハフ変換でサイコロの目（〇の部分）を検出しカウントします。Oxyplotを使って棒グラフを描きます。FET(2SK4017)とソレノイドがつながったArudinoに接続されていると一定間隔でソレノイドのON/OFFを行います。コードは[ここ](https://github.com/tomitomi3/Make/tree/master/DiceRecognizer/ShootDice)にあります。

* ToDo
  * サイコロの目に応じてパラメータ最適化。一部実装したけど値が発散してしまった。
  * 画像認識ロジックをDNNなどを使用して多面ダイスへの対応
  * 複数個（打ち上げ機構を変えないと変更しないとだめかも２台つかうとか。。。）
  * 分布（二項/正規分布）
