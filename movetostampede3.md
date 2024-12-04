# Moving from isp03 to Stampede3

The compiler on the class machine we've been using, `isp03.tacc.utexas.edu` is broken. 

If you've tried to compile anything lately, you've seen errors like: 

```
icpx whatever.cpp
[slindsey@isp03 ~]$ <1002> icpx whatever.cpp
whatever.cpp:11:10: fatal error: 'iostream' file not found
   11 | #include <iostream>
      |          ^~~~~~~~~~
1 error generated.
```

You will need to move your code development to a different machine, `stampede3.tacc.utexas.edu`.  

In the examples below I'm using my own TACCusername: `slindsey`  and GitHubusername: `susanunit`.  Obvi, substitute your respective usernames. 

* login to Stampede3

	`localhost$ ssh -l slindsey stampede3.tacc.utexas.edu`

* generate new SSH keys on Stampede3 with `ssh keygen`, then [add the newly generated public key to your GitHub account](https://docs.github.com/en/authentication/connecting-to-github-with-ssh/adding-a-new-ssh-key-to-your-github-account?tool=webui).


* on Stampede3, clone your Git repo and continue development

	`git clone git@github.com:susanunit/coe322-slindsey.git`


Reminders:

* Your projects must compile and execute, with an effective `CMakeLists.txt` file, on Stampede3.
*  





	

