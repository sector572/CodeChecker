#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

// CWE-416: Use After Free

const char *take_pointer(bool cond) {
    std::string s = "Test string";

    if (cond)
        return s.c_str(); // local variable s is destroyed by an automatic destructor at the end of the function
    else
        NULL;
}

 
void test_pointer_to_null(){
	const char *p_s1 = take_pointer(true); //Указатель ссылается на удаленную переменную
	std::string s2(p_s1);

	s2.length();
}