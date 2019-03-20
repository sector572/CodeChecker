#include <iostream>
#include <cstdlib>
#include "test1.h"
#include "test2.h"
#include "test3.h"

using namespace std;


int main() {
	std::cout<<"Start program"<<std::endl;

	std::cout<<"Проверка: Ошибка двойного освобождения памяти."<<std::endl;
	mem_multiple_free(); // Ошибка двойного освобождения памяти

	std::cout<<"Проверка: Ошибка с межпроцедурным вычислением индекса"<<std::endl;
	test_buffer_index(); // Пример ошибки с межпроцедурным вычислением индекса

	std::cout<<"Проверка: Ошибка разыменование нулевого указателя"<<std::endl;
	test_null_pointer_dereference();

	return 0;
}
