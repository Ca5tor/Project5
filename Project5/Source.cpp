#include <iostream>
#include <vector>

using namespace std;
typedef vector<double> dVector;

dVector Get_dY(dVector v, int n) { // �������� ������ Y
	dVector var(n);

	for (int i = 0; i < n; i++) var[i] = abs(v[i] - v[i + 1]);
	return var;
}

void Set_V(dVector v) { // ������� �������� 
	for (int i = 0; i < v.size(); i++) cout << v[i] << "\t";
}

void main() {
	setlocale(0, "");

	double x = 0.21;
	vector<double> X{ 0.2, 0.25, 0.3, 0.35 };
	vector<double> Y{ -4.024, -3.95, -3.861, -3.7555 };

	// ����������� �������� ������ Y � ������
	vector<double> dY = Get_dY(Y, 3);
	vector<double> ddY = Get_dY(dY, 2);
	vector<double> dddY = Get_dY(ddY, 1);

	// ������� ��������  � ���������� ����
	cout << "\nX=\t"; Set_V(X);
	cout << "\nY=\t"; Set_V(Y);
	cout << "\ndy=\t"; Set_V(dY);
	cout << endl << "ddy=\t"; Set_V(ddY);
	cout << endl << "dddy=\t"; Set_V(dddY); cout << endl;

	double P1 = (1.48 * x) - 4.32;
	double P2 = (3. * pow(x, 2)) + (0.13 * x) - 4.17;
	double P3 = (2 * pow(x, 3)) + (1.5 * pow(x, 2)) + (0.5 * x) - 4.2;

	cout << "\n\t���������� ����������: \n";
	cout << "�������� 1-� �������: " << P1 << "\t�����������:  " << abs(P1 - P2) << endl;
	cout << "�������� 2-� �������: " << P2 << "\t�����������:  " << abs(P2 - P3) << endl;
	cout << "�������� 3-� �������: " << P3 << endl;

	system("pause");
}
