# Inverse Kinematics by Solving Circles Intersection (2 Link Robots)
By intersecting two circles, one centered at the origin and the other centered at the goal point, we can deduce the inverse kinematics by solving for the points of intersection of the two circles, the analytic solution gets convoluted really fast especially when you start generalizing, but it's not hard at all.

## How it works
- We have two circle equations, we equate the two of them and then we solve for y. this is the easy part, now you have an equation for y.
- We substitute this equation in any of the two circle equations we had at the beginning, preferably the one centered at the origin (because it has no shifting along the axes), so after we substitute y, we now have an equation that only x and a bunch of other variables -variables that are associated with the physical features of the robot like the length of the links, & the goal point-.
- After simplifying this equation we get a quadratic equation which is subsequently solved by using the quadratic formula, and this is where it gets complicated, you have too many variables to account for, but if you got to this point then its manageable.
