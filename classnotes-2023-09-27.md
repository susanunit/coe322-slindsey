This Week in Class September 27, 2023

## This Week in Class 

* This week the professor discussed [Input/Output](https://github.com/TACC/coe322fall2023/blob/main/lectures/Input-output.pdf).  Slides have been updated.
* Demonstrated  how to install the `fmtlib` library in on your local laptop. On ISP it's available: 

	```
	module intel/23 
	module load fmtlib
	```
* Demonstrated workflows using shell scripting.  See the [Unix Tutorial](https://github.com/TACC/coe322fall2023/blob/main/tutorials/unix%20tutorial.pdf) in the class repo.
* Keep up with the corresponding reading, Chapter 41. Input/Output, in the [class textbook](https://github.com/TACC/coe322fall2023/blob/main/EijkhoutIntroSciProgramming-book.pdf).  


## Homework 7

**Homework 7 is Exercise 1 in the Input/Output slide deck. Integrate the `fmtlib` library into your code.  HW7 is due by Wednesday, October 4, 11:59pm.**

Everyone is free to do code developmennt on the ISP machine, rather than your local laptop. 

## General Homework Instructions

* **Incorporate a "`CMakeLists.txt`" file in your homework directory, so that `cmake`/`make` commands (as demonstrated in class) will compile and build your code.**
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

**VSCode users**: See the [instructions for installing external libraries](https://github.com/TACC/coe322fall2023/blob/main/tutorials/VSCode%20and%20libraries.pdf).
**WSL users**: Always work from within the `bash` shell. Try typing `make` or `cmake`, if those are "unknown command"s, then install with `apt install`.
* Be sure to regularly update your copy of the class repository with the "`git pull`" command.
* Homework will be due on Mondays and/or Wednesdays at midnight.  Automatic scripts will collect your homework from the appropriate subdirectory.  It is your responsibility to ensure the instructors and the TA have access to your personal class GitHub repository.


## Class Logistics

**Class computer**: `isp.tacc.utexas.edu`
**Recorded Zoom Sessions**: <https://utexas.instructure.com/courses/1344113/external_tools/92539>
**Class materials**: GitHub: <https://github.com/TACC/coe322fall2023>

