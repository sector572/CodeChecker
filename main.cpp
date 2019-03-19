#include <iostream>
#include <cstdlib>
#include "test1.h"
using namespace std;


int main() {
	mem_multiple_free(); // Ошибка двойного освобождения памяти
	return 0;
}