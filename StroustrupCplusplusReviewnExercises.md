# Stroustrups C++ Programming text book Review questions and exercises #

[//]: # ( Note: -- Use clang++ to compile -- if you can, figure out why g++ keeps bringing up an error: )
[//]: # ( /usr/local/include/c++/7.1.0/cwchar:44:10: fatal error: wchar.h: No such file or directory )
[//]: # ( #include <wchar.h> )
[//]: # (          ^~~~~~~~~ )

---


## Chapter 1 ##

### Reviews ###

1. Software is code - the digitial expression of solutions to problems attempting to be solved by computers
2. Software is important because it allows us to solve problems that would be far more difficult/impossible to do without it
3. Virtually everywhere there is a need that can be met with the use of Software
    - Enterprise
    - Science
    - Organization
    - business
    - learning
    - communication
4.  - A patient could be killed during software assissted surgery
    - A rocket ship could explode
    - A computer could be infected with a virus
5. Business infrastructure
    - Communication
    - Cars, fuel injection, emissions control, other electronic parts
    - Data analysis
6. engineering, analysis, systems maintenance, administration, app development, web development, embedded systems programming
7. Computer science is the broad scope topic of understanding computer systems in general which can include programming, which itself is simply the use of computer code to produce a software solution.
8. Navigation, mechanical systems, interfacing, communication.
9. A large conglomerate of physical servers used to store, organize, compute software and other such things
10. A very great many
    - What are the . and .. files in UNIX directories?
    - How do I customize tab spaces/width's in vim
    - How to beat procrastination dead
11. Data analysis
    - gene sequencing
    - gene searching and comparisions
    - whole genome analyses
    - 3D imaging
    - MRI scanning
    - File storage
    - Journal article drafting
12. MRI scanning again
    - computer assisted surgery
    - file collection
    - file storage
    - administration
    - communication
    - sample analysis
    - drug production
13. Music
    - computer games
    - movie making
    - special effects
    - smart TVs
    - Social Media
    - virtually everything
14. Intuitive
    - User friendlyness
    - General
    - problem solving
    - maintainable
    - scalable
    - readable
    - error free
    - human technology
15. Anyone
16. Analysis, design, programming, testing
17. It's multifaceted
    - It requires finding unique solutions to new problems
    - It requires finding ways of getting computers to do things that we couldnt' do without them
18. Having music to help me work
    - Having a brilliant laptop to write blog pots and study programming on
    - Central locking in my car
    - My television, my Xbox,
    - My phone
        - Calls
        - Todo lists
        - Shopping
        - Alarm clocks
19. - Social media
    - Emails
    - The internet

### Exercises ###

1. Research
    - writing
    - analysis
    - data storage
    - computing
    - statistics

2. Genomics research
    - analysis
    - storage
    - writing
    - computing
    - visualization
    - communication
    - programming

3. n/a
4. Computational Genetics
5. Spotify
    - Vim
    - Bash
    - Safari
    - Commander Keen
    - Perfect Dark
    - YouTube

6. Starting a Campfire
    - Going for a walk (shoes made with computer tech assisted machinery?)
    - Eating an apple (it may have been genetically modified using com aided tech)
    - 

7. n/a
8. I would like to be a competent computer programmer for the joy of it, besides wanting to make myself a more competent and employable scientist. I would ideally like to be able to write non-trivial programs, and if possible, sell them.
I enjoy the problem solving aspect of programming, not to mention to programming culture that I envisage. If I get to a point where I feel competent enough to become a professional programmer, this may be a suitable alternative to the profession for which I am currently training in. In any case I want to be a better scientist and problem solver with a solid background in programming to make me more employable, a more eficient computer user and a more satisfied human.

9. Besides being a programmer, strictly speaking, I would also like to play a role in systems administration, maintenance and service. I would like to build expertise particularly in linux and UNIX based systems. The better understanding I have computer systems and hardware, the better I will understand the technology I use to analyse large genetic data sets.

That's enough for now

Software is everywhere. It helps society.

Be part of the solution, not the problem. There is unparalelled diversity in software development.

---

# Chapter 2 #

### Drill ###

pp 86

Go to Appendix C
*Check* (25-01-2019) - - Get set up to compile, link and run programs in mac terminal emulator - "Check" 
*Check* (25-01-2019) - - Download the "std_lib_facilities.h" from stroustrup.com/Programming - "Check" 
*Check* (25-01-2019) - - Write, compile and execute Hello World program - "Check" 
*Check* (25-01-2019) - - Only problems I ran into were getting *std_lib_facilities.h* to work correctly now it does

### Review questions ###

1. The Hello World Program is desinged to offer an overview of the fundamental components of a computer program and provide an anchor to discuss important topics such as
    - simplicity and readability of code
    - syntax
    - error checking/debugging
and also to get your machine set up to write/test/execute programs

2. Name the four parts of a function
    - Return type
    - Function name
    - Parameter list
    - Function body

```
v' return type
    v' function name
int main('parameter list')

{

function body

} 
```

Not bad. I pretty much got all the parts right, without exactly remembering the correct terminology. I even inadvertently wrote exactly the most basic function *int main() {}*

3. Main
4. return 0; - ends the program, as in, it returns the value 0, indicating the program ran successfully
5. The compiler translates the code into machine readable code (assembly language)
6. #include tells the computer to give the compiler access to specific facilities
7. The .h indicates that the file in question is a *header* file
8. The linker is a program that links the necessary parts of the program together to form an executable program (such as the source code and the standard libraries for example)
9. The source file is the file that contains the primary instructions or workflow for the program, the object file contains information about
10. IDE stands for Interactive Development Environment, it is a comprehensive programming environment containing all the necessary tools for writing, testing and implementing your code.
11. Practise helps train your brain to develop the experience necessary to memorize and build intuition about programming
    - It also allows you to check your understanding, given most people almost certainly understand less than they give themsevles credit for

For the record
- Source code can be compiled into different code designed to be read by different machines.
- So correct source code can be compiled into different machine readable languages?
- But a compiled program can only run on machines compatible with how it was compiled right??

#### Terms ####

// - Denotes a C++ comment
<< - is an operator that directs the contents of one side, into the other?
C++ - A highly versatile, generalizable programming language invented by Barnes Stroustrup
comment - A comment is designed to annotate source code to help the author and others understand the code. It is specifically ignored by the compiler
compiler - a program designed to translate source code into machine readable code
compile-time-error - an error generated during the compile stage of the program, generally some kind of syntax or grammatacial error in the written code
cout - standard out
executable - a program ready to be executed by a computer or device
function - the work horse of computer programming - a named set of instructions that produces an output
header - ... um... a file that is interpreted by the compiler or linker with instructions for producing an executable program
IDE - Interactive Development Environment
\#include - A directive
library - a set of toold designed to be called upon during compile time in order to tell the compiler how to interpret the instruction given in the source code?
linker - links components of the program together necessary to create an exectuable program
main() - the main function, the first function executed in a C++ program, without it, the program cannot execute
object code - machine readable code
output - the results of an executed program
program - a function piece of software written in code
Source code - code written by a person to perform a function in a software program
statement - the simplest unit of code contained in a function body

### Exercises ###

1. Change the program to output the two lines: - "Check" 

Hello, programming!
Here we go!

2. I feel confident I can skip these exercises, despite Stroustrups admonitions. 
    - I need to learn to 'think' like a computer, ie. I need everything spelled out in excruciating detail
    - I don't need to bake blueberry muffins to achieve this

> The vast majority of time spent programming is spent fixing broken/incomplete code. If it's working, we don't need to look at it!

Chapter 3
=========

So... When cin is executed, the keyboard key <enter> has a designated purpose, which is to indicate the conclusion of the character string
    - How does 'C++' tell the computer that's what it wants <enter> to do once the character string is complete?
      - There must be some builtin or default function which includes intructions for what <enter> does in the program
    - Needs to know what to do after you press <enter> too.
        - Save string contents, move to next statement in the program, execute that statement

[//]: # ( Repetition provides opportunity for errors! )

The statement that calls an object and gives it a type is called a *definition* statement

Object - A part of the memory used for storing information

Variable - a named object

C++ is notoriously picky about object types

string types *only* accept strings (i.e. something surrounded by "*double* quotes")
int only takes integers (whole numbers)
double takes floating point numbers (decimal places)
char takes a single character enclosed in *single* quotes eg. 'a'
bool takes boolean logic, it. true or false (literally 'true' or 'false', without the single quotes)

So a single character inside double quotes is technically a "string" (although it would have to be declared as a string variable when first initialized)
  - i.e. if a string is enclosed in single quotes it will throw an error, and vice versa for characters inside double quotes!!

specific object types can have specific operations performed on them.

Remember the bit about 'double'

Interesting - short for 'double-precision floating point' - "the computer's approximation to the mathematical concept of a real number"

>> 'get from'

Interesting - When prompted for two inputs, into two variables, any <space> <tab> or <newline> will distinguish between the first input, and the second.

So
Geoff<cr>34
OR
Geoff<space>34
Will both work.

[//]: # ( always? provide a default value to a variable )

<C-d>   - in UNIX/Linux indicates an 'end of input' character. Interesting.

#### Stroustrups top naming tips ####

- Cannot use 'keywords'  
- Shouldn't use names of libraries and standards, will lead to trouble  
- shouldn't use shortened names or acronyms  
- Should be obvious and descriptive, long (but not too long, 2 words is good), unique  
- Never use all capitals  
- Convention is to use 'underscore' as word separators (C++ convention?)  
- Begin types with Capital letters, as this is a nice contrast to all builtin standards, libraries, keywords, etc. (which do not use capital letters)  

A *type* defines a set of possible values and a set of operators (int, string, || && + - etc.)
[//]: # ( Type tells you what an object is going to be used for )

An *object* is some memory that holds a given *type*
[//]: # ( Object is the physical - or digital? - space that is being defined by the type )

A *value* is a set of bits interpreted in memory by a given *type* (does this mean that certain binary *digits* are/can be assigned to different pieces of information depending on the *type* it is assigned to?)
[//]: # ( Value is the information that is stored in the object, and interpreted by the type )

A *variable* is a named *object*
[//]: # ( An object that actually exists and has a name )

A *declaration* is a statement that gives a name to an *object*
[//]: # ( How you go about giving your object a name - It takes an object and turns it into a variable )

A *definition* is a *declaration* that sets aside memory for an *object*
[//]: # ( A declaration that actually exists and declares the existence of an object which it makes space for in memory )

*Every int is of the same size; that is, the compiler sets aside the same fixed amount of memory for each int. On a typical desktop computer, that amount is 4 bytes (32 bits)*

Byte  == 8 bits

Char  == 1 byte (8 bits)

Int   == 4 bytes (32 bits)

So characters can easily be converted to ints (every character has at least one corresponding Int)

- 00000000 00000000 00000000 01111000 == 4 bytes == 32 bits == one integer

- Every character is only 1 byte!
- 00000000 == 1 byte == 8 bits == one char

Ch 3 Summary
============

> Type safety is super important

> Always initialize your variables with a default value!

> Chars can be converted to Ints, but Ints shouldn't be converted to Chars

--- 
--- 
[//]: # ( Currently on: Page 65 )
--- 
--- 

char c = 'x';
int i1 = c;
int i1 = 'x';

Interesting. You can assign a value to an object by declaring another variable, or the value of that variable (obviously)... just wondering:
    - Is one method preferred
    - Or are there situations where they are each more suited, if so what?

Note: Assignment and initialization are different.

A subtle but important difference. Initialization initialises a variable (and should always declare an input

A note on conditions: A condition, inside a conditional, is designed to execute the code block, 'if the condition is a success', not necessarily if it is 'true'. If arithmetic operations give results that don't meet the condition, it fails, but also, if a simple operation is successfully executed this can also execute the code block.. does that make sense?

---

[//]: # ( NOTE: Use {} list notation from now on, instead of = for declaring and defining variables!! )

#### Drill #### 

Compiler is *really really* picky about types, operators etc.
    - Be really pedantic about which operators you use, and other important notation when invoking variables

This isn't working, and I can't figure out why...
    - It seems like it should be quite simple.
    - Maybe I need to re-write the program and simplify it to make it easier to modify and stuff

So what's really going on here.

It doesn't like the fact that I'm comparing a variable to a specific character. Why wouldn't it like that? How do I ask it nicely to check if the value contained in child1_sex is 'm' or 'f'?

OK, so I fixed to problem by simply creating a char variable assigned with the desired value, I then compared the result recorded in childX_sex with the value of the assigned variable. I can't help but feel there's a simpler way of doing it though... surely I can simply compare the value of a variable with a character or integer, surely...

OK, so apparently, despite all of my tinkering, I never landed on having an assigned character variable wrapped in single quotes, and my if comparison, comparing to a character wrapped in single quotes...

But you can now see the working source code here:

~/Cplusplus/CppPrograms/loveletter.cpp

Note: - character assignment is done using **single** quotes - ' not double quotes ".
More: - variable comparison to a character - the character **must** be in **single** quotes also!!

#### Review Qs ####

1. Promt implies some action is required by the user
2. >>
3. "Please enter any *whole* number:\n"; cin >> number;
4. New line, the backslash is an escape sequence that alters the interpretation of the following value. In the case of \n, n is no longer taken literally, but signifies a 'new line' in the standart output. What the user sees on screen when the program is executed is a line break in the appearing text.
5. Enter, or <cr>
6. Enter, or <cr>
7. cout << "Hello, " << first_name << "!\n";
8. An object is the physical space in memory defined by a type, to which a value is assigned.
9. A literal is a sequence of characters enclosed in "" that is taken literally, as it appears
10. All letters, numbers and most special characters and symbols
11. A variable is a value assigned to an object in the computers memory, interpreted according to its type
12. char is 1 byte, int is 4 bytes, double is 8 bytes (64 bits)
13. Bits and bytes? Fixed and variable?
14. = is an assignment operator (it gives something the value of another), == is an equivalence test (checks to see if either side is exactly equivalent)
15. concatenation joins strings together, string1 + string2.
16. Names good or bad?
    - This_little_pig - fine
    - latest thing - illegal - contains a space
    - MiniMineMine - fine
    - This_1_is fine - illegal - contains a space
    - the_$12_method - illegal - contains a symbol
    - number - fine
    - 2_For_1_special - illegal - starts with number/Uscore
    - _this_is_ok - illegal - starts with number/Uscore
    - correct?- illegal - contains a symbol
17. 5 names that are good, but problematic
    - m - only one letter
    - string - is the name of a variable type, will cause issues
    - BDM - avoid abbreviations/ackronyms
    - notinformative - uninformative
    - Notinformative - Only differs from previous by an uppercase letter at start
18. Good rules for choosing names
    - uniqe and informative but not too long
    - not too short
    - avoid single letters and numbers unless embedded and temporary
19. Type safety is an extra means of avoiding type changing issues, such as contracting integers into characters, or doubles into integers or characters etc.
20. Double -> int always rounds the double down, and an int typically is assigned 4 bytes, whereas a double is 8.
21. Avoid type conversions from larger to smaller objects

#### Exercises ####

1. Check
2. Check
3. Check
4. Check
[//]: # ( Weird error, something to do with if else statement, doesn't like it. Cannot see any difference between it and others that have worked in previous programs. )
[//]: # ( If statement expects only one statement before ending, so a single statement ending in ';' will end the if condition... same goes for else )
[//]: # ( How to include multiple lines/statements in a single if? is there a line break character at the end of a statement to link two lines of code? )
[//]: # ( Note: all statements relevant to an if statement must be enclosed in {} curly braces )
5. Check
6. Check
7. Check
8. Check
9. Check
Skipped 10 and 11 because my brain hurts and I really want to get onto Chapter 4.
As a consolation... never forget this:
[//]: # ( Type safety is **super** important!! Always be incredibly careful when converting types, or avoid it altogether )
[//]: # ( The best programs and programming techniques rely on good type habits )

# Chapter 4 - Computation #

arguments is a term often used to describe 'inputs'
computation is the process that leads from an input to an output

Our job as programmers is to express computations
- Correctly - *must work*
- Simply - *must be understandable, maintainable and scalable*
- Efficiently - *must be able to make computations as fast as possible, with the minimum code necessary*

[//]: # ( Build big things out of small things, abstracting the details as we go along. )

constexpr = a constant expression, known at compile time, cannot be changed
const = a constant expression that can be 'unknown' at compile time, but also cannot be changed.

Other points to consider:
Writing a program that other can use requires
- a commitment to continually maintaining that program and ensuring it continues to work as the platforms it was designed to work on are constantly changing and being updated
- a commitment to considerable documentation to understand that program and how to use it
- a commitment to quality program structure - correctness, simplicity, efficiency

[//]: # ( As a general rule, when working with numbers, use doubles unless you have a specific reason not to )

An expression contains operators.

An assignment of a variable is one example of an expression.
An expression is the most basic operation that a program performs.

expression statements end with a semicolon;

semicolons generally denote the conclusion of a statement which produces some effect.

[//]: # ( Always include protocols for 'bad' input, error outputs, checks, redundancies etc. )

*Yes I admit the switch function is easier to write and understand than nested if statement syntax. Although that could very well just be because I copied and modified the previous program. So it was, literally, easier*

Just wrote a really cool while loop which prints out a letter, and it's corresponding integer representation in... ASCII I think...

Just wrote a really cool for loop which prints out a letter, and it's corresponding integer representation in... ASCII I think...

For loops are *better* when a loop can be expressed as a simple *initiation, condition, incrementation* operation.

***Never modify the loop variable, from inside the loop body***

function definition:

type function-name(parameter list)
{
function body
}

type above means 'return type' thus it defines the type of value that the function will give as a result of the function being exectuted.

Generally is seems that when you have some statement which signifies that some computation, or block of statements is to be performed, then those statements are not ended by a semicolon, but instead will often by followed by a curly brace block enclosing some computation.

For loops, Function definitions, etc.

Function - a generalizable piece of code that performs a useful function, which can hence be called on in future to perform that same function

Vector:
Declaration<type> name = {e,l,e,m,e,n,t,s};
Declaration<type> name(X) *where X is the number of elements. This will create a vector of X length with no elements* 








