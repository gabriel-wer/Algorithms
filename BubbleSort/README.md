# Bubble Sort

Bubble sort is done by swapping values in case the next value is lower than the current one.

[1, 4, 5, 2, 3]

It would go linearly and swap 5 <> 2 then 5 <> 3 and then scan linearly from the beginning again doing the same.

With every iteration the last value is always the highest one so you need to check a number of times equivalent to ARRAY SIZE - ITERATION NUMBER

You also dont have to check the last value after each iteration because its always the highest possible at that time 

Ex:

- 1 Iteration -> Scan up to ArraySize number of times
- 2 Iteration -> Scan up to ArraySize-1 number of times
- 3 Iteration -> Scan up to ArraySize-2 number of times
- 4 Iteration -> Scan up to ArraySize-3 number of times

#### Big O = O(N^2)

Dont really understand the reason why 

Must search more 
