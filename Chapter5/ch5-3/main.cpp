#include <iostream>
using namespace std;

class Clients {
    int id;              // �� ID
    string name;         // �� �̸�
    string address;      // �� �ּ�
    string tel;          // �� ��ȭ��ȣ

public:
    Clients();           // ������ ����
    void insertClient(int newId, string newName, string newTel, string newAddress);  // �� ���� ���� �Լ�
    void displayClient();                                                          // �� ���� ��� �Լ�
};

Clients::Clients() {}

// �� ������ �����ϴ� �Լ� ����
void Clients::insertClient(int newId, string newName, string newTel, string newAddress) {
    this->id = newId;
    this->name = newName;
    this->tel = newTel;
    this->address = newAddress;
}

// �� ������ ����ϴ� �Լ� ����
void Clients::displayClient() {
    cout << "client id; " << id << ", name: " << name;
    cout << "client tel; " << tel << ", address; " << address << endl;
}

int main() {
    const int maxnumClient = 2;  // �ִ� ���� ������ �� �� ���� (2��)

    Clients client[maxnumClient];  // Clients ��ü �迭 ����

    int id;
    string name, tel, address;

    for (int i = 0; i < maxnumClient; i++) {
        // �� ���� ������ ����ڷκ��� �Է¹���
        cout << "plz input id; ";
        cin >> id;
        cout << "plz input name; ";
        cin >> name;
        cout << "plz input tel; ";
        cin >> tel;
        cout << "plz input address; ";
        cin >> address;

        client[i].insertClient(id, name, tel, address);  // �Է¹��� ������ �迭�� ����
    }

    cout << "\n ------ hello, client display ------ \n";

    for (int i = 0; i < maxnumClient; i++) {
        client[i].displayClient();  // ����� ��� �� ���� ���
    }

    return 0;
}

