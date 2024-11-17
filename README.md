<h1 align="center">push_swap_42_1337 </h1>
<p align="center">
  <a href="https://github.com//mohimi-coder/push_swap">
    <img src="https://github.com/mohimi-coder/1337_badges/blob/master/push_swapm.png?raw=true" alt="42 Badge">
  </a>
</p>

When I first became an official student at 1337 coding school, I knew early on that I wanted to tackle some of the algorithms projects that you can unlock.

One of the algorithm projects I unlocked is called Push_Swap. The idea is simple, You have two stacks called Stack A and Stack B. Stack A is given a random list of unorganized numbers. You must take the random list of numbers in Stack A and sort them so that Stack A is organized from smallest to largest. There are only a few moves you’re allowed to used to manipulate the stacks that we’re going to call “Actions”. The main goal of this project is to organize Stack A in as few actions as possible.
## actions

So what actions are we allowed to use on the two stacks?

=> The actions are named: sa, sb, ss, ra, rb, rr, rra, rrb, rrr, pa, pb.
So now that we have the actions we are allowed to use, how should we use them? The algorithms we’ll use depends on how many random numbers are getting applied to Stack A. There are 5 main test cases that I want to cover. The cases are 3, 4, 5, 100, and 500. Each case requires me to handle them differently, so I’ll break down how I optimized each case one at a time.

## 3 random numbers:

I realized there are five possible cases for only three random numbers being put into Stack A. My goal is to make sure I sort them from smallest to largest in no more than two actions. The way I determine which actions I should use depends on the position of the top number, middle number, and bottom number. With every case, I compare top to middle, middle to bottom, and bottom to top. Depending on which number is bigger or smaller will affect which actions I call.

![algo_3](https://github.com/user-attachments/assets/c333f954-7283-4487-9ded-e0e047cad959)

## 5 random numers:

Now we have to deal with 5 random numbers getting put into Stack A. We are only allowed 12 actions. Anything beyond that will fail this section of the project. What’s awesome about this is that we can use the logic from 3 Random Numbers to optimize our code. All we have to do is just move the first two numbers from the top of Stack A and move them to Stack B. We’ll bring those numbers back once the three numbers in Stack A are sorted from smallest to largest. I’m going to apply the test case 1 5 2 4 3 and show how my logic will work.

![algo_5](https://github.com/user-attachments/assets/906a2291-a8db-48ac-be41-9792022b28d3)

Step 1: Sends the top two numbers from Stack A to Stack B.

Step 2–3: Uses the logic from 3 Random Numbers to sort the numbers in A.

Step 4–6: Makes sure Stack A can correctly accept the numbers from Stack B.

In total, you’ll use 7 action points. Way below our max limit of 12.

## Sorting 100 and 500 Random Numbers :

When sorting 100 or 500 random numbers into Stack A, specific action limits are imposed: 700 actions for 100 numbers and 5500 actions for 500 numbers. Exceeding these limits will result in a failure for this section of the project.

To tackle this, I use a different algorithm, explained step by step:

Step-by-Step Algorithm:
Stack Indexing:

Utilize a function to index the numbers in Stack A from smallest to largest.
Initialize Parameters:

For 100 numbers, set X = 16.
For 500 numbers, set X = 36.
Initialize Counter:

Declare an integer i = 0. This counter is used to compare with the index of the top element of Stack A.
Each time an element is pushed from Stack A to Stack B, increment i.
Conditions for Moving Elements:

If the index of the top element of Stack A is less than or equal to i, perform (pb, i++).
If the index of the top element of Stack A is less than or equal to i + X (where X = 16 for 100 numbers and X = 36 for 500 numbers), perform (pb, rb, i++).
Otherwise, perform (ra).
Once all elements are moved from Stack A to Stack B, proceed to the following steps to move elements back from Stack B to Stack A:

Mark Positions in Stack B:

Identify the positions of numbers in Stack B.
Locate Maximum Position:

Use a function called max_position to find the position of the maximum number in Stack B.
Divide stack_b->size by 2 to determine whether the maximum number is in the upper half or the lower half.
Conditions for Moving Maximum Elements:

If the position of the maximum number is less than stack_b->size / 2, perform (while(stack_b->position != max) {rb}). When (stack_b->position == max), perform (pa).
Otherwise, perform (while(stack_b->position != max) {rrb}). When (stack_b->position == max), perform (pa).
