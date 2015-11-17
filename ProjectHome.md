Lightweight object-oriented C++ wrapper for pthreads.

This is not an abstraction layer for writing multithreaded apps, based on pthreads. Other libs are quite good at it (Boost.thread to name some). This library just allows using pthreads compatible implementation in C++ native manner, using OOP, templates, namespaces, and so on. The understanding of pthreads is still essential.

When creating this library, the following goals were set:

1) Portability - uses only standard features of C++ and pthreads

2) User-friendliness - the program should be esaily readable (no pointers and cryptic functions)

3) Takes care of resource deallocation (RAII and other)

4) Lightweight - resides in headers (hopefully one) only. Add it to the project, and you are done!