Roadblocks Problem
----

R本の道とN個の交差点がある街があります。
道路は両方向に通行可能です。
1番の交差点からN番の交差点への二番目の最短路の長さを求めなさい。
ただし、二番目の最短路とは、最短路よりも真に長いものの内で最短のもののことを言います。
同じ道路を複数回通っても構いません。

制約

* 1 <= N <= 5000
* 1 <= R <= 100000

## 例

    N = 4
    R = 4

が与えられた時、

    450(1->2->4が長さ300で最短路、1->2->3->4が長さ450で二番目の最短路)

が答えとなる。
ただ、これは図を見なければ解答できないため、解くときは本を見たほうが良い。

## 出題

蟻本 p.102
