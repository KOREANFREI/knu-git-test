/*���� ����
�ұԸ� ������Ʈ�� ����
�Լ��� ������ ���� �����
 �Լ� �̿�;

 �⺻ �ڷ��� ����;
 int, float, char, string
 �Լ��� �����Ͱ� ������ ������
 �Լ��� ������� ����

 ���α׷��� ���⵵�� �����ϸ鼭 ���������� ���߿� ������� ������ */
 /*��ü ����
  ��Ը� ������Ʈ�� ����
  ������ �Լ��� Ŭ������ ����; �Լ��� ���Ƶ�, ���� ���� �� ���� ����
  Ŭ����, ��ü �̿�;
  �⺻ �ڷ��� ���� + ����� ���� ����

  ���� �Լ���� �پ��� �����Ͱ�, ��ü�ȿ� �Բ� ������;
  ��ü���� ������� Ȥ�� ��ȣ�ۿ��� �ϸ鼭 ����;
  �پ��� ��Ȳ�� ���� �𵨸� �����ϰ� �پ��� ���� �ذ� ����
  ū �Ը��� ����Ʈ ���� ���� ����
  ������ ���� ���꼺 ���
  �Ǽ��蹮���� �𵨸� �ϴµ� ����*/

#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	double getArea();
};

double Circle::getArea() {
	return 3.14 * radius * radius;
}

int main() {
	Circle donut;
	donut.radius = 1;
	double area = donut.getArea();
	cout << "donut ������" << area << endl;

	Circle pizza;
	pizza.radius = 30;
	double area = pizza.getArea();
	cout << "pizza ������" << area << endl;
}