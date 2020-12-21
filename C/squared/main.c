#include <stdio.h>

/*
 * 関数の戻り値を使用せずに2乗した値を出力するプログラム(説明用)
 */

// グローバル変数定義 ＆ 初期化
int ret = 0;

// 渡された引数を二乗して、グローバル変数に代入する関数 squared を定義
// main で呼び出したい関数は main より前に定義する必要がある
void squared(int num) {
    // num を二乗してグローバル変数に代入する
    ret = num * num;
}

int main(void){
    // 二乗したい値を定数で定義
    const int numberToBeSquared = 5;
    
    // 二乗したい値を引数にして squared 関数を呼び出す
    squared(numberToBeSquared);
    
    // グローバル変数 ret の内容を出力する
    // squared 関数を 18行目 で呼び出しているため
    // グローバル変数 ret の内容は更新されている
    printf("%dを2乗した値は%dです。\n", numberToBeSquared, ret);
}

