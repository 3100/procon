Food chain Problem
----

N匹の動物がいて、1, 2, ..., Nと番号が付けられています。
動物は全て３つの種類A, B, Cのいずれかです。
AはBを食べ、BはCを食べ、CはAを食べます。
次の２種類の情報が順番にk個与えられます。

* タイプ１：xとyは同じ種類です。
* タイプ２：xはyを食べます。

これらは全て正しいとは限りません。
以前に与えられた情報と矛盾する情報や、x, yが正しい番号(1, 2, ..., N)
でないような正しくない情報が与えられる可能性があります。
K個の情報のうち、そのような情報の個数を出力してください。
そのような情報は捨てると考えます。

制約

* 1 <= N <= 50000
* 0 <= K <= 100000

## 例

    N = 100, K = 7
    
    情報は次の７個
    * タイプ 1, x = 101, y = 1
    * タイプ 2, x = 1, y = 2
    * タイプ 2, x = 2, y = 3
    * タイプ 2, x = 3, y = 3
    * タイプ 1, x = 1, y = 3
    * タイプ 2, x = 3, y = 1
    * タイプ 1, x = 5, y = 5

が与えられた時、

    3(1, 4, 5つめがおかしな情報)

が答えとなる。

## 出題

蟻本 p.85
