Today in Class September 21, 2023

## Today in Class 

* The professor concluded discussing [Lambda Functions](https://github.com/TACC/coe322fall2023/blob/main/lectures/Lambda%20functions.pdf). You will not need to use any of the advanced topics in HW6.
* Learned how to integrating external software libraries into our code, and how to parse command-line arguments using the `cxxopts` library. See [Software libraries:cxxopts](https://github.com/TACC/coe322fall2023/blob/main/lectures/Libraries%20-%20commandline%20options.pdf) in the class respository.
* Keep up with the corresponding reading in the [class textbook](https://github.com/TACC/coe322fall2023/blob/main/EijkhoutIntroSciProgramming-book.pdf).  Download and view the book on your local computer.

	* Chapter 13. Lambda expressions
	* Chapter 63. External libraries

## Homework 6

**Homework 6 is Exercises 4 and 5 in the Lambda Functions slide deck. Integrate the `cxxopts` library so that your program accept commandline arguments. HW6 is due by Wednesday, September 27th, 11:59pm.**

Use the cxxopts library to let your program accept commandline arguments: after compiling your program, it should be callable as

	./yournewtonprogram -v 3.14

and print out the square root of 3.14 in response. You can print out trace information, but the last line should contain the value.

To load the `cxxopts` library on the ISP machine:

```
module load intel/23
module load cxxopts
```

Use the `CMakeLists.txt` file from `skeletons/cxxopts` subdirectory in the class repository.


**Windows users**: We are working on getting VSCode instructions for you.  In the meantime you can develop your code on the ISP machine, rather than your local machine. 

## General Homework Instructions

**Incorporate a "`CMakeLists.txt`" file in your homework directory, so that `cmake`/`make` commands (as demonstrated in class) will compile and build your code.**
* Your code must compile and execute without errors on the ISP machine using the `icpc` compiler.  
* Comment your code.
* Do NOT upload executable files to your personal repo, e.g. "`a.out`".
* It is always better to submit a homework late than to not submit it at all.

### Teamwork

We encourage you to communicate and collaborate with your fellow students using the Slack channel "#2023-coe-general".  You may work in teams of up to three people.  If you are working in a team:

* Make a **single** homework submission per team.
* Include each team member's name and EID at the top of each source code file.
* If your team would like a private Slack channel, contact the instructors.

## Notes

* Be sure to regularly update your copy of the class repository with the "`git pull`" command.
* Homework will be due on Mondays and/or Wednesdays at midnight.  Automatic scripts will collect your homework from the appropriate subdirectory.  It is your responsibility to ensure the instructors and the TA have access to your personal class GitHub repository.


## Class Logistics

**Class computer**: `isp.tacc.utexas.edu`
**Recorded Zoom Sessions**: <https://utexas.instructure.com/courses/1344113/external_tools/92539>
**Class materials**: GitHub: <https://github.com/TACC/coe322fall2023>

