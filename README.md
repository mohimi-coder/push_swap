# push_swap

When I first became an official student at 1337 coding school, I knew early on that I wanted to tackle some of the algorithms projects that you can unlock.

One of the algorithm projects I unlocked is called Push_Swap. The idea is simple, You have two stacks called Stack A and Stack B. Stack A is given a random list of unorganized numbers. You must take the random list of numbers in Stack A and sort them so that Stack A is organized from smallest to largest. There are only a few moves you’re allowed to used to manipulate the stacks that we’re going to call “Actions”. The main goal of this project is to organize Stack A in as few actions as possible.
# actions

So what actions are we allowed to use on the two stacks?

=> The actions are named: sa, sb, ss, ra, rb, rr, rra, rrb, rrr, pa, pb.
So now that we have the actions we are allowed to use, how should we use them? The algorithms we’ll use depends on how many random numbers are getting applied to Stack A. There are 5 main test cases that I want to cover. The cases are 3, 4, 5, 100, and 500. Each case requires me to handle them differently, so I’ll break down how I optimized each case one at a time.

# 3 random numbers:

I realized there are five possible cases for only three random numbers being put into Stack A. My goal is to make sure I sort them from smallest to largest in no more than two actions. The way I determine which actions I should use depends on the position of the top number, middle number, and bottom number. With every case, I compare top to middle, middle to bottom, and bottom to top. Depending on which number is bigger or smaller will affect which actions I call.

![algo_3](https://github.com/user-attachments/assets/c333f954-7283-4487-9ded-e0e047cad959)
