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
