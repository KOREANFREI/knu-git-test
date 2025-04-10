#include "header.h"
#include <limits>

// Clients 클래스 구현
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
    cout << "Name: " << name << endl;  // 이름만 출력
}

string Clients::getId() { return id; }

// ClientManager 클래스 구현
ClientManager::ClientManager(int size) : maxSize(size), currentSize(0) {
    clients = new Clients[maxSize];
}

ClientManager::~ClientManager() {
    delete[] clients;
}

void ClientManager::addClient(string id, string name, string tel, string address, bool gender) {
    if (currentSize >= maxSize) {
        cout << "Error: 저장 공간이 가득 찼습니다!" << endl;
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
        cout << "Error: 해당 ID의 고객이 없습니다!" << endl;
        return;
    }
    for (int i = index; i < currentSize - 1; i++) {
        clients[i] = clients[i + 1];
    }
    currentSize--;
}

void ClientManager::displayAllClients() {
    if (currentSize == 0) {
        cout << "출력할 고객이 없습니다." << endl;
        return;
    }
    for (int i = 0; i < currentSize; i++) {
        clients[i].displayClient();
    }
}

void ClientManager::listAllClientNames() {
    if (currentSize == 0) {
        cout << "출력할 고객이 없습니다." << endl;
        return;
    }
    for (int i = 0; i < currentSize; i++) {
        clients[i].displayName();
    }
}

// Menus 클래스 구현
Menus::Menus() {}

int Menus::displayMenu() {
    int choice = 0;

    cout << "\n======= 메뉴 =======" << endl;
    cout << "1. 고객 추가" << endl;
    cout << "2. 고객 삭제" << endl;
    cout << "3. 전체 고객 정보 출력" << endl;   // display clients
    cout << "4. 고객 이름 목록 출력" << endl;   // list clients
    cout << "5. 참조 정보" << endl;             // reference
    cout << "6. 종료" << endl;                  // exit
    cout << "====================" << endl;

    cout << "선택 (1-6): ";

    if (!(cin >> choice)) {  // 숫자가 아닌 입력 처리
        cin.clear();
        choice = 0;         // 잘못된 입력일 경우 초기화
    }
    cin.ignore(numeric_limits<streamsize>::max(), '\n');  // 버퍼 초기화

    return choice;
}

void Menus::showReference() {
    cout << "\n[시스템 정보]" << endl;
    cout << "개발자: 홍길동" << endl;
    cout << "버전: 2.0 (동적 할당 및 다양한 출력 지원)" << endl;
}
