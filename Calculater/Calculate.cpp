#include<iostream>

using namespace std;

int main() {
	int choice;
	Calculator c;
	while (1) {

		system("cls");
		cout << "연산내용을 적으시오( x + y = k ): " << endl;
	
		cout << "C. 초기화" << endl;
		cout << "Q. 종료" << endl;

		switch (choice) {
		case 'C':
			break;
		case 'Q':
			exit(0);
			break;
		}
		system("pause");
	}

}

class Calculator {
public:
	double Cal(double x, char oper, double y) {
		switch (oper) {
		case'+':
			return x + y;
			break;
		case'-':
			return x - y;
			break;
		case'*':
			return x * y; 
			break;
		case'/':
			if (y == 0) {
				cout << "0으로 나눴습니다. 다시 입력" << endl;
			}
			else {
				return x / y;
			}
			break;
		default:
			cout << "잘못된 입력" << endl;
			break;
		}
	}

private:
	double x, y;
	double sum;
	char oper;
};



