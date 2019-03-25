#include <iostream>
#include <cstdlib>
#include "test1.h"
#include "test2.h"
#include "test3.h"
#include "test4.h"

 using namespace std;


int main() {
	cout << "Start program" << endl;

	cout << "Проверка: Ошибка двойного освобождения памяти. Должна быть ошибка" << endl;
	mem_multiple_free();

	cout << "Проверка: Ошибка с межпроцедурным вычислением индекса. Должна быть ошибка" << endl;
	test_buffer_index();

	cout << "Проверка: Ошибка разыменование нулевого указателя. Предупреждение о недостижимости кода" << endl;
	test_null_pointer_dereference_warning();

	cout << "Проверка: Ошибка разыменование нулевого указателя. Должна быть ошибка" << endl;
	test_null_pointer_dereference();

	cout << "End program" << endl;
	return 0;
}
