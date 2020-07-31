#include <stdio.h>
#include <iostream>
#include <string.h>
#include "point_voidStyle.h"


#define _HelloWorld		\
do{		\
		printf("Hello! ");	\
} while(0)
#define max(x, y) ({					\
		typeof(x)	_max1 = (x);		\
		typeof(y)	_max2 = (y);		\
		(void) (&_max1 == &max2);		\
		_max1 > _max2 ? _max1 : _max2; })
typedef struct LinkedList {
#ifndef _key_void
	#define _key_void
	#define	key_point 
			unsigned char **	key_data
#else 
#define _key_int	\
	({	int data;	\
		std::cout<<"key_pointStyle is int *	."<<std::endl;	\
	})
#endif // !1
	key_point;
	struct LinkedList *  next;
} *node;
typedef int (*fn_point)(int);
fn_point fun_point(void);

int put_voidPoint(int n)
{
	unsigned char ** test_cp;
	test_cp = new (unsigned char *	);
	//int n = 0xAD;
	*test_cp = (unsigned char *)((void*)(& n));
	std::cout<<*test_cp <<"\n"	\
			<<"add_num"<<& n<<"\n"	\
			<<"num"<< n<<"\n"	\
			<<*((int *)((void *)(*test_cp)))<<" num "<<std::endl;
	delete test_cp;
	return 1;
}
int (* thread_list_1)(int) = &put_voidPoint;
int main()
{
	_HelloWorld;
	fn_point fp;
	(fp = fun_point())(12);
	printf("%4p", thread_list_1);
	std::cout << "\n"<<fp<<std::endl;
	return 1;
}


fn_point fun_point(void)
{
	return thread_list_1;
}