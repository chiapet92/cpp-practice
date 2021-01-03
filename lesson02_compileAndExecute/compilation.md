## Compilation
Programming languages are separated into 2 types:
- Pre-compiled code (C++, Java)
- Just-in-time compiled code (Python, JS)

Compiling creates binary (non-human readable) files that can be shared without sharing source code. The binary files can generally run as long as the architecture requirements are satisfied. 


## Object Files
Object file are created from `.cpp` files. They describe their own APIs and references that needs to be resolve with other object files. 

## Linking
- linking is the process of creating an executable by effectively combining object files. During the linking, the `linker` resolves symbolic references between object files and outputs a self-contained library with all necessary machine code. 

Most OS allow dynamic linking, which symbolic references point to libraries that are not compiled into the resulting binary. 

Pro: overall size of the package is lower
Con: version bumps of dependencies may break code


## Working with terminal
show cpp compiler help menu
```
$ g++ -help
```

list files in directory
```
$ ls
```

show path directory
```
$ pwd
```

