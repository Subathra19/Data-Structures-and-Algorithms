## 1. Egg Drop puzzle
* Consider n eggs and a building with k floors. Suppose that we wish to know which stories in a k-story building are safe to drop eggs from, and which will cause the eggs to break on landing.
* We make a few assumptions:
  * An egg that survives a fall can be used again
  * A broken egg must be discarded.
  * The effect of a fall is the same for all eggs.
  * If an egg breaks when dropped, then it would break if dropped from a higher floor.
  * If an egg survives a fall then it would survive a shorter fall. 
* If only one egg is available then we have to drop the egg from the first-floor window; if it survives, drop it from the second floor window. Continue upward until it breaks.
 In the worst case, this method may require k droppings. 
* Suppose 2 eggs are available. What is the least number of egg-droppings that is guaranteed to work in all cases?
* [Solution](https://github.com/Subathra19/Data-Structures-and-Algorithms/blob/main/Exercises/Puzzle-Exercise/eggdrop.c)

## 2. Two water jug problem
  * Consider an m litre jug and an n litre jug where 0 < m < n. Both the jugs are initially empty and there are no markings to measure smaller quantities.
    Determine the minimum no of operations to be performed to obtain v litres of water (v<n) in one of jug.
  * [Solution](https://github.com/Subathra19/Data-Structures-and-Algorithms/blob/main/Exercises/Puzzle-Exercise/waterjug.c)

## 3. Escape Jail
 * A thief trying to escape from a jail. He has to cross N walls each with varying heights (every height is greater than 0). He climbs X feet every time. But, due to the slippery nature of those walls, every time he slips back by Y feet. Now the task is to calculate the total number of jumps required to cross all walls and escape from the jail.
 * [Solution](https://github.com/Subathra19/Data-Structures-and-Algorithms/blob/main/Exercises/Puzzle-Exercise/escapejail.c)

## 4. Rain Water Trapping
 * Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining.
 * Ex: For an array, a[]={2,0,2,1,3}. The total trapped water will be 3 units 
<p align="center">
  <img width="460" height="400" src="https://github.com/Subathra19/Data-Structures-and-Algorithms/blob/main/images/rainwater.PNG">
</p>
 
 * [Solution](https://github.com/Subathra19/Data-Structures-and-Algorithms/blob/main/Exercises/Puzzle-Exercise/rainwater.c)

## 5. Nut-Bolt Problem
* For a given set of n nuts and n bolts. Find the match efficiently.
* [Solution](https://github.com/Subathra19/Data-Structures-and-Algorithms/blob/main/Exercises/Puzzle-Exercise/nutbolts.c)


