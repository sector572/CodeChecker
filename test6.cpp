#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;


// Тест на проверку к путям выполнения. Не должен вызывать ошибок.
// Если файл открывается, он всегда закрывается.

void work_with_file(int condition){
	ofstream myfile;
	int flag;
	if(condition){
		myfile.open ("example.txt");
		flag = 1;
	} else {
		flag = 0;
	}

	if(flag){
		myfile.close();
	}
}


void test_path_sensitive_witout_errors(){
	int v1 = rand() % 1000;
	work_with_file(v1);
}