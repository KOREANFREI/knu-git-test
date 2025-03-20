/*절차 지향
소규모 프로젝트에 적합
함수가 많을때 고나리 어려움
 함수 이용;

 기본 자료형 변수;
 int, float, char, string
 함수와 데이터가 별개로 존재함
 함수의 순서대로 실행

 프로그램의 복잡도가 증가하면서 유지보수와 개발에 어려움이 증가함 */
 /*객체 지향
  대규모 프로젝트에 적합
  연관된 함수를 클래스에 모음; 함수가 많아도, 유지 보수 및 관리 용이
  클래스, 객체 이용;
  기본 자료형 변수 + 사용자 정의 변수

  연관 함수들과 다양한 데이터가, 객체안에 함께 존재함;
  객체들이 순서대로 혹은 상호작용을 하면서 실행;
  다양한 상황에 대한 모델링 용이하고 다양한 문제 해결 가능
  큰 규모의 소프트 웨어 관리 요이
  재사용을 통한 생산성 향상
  실세계문제를 모델링 하는데 적합*/

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
	cout << "donut 면적은" << area << endl;

	Circle pizza;
	pizza.radius = 30;
	double area = pizza.getArea();
	cout << "pizza 면적은" << area << endl;
}