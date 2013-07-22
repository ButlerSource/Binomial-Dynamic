Binomial-Dynamic
================

An Algorithm that Dynamically Solves the Binomial Coefficient.

Generally, the binomial coefficient is calculated 
using the formula: C(n,k) = n!/(k!(n-k)!).

We can easily program this into a recursive function, but it would be highly inefficient.

As with many recursive algorithms, there are overlapping sub-problems that can be avoided.
Such is the case with solving the Binomial Coefficient from the formula above. 
But how can we make a better algorithm? The Dynamic Programming Approach holds the answer.


Dynamic Programming Approach
============================

Instead of a recursive top-down calculation, we can shift our approach to a bottom-up calculation.

Since each Coefficient can be solved by taking the sum of the previous values, 
we can tabularize the data and "bulid" our way to the solution.

This program creates a two-dimenional array and builds the coefficient values up to the solution.

Rather than performing unnecessary recalcluations, we now can find the Binomail Coefficient optimally. 



