#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int p, k, num, value = 0;
	cout << "������� ���������� ����� � 1 � n-�� ������ � ��������� 2<=p<k<1000" << endl;
	cin >> p >> k;
	if (p<2 || p>k || k >= 1000 || p == k) {
		cout << "���� �� ������������� �������" << endl;
		return 0;
	}
	
	for (int i = p; p <= k; p++) {
		num = p; //���������� ��� �������� � ������� � ������� ����
		while (num!=2) {
			if (num > 2) {
				if (num % 2 == 0) {
					num /= 2;
					if (num == 2) {
						value++;
						break;
					}
					value++;
				}
				else {
					num = (num * 3) + 1;
					value++;
				}
			}
		}
		
	}
	cout << "���������� ����� = " << value << endl;
	return 0;
}