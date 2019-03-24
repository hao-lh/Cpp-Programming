GDB operates on executable files.

The line of code that is about to execute but hasn't yet.

* Basics
  * Debug program with GDB: `gdb {program --args arg1 arg2 ...}`
  * Run the program: `run [r] {arg1 arg2 ...}`
  * Quit GDB debugging: `quit {q}`
  * Restart GDB debugging `kill`
    * Don't use `r`, it would run the program from begging, but would not restore state to its initial.
* Execution
  * Go to next line of code: `next [n] {num}`
  * step into: `step [s] {num}`
  * step out: `finish`
  * Execute from current line up to next breakpoint or until program terminates: `continue [c]`
  * Run to line: `until [u] {num}`
* Breakpoints
  - set: `break [b] {func/file:num}`
  - list all breakpoints: `info breakpoints[b]`
  - delete a breakpoint: `delete $num`
  - Disable all breakpoints: `disable`
  - set a temporary breakpoint: `tbreak`
* View code
  * List source code around current or specific line: `list [l] {num}`
  * Show the next statement to be executed: `where`
  * Print variable: `print [p] {var}`
  * When hitting `Enter` without typing anything, GDB will repeat its previous command
* View stack
  * Show callstack: `backtrace`
  * change stack frames: `frame num`
  * displays information about the current stack frame: `info frame`
  * displays the list of local variables and their values for the current stack frame: `info locals`
  * displays the list of arguments: `info args`
* Inspect variable
  * Print array content: `p *array@len`
  * Print multiple variable at the same line: `p {var1, var2, var3, ...}`
  * Print with format: `printf "printf format string", arg1, arg2, arg3, ..., argn`
  * watchpoint: `watch var`
    * var should be in current scope, otherwise breakpoint is necessary
* Modify variables (without leveing GDB)
  - `p var=value`
  - `set var=value`


* Reference
  * [Codesign gdb on Mac OS X Yosemite (10.10.2)](http://andresabino.com/2015/04/14/codesign-gdb-on-mac-os-x-yosemite-10-10-2/)
  * [Introduction to GDB a tutorial - Harvard CS50](https://www.youtube.com/watch?v=sCtY--xRUyI)
  * [RMS's gdb Debugger Tutorial](http://www.unknownroad.com/rtfm/gdbtut/)