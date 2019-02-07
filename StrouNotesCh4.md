Chapter 4 Stroustrup notes
==========================

Computation
-----------

---

PP 100

--- 

    double dc;
    cin >> dc;
    double df = 9/5*dc+32; // beware!

> Unfortunately, but quite logically, this does not represent an accurate temperature scale conversion: the value of 9/5 is 1 rather than the 1.8 we might have hoped for. To get the code mathematically correct, either 9 or 5 (or both) will have to be changed into a double. For example:

    double dc;
    cin >> dc;
    double df = 9.0/5*dc+32; // better

Wouldn't it be better to just initialize 9 and 5 first?

No I guess not, since it's a conversion formula, they're just values in the formula.

**Always use floating point numbers unless you have good reason not to**

[//]: # ( Memorise the celcius to faregnheight conversion! )





--- 
