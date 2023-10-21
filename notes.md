# Binary Search

**This algorithm assumes that the list is sorted in ascending order.**

First you jump to the middle of the list, then check if that middle value is lower or higher than the value youre
searching for, if the value is lower for example, you get the lower half of the list and run the same steps again
until you have either reached a point where you can't divide anymore (single number) or you have found the value
youre looking for.


#### Big O = O(log(n))

Because you keep halfing the array, the algorithm becomes logarithmic 
You do a log(n) amount of halving to get to the value

- Tip: If you have to half the value of an array its either LogN or NLogN amount of steps, depending on if you're
depending on if you're scanning it or not.

# Linear Search

This is a very basic algorithm that just scans a list of items search for X.

It is, as the name suggests, linear and will follow a straight line from the beginning to the end of a given list.


#### Big O = O(n)

It scales linearly with the list(n) given.

# Linked Lists

It is a pretty simple data structure that links points in memory that contains X value.

there are some different algorithms we can use on Linked Lists:

- Singly Linked Lists
    Its when you can only go forwards when looking through data, the current node only knows the next nodes location.
    A -> B -> C -> D

- Doubly Linked Lists
    You can go both ways when looking through data:
    A <-> B <-> C <-> D

- Queue
    Basically a single linked list that is always FIFO (First in First out)

- Stack
    A singly linked list that will work the opposite of a stack, Last in First out.
    D <- C <- B <- A

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
