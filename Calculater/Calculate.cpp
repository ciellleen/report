#include<iostream>

using namespace std;

int main() {
	int choice;
	Calculator c;
	while (1) {

		system("cls");
		cout << "���곻���� �����ÿ�( x + y = k ): " << endl;
	
		cout << "C. �ʱ�ȭ" << endl;
		cout << "Q. ����" << endl;

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
				cout << "0���� �������ϴ�. �ٽ� �Է�" << endl;
			}
			else {
				return x / y;
			}
			break;
		default:
			cout << "�߸��� �Է�" << endl;
			break;
		}
	}

private:
	double x, y;
	double sum;
	char oper;
};



