# Practice 2-1 心軟的助教

## Desciption

依序給予一個同學的兩次作業成績和期中期末成績，配分比例如下：

第一次作業(15%)
第二次作業(15%)
期中考(35%)
期末考(35%)

理論上計算出來的成績低於60分助教就應該當掉，但被當掉的人太多，助教想要救一些人：

1. 成績高於50(>=)，只要兩次作業都有交(沒交是0分)，助教就會給過。
2. 如果同學不小心忘記交第一次作業或是第二次作業，只要成績高於55，助教也給過。
3. 有同學考運不佳，兩次作業都認真寫滿分，只要成績高於45助教也給過。

## Sample Input

依序給予一個同學的兩次作業成績和期中期末成績

```
0 100 100 100
```

## Sample Output

輸出該同學通過與否，通過輸出`Pass`, 反之`Fail`

```
Pass
```