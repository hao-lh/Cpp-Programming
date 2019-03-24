It is easy to write pieces of programs, build it, followed by execution.

`vim hello_world.cpp`

```c++
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    cout << "hello world" << endl;
  	return 0;
}
```

Save the soruce code with `:wq`, which means write and quite.

Next, we need to compile the source code, which roughly consists of following step:

| Step | Action        | Description                                 | Result                       | Command |
| :--: | :------------ | :------------------------------------------ | ---------------------------- | ------- |
|  1   | Preprocessing | Header/macro expansions                     | Expanded text files (*.i)    | **cpp** |
|  2   | Compilation   | Translate into assembly-language program    | Assembly text file (*.s)     | **ccl** |
|  3   | Assemble      | Translate into machine language intructions | Relocable object file (*.o)  | **as**  |
|  4   | Linking       | Merge relocatables into executable files    | Executable file (*/*.so/*.a) | **ld**  |

We would use GCC in this tutorial to show how source file is built from the scratch.

First, let's check compiler version.

`g++ --version`

On macOS El Captain 10.11.6, it would give following result:

> Configured with: --prefix=/Applications/Xcode.app/Contents/Developer/usr --with-gxx-include-dir=/usr/include/c++/4.2.1
>
> Apple LLVM version 8.0.0 (clang-800.0.42.1)
>
> Target: x86_64-apple-darwin15.6.0
>
> Thread model: posix
>
> InstalledDir: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin

`cpp hello_world.cpp > hello_world.i`

`gcc -S hello_world.i`

`as hello_world.s -o hello_world.o`

`ld hello_world.o hello_world`





However, when programs get larger and larger, and in order to make it maintainable, special attention need to be paid to program structure despite program itself, e.g.:

* Refactoring code which are frequently used to reduce redundancy
* Isolate code according to logic and cluster the similar ones into modules
* Even, we need to seperate code into different source code files



* Reference
  * [Introduction to CMake by Example](http://derekmolloy.ie/hello-world-introductions-to-cmake)
  * [GCC and Make Compiling, Linking and Building C/C++ Applications](http://www3.ntu.edu.sg/home/ehchua/programming/cpp/gcc_make.html)
