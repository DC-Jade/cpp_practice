# cpp_practice

# os_notebook

## Introduction

- This is a cpp learning notebook

- Ref: \

  [Light-City/CPlusPlusThings](https://github.com/Light-City/CPlusPlusThings)\

## Supported

- os

  Ubuntu 16.04 LTS

- compiler

  g++ version 9.4.0

## Start

```bash
git clone git@github.com:DC-Jade/cpp_practice.git
```

## compilation

```bash
g++ -Wall -g -o ../bin <.cpp>
```

## gdb

```bash
g++ -g <src.c>
gdb <object.o>

# common commands
start 					# start at main
starti          		# start at the first machine code 
si              		# run one step by step
layout <asm/src>  		# show src or assembly code
p/print	<var/&var>		# Print value of expression EXP, mostly useful for global vars
bt/backtrace			# Print backtrace of all stack frames
until         			# run loop
break <name>			# Set breakpoint at specified location
info <b/breakpoints>	# print all breakpoints
c/continue				# continue execution until the next breakpoint
select-frame <number> 	# select a frame or function
finish 					# Execute until selected stack frame(function) returns
<Ctr-l>					# clear window

# show information
display <var/&var>		# Print value of expression EXP each time the program stops
info args 				# Argument variables of current stack frame
info breakpoints		# Status of specified breakpoints
info all-registers		# List of all registers and their contents

# help
help <command>  #

# save gdb log into local files
show logging                    # displays weather logging is on / off
set logging on                  # enable logging
set logging off                 # disable logging
set logging file log-file.txt   # set name for log file, default is gdb.txt

# ref
https://ftp.gnu.org/old-gnu/Manuals/gdb/html_chapter/gdb_19.html
```
