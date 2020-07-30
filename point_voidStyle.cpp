#include <stdio.h>
#include <iostream>
#include <string.h>


#define _helloWorld	\
({	std::cout<<"Hello !"<<std::endl; \
	})

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
	thread_list_1(6);
	return 1;
}