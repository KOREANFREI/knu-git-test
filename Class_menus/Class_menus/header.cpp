#include "header.h"
#include <limits>

// Clients Ŭ���� ����
Clients::Clients() : id(""), name(""), address(""), tel(""), gender(false) {}

void Clients::insertClient(string newId, string newName, string newTel, string newAddress, bool newGender) {
    id = newId;
    name = newName;
    tel = newTel;
    address = newAddress;
    gender = newGender;
}

void Clients::displayClient() {
    cout << "ID: " << id
        << ", Name: " << name
        << ", Tel: " << tel
        << ", Address: " << address
        << ", Gender: " << (gender ? "Male" : "Female") << endl;
}

void Clients::displayName() {
    cout << "Name: " << name << endl;  // �̸��� ���
}

string Clients::getId() { return id; }

// ClientManager Ŭ���� ����
ClientManager::ClientManager(int size) : maxSize(size), currentSize(0) {
    clients = new Clients[maxSize];
}

ClientManager::~ClientManager() {
    delete[] clients;
}

void ClientManager::addClient(string id, string name, string tel, string address, bool gender) {
    if (currentSize >= maxSize) {
        cout << "Error: ���� ������ ���� á���ϴ�!" << endl;
        return;
    }
    clients[currentSize++].insertClient(id, name, tel, address, gender);
}

void ClientManager::deleteClient(string id) {
    int index = -1;
    for (int i = 0; i < currentSize; i++) {
        if (clients[i].getId() == id) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        cout << "Error: �ش� ID�� ���� �����ϴ�!" << endl;
        return;
    }
    for (int i = index; i < currentSize - 1; i++) {
        clients[i] = clients[i + 1];
    }
    currentSize--;
}

void ClientManager::displayAllClients() {
    if (currentSize == 0) {
        cout << "����� ���� �����ϴ�." << endl;
        return;
    }
    for (int i = 0; i < currentSize; i++) {
        clients[i].displayClient();
    }
}

void ClientManager::listAllClientNames() {
    if (currentSize == 0) {
        cout << "����� ���� �����ϴ�." << endl;
        return;
    }
    for (int i = 0; i < currentSize; i++) {
        clients[i].displayName();
    }
}

// Menus Ŭ���� ����
Menus::Menus() {}

int Menus::displayMenu() {
    int choice = 0;

    cout << "\n======= �޴� =======" << endl;
    cout << "1. �� �߰�" << endl;
    cout << "2. �� ����" << endl;
    cout << "3. ��ü �� ���� ���" << endl;   // display clients
    cout << "4. �� �̸� ��� ���" << endl;   // list clients
    cout << "5. ���� ����" << endl;             // reference
    cout << "6. ����" << endl;                  // exit
    cout << "====================" << endl;

    cout << "���� (1-6): ";

    if (!(cin >> choice)) {  // ���ڰ� �ƴ� �Է� ó��
        cin.clear();
        choice = 0;         // �߸��� �Է��� ��� �ʱ�ȭ
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');  // ���� �ʱ�ȭ

    return choice;
}

void Menus::showReference() {
    cout << "\n[�ý��� ����]" << endl;
    cout << "������: ȫ�浿" << endl;
    cout << "����: 2.0 (���� �Ҵ� �� �پ��� ��� ����)" << endl;
}
