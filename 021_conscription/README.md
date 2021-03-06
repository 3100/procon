Conscription Problem
----

N人の女とM人の男を徴兵したいと思います。
一人を徴兵するのに10000ドルの費用がかかりますが、
既に親しい間柄の人が徴兵されている場合、より安い費用で徴兵することが可能です。
いくつかの男女の間には１～９９９９の新密度が定まっており、
ある人を徴兵する際の費用は、10000-(既に徴兵されている人の内で最も高い新密度)となります。
このとき、適切な順番で徴兵を行うことにより、全員を徴兵するために必要な費用を最小化しなさい。

制約

* 1 <= N, M <= 10000
* 0 <= R <= 50000
* 0 < d < 10000

## 例

    N = 5
    M = 5
    R = 8
    
    関係は次のR個((x, y, d)とは男のx番と女のy番が新密度dであることを表します)
    (x, y, d) = {(4, 3, 6831), (1, 3, 4583), (0, 0, 6592), (0, 1, 3063), (3, 3, 4975), (1, 3, 2049), (4, 2, 2104), (2, 2, 781)}

が与えられた時、

    71071

が答えとなる。

## 出題

蟻本 p.103
