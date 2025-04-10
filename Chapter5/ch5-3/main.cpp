#include <iostream>
using namespace std;

class Clients {
    int id;              // 고객 ID
    string name;         // 고객 이름
    string address;      // 고객 주소
    string tel;          // 고객 전화번호

public:
    Clients();           // 생성자 선언
    void insertClient(int newId, string newName, string newTel, string newAddress);  // 고객 정보 삽입 함수
    void displayClient();                                                          // 고객 정보 출력 함수
};

Clients::Clients() {}

// 고객 정보를 삽입하는 함수 정의
void Clients::insertClient(int newId, string newName, string newTel, string newAddress) {
    this->id = newId;
    this->name = newName;
    this->tel = newTel;
    this->address = newAddress;
}

// 고객 정보를 출력하는 함수 정의
void Clients::displayClient() {
    cout << "client id; " << id << ", name: " << name;
    cout << "client tel; " << tel << ", address; " << address << endl;
}

int main() {
    const int maxnumClient = 2;  // 최대 저장 가능한 고객 수 설정 (2명)

    Clients client[maxnumClient];  // Clients 객체 배열 생성

    int id;
    string name, tel, address;

    for (int i = 0; i < maxnumClient; i++) {
        // 각 고객의 정보를 사용자로부터 입력받음
        cout << "plz input id; ";
        cin >> id;
        cout << "plz input name; ";
        cin >> name;
        cout << "plz input tel; ";
        cin >> tel;
        cout << "plz input address; ";
        cin >> address;

        client[i].insertClient(id, name, tel, address);  // 입력받은 정보를 배열에 저장
    }

    cout << "\n ------ hello, client display ------ \n";

    for (int i = 0; i < maxnumClient; i++) {
        client[i].displayClient();  // 저장된 모든 고객 정보 출력
    }

    return 0;
}

