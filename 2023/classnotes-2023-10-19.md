Today in Class October 19, 2023

## Today in Class 

* Today the professor covered [Separate Compilation](https://github.com/TACC/coe322fall2023/blob/main/lectures/Separate%20compilation.pdf): structuring your files to maximize code re-use, and combining any number of files into one executable.  See the [funct_skeleton](https://github.com/TACC/coe322fall2023/tree/main/skeletons/funct_skeleton) sub-directory which demonstrates these concepts.
* Topics today include: declarations and definitions, header files, `#include` directive, linker functionality., 

## Homework 9 

**Homework 9 is Exercises 5-10 in the [Shared Pointers](https://github.com/TACC/coe322fall2023/blob/main/lectures/Smart%20Pointers.pdf) slide deck and is due Monday, October 23th 11:59pm.**  

Implement all linked-list functionality in Exercises 5-10.  

Build off of the skeleton code `linkshared_partial.cpp` or `linkshared-cpp` in the [skeletons](https://github.com/TACC/coe322fall2023/tree/main/skeletons) subdirectory of the class repo.

Most of the skeleton code has been de-activated with bracketed "`#if 0 ..... #endif`" directives.  Work section by section, each time adding functionality to your `Insert` routine.

As per today's lecture, your `hw9` solution should be divided into separate compilation components:

* main.c - driver program
* *definitions*.h - contains function defintions
* *implementations*.cpp - contains function implementations
* CMakelists

## Final Projects

Start taking a look at the available programming projects.  See the topics in the [class textbook](https://github.com/TACC/coe322fall2023/blob/main/EijkhoutIntroSciProgramming-book.pdf), Chapters 49 through 54.

* Infectious Disease Simulation (single-person project)
* Google PageRank 
* Redistricting 
* Amazon Delivery Truck Scheduling
* High Performance Linear Algebra
* Great Garbage Patch
* Graph Algorithms

## General Homework Instructions

* **As a general rule, use the C++ language and the methods taught in class in your code; do NOT use old C-style functions and data-types.**
* Incorporate a "`CMakeLists.txt`" file in your homework directory, so that `cmake`/`make` commands (as demonstrated in class) will compile and build your code.
* Your code must compile and execute without errors on the ISP machine using the `icpc` compiler.  
* Comment your code.
* Do NOT upload executable files to your personal repo, e.g. "`a.out`".
* It is always better to submit a homework late than to not submit it at all.

### Teamwork

* We encourage you to communicate and collaborate with your fellow students using the Slack channel "#2023-coe-general".  You may work in teams of up to three people.  If you are working in a team:
* Include each team member's name and EID at the top of each source code file.
* If your team would like a private Slack channel, contact the instructors.

## Notes

* **VSCode users**: See the [instructions for installing external libraries](https://github.com/TACC/coe322fall2023/blob/main/tutorials/VSCode%20and%20libraries.pdf).
* **WSL users**: Always work from within the `bash` shell. Try typing `make` or `cmake`, if those are "unknown command"s, then install with `apt install`.
* Be sure to regularly update your copy of the class repository with the "`git pull`" command.
* Homework will be due on Mondays and/or Wednesdays at midnight.  Automatic scripts will collect your homework from the appropriate subdirectory.  It is your responsibility to ensure the instructors and the TA have access to your personal class GitHub repository.


## Class Logistics

* **Class computer**: `isp.tacc.utexas.edu`
* **Recorded Zoom Sessions**: <https://utexas.instructure.com/courses/1344113/external_tools/92539>
* **Class materials**: GitHub: <https://github.com/TACC/coe322fall2023>

