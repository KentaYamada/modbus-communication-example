# modbus-communication-example

Modbus 規格を使ったサンプルプログラム

## Modbus とは？

アメリカの Modicon Inc.により開発された PLC 用のネットワーク。  
仕様は一般公開されており、FA 業界では汎用的に採用されているネットワークの１つ。

## Modbus の特徴

- マスタ・スレーブ方式
  - マスタのみが通信を開始することができる
- マルチスレーブ方式
  - 複数のスレーブに対して一括で司令を送信することができる
  - 自身の信号を受信したスレーブは、司令に対する応答を返す

## 伝送方法

- ASCII
- バイナリデータ

のいずれか

## 仕様書

株式会社エム・システム技研社が公開している[Modbus プロトコル概説書](https://www.m-system.co.jp/mssjapanese/kaisetsu/nmmodbus.pdf)を元に実装します。
