#include <iostream>

//What does call stack look like when execution is on line 4?

void d()
{ // here
}

void c()
{
}

void b()
{
	c();
	d();
}

void a()
{
	b();
}

int main()
{
	a();

	return 0;
}

/*Answer: (gdb) bt
#0  d () at quiz3.cpp:6
#1  0x0000555555555191 in b () at quiz3.cpp:16
#2  0x00005555555551a1 in a () at quiz3.cpp:21
#3  0x00005555555551b1 in main () at quiz3.cpp:26

Main calls a() which calls b() which calls c() but c() is optimized out then d() is called where the breakpoint hits
*/
