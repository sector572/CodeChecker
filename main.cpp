#include <iostream>
#include <cstdlib>
#include "test1.h"
#include "test2.h"
#include "test3.h"
#include "test4.h"
#include "test5.h"
#include "test6.h"
#include "test7.h"

 using namespace std;


int main(int argc, char*argv[]) {
	cout << "Start program" << endl;
	
	if(argv[1]){
		int vflag_file = atoi(argv[1]);

		if (vflag_file == 1 || vflag_file == 888){
			cout << "Проверка: Ошибка двойного освобождения памяти. Должна быть ошибка" << endl;
			mem_multiple_free();
		}

		if (vflag_file == 2 || vflag_file == 888){
			cout << "Проверка: Ошибка с межпроцедурным вычислением индекса. Должна быть ошибка" << endl;
			test_buffer_index();
		}

		if (vflag_file == 3 || vflag_file == 888){
			cout << "Проверка: Ошибка разыменование нулевого указателя. Предупреждение о недостижимости кода" << endl;
			test_null_pointer_dereference_warning();
		}

		if (vflag_file == 4 || vflag_file == 888){
			cout << "Проверка: Ошибка разыменование нулевого указателя. Должна быть ошибка" << endl;
			test_null_pointer_dereference();
		}

		if (vflag_file == 5 || vflag_file == 888){
			cout << "Проверка: Ошибка обращения через указатель к удаленной переменной. Должна быть ошибка" << endl;
			test_pointer_to_null();
		}

		if (vflag_file == 6 || vflag_file == 888){
			cout << "Проверка: На чувствительность к путям выполнения. Код без ошибок" << endl;
			test_ps_no_errors1();
		}

		if (vflag_file == 7 || vflag_file == 888){
			cout << "Проверка: На чувствительность к путям выполнения. Код без ошибок" << endl;
			test_ps_no_errors2();
		}
	}
	
	cout << "End program" << endl;
	return 0;
}
