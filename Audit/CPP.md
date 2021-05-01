C++
====

C++ 调用 C 接口
----

ubuntu@ubuntu:~/rtos-docs/Audit/cpp_call_c$ size a.out
   text    data     bss     dec     hex filename
   2176     656       8    2840     b18 a.out
ubuntu@ubuntu:~/rtos-docs/Audit/cpp_call_c$ ls -l a.out
-rwxrwxr-x 1 ubuntu ubuntu 8784 Apr 30 14:15 a.out

c语言编写的接口,怎么被C++调用

如果直接调用,声明是没有效果的. 需要用 extern "C" 声明, 用g++ 将C++代码和gcc编译得到的未链接的文件进行整体编译.



-----



