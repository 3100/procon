迷路の最短路
----

* 大きさN(縦)×M(横)の迷路
* 1回の行動で上下左右に移動できる
* スタートからゴールまでにかかる最短の行動回数を求める
* スタートからゴールまではつながっていると仮定してよい

## 例

    N=10,M=10

    XSXXXXXX.X
    ......X..X
    .X.XX.XX.X
    .X........
    XX.XX.XXXX
    ....X....X
    .XXXXXXX.X
    ....X.....
    .XXXX.XXX.
    ....X...GX

の時、答えは22

但し

 * Xは移動できない
 * .は移動できる
 * Sがスタート、Gがゴール


## 出典

蟻本 p.37
