# Inverse-Kinematics-by-Solving-Circles-Intersection
By intersecting two circles, one centered at the origin and the other centered at the goal point, we can deduce the inverse kinematics by solving for the point sof intersection of the two circles, the analytic solution gets convoluted really fast especially when you start generalizing, but it's not hard at all.

## How it works
- We have two circles' equations, we equate the two equations and then we solve for y. this is the easy part, now you have an equation for y.
- We substitute this equation we got from the first step in any of the two circles' equations we had at the beginning, preferably the one centered at the origin (because it has no shifting along the axes), so after we substitute y, we now have an equation featuring x only and a bunch of other variables associated with the features of out robot like the length of the links, & also goal point.
- Now we simplify this equation to get a quadratic equation that we can solve using the Quadratic formula, and this is where it gets complicated, you have too many variables to account for, but if you got to this point then its manageable.
