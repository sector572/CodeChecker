#include <iostream>
#include <cstdlib>
#include "test1.h"
#include "test2.h"
using namespace std;


int main() {
	mem_multiple_free(); // Ошибка двойного освобождения памяти
	test_buffer_index(); // Пример ошибки с межпроцедурным вычислением индекса
	return 0;
}