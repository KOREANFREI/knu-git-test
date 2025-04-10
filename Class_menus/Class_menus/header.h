#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <string>
using namespace std;

// 고객 클래스
class Clients {
    string id;
    string name;
    string address;
    string tel;
    bool gender;

public:
    Clients();
    void insertClient(string newId, string newName, string newTel, string newAddress, bool newGender);
    void displayClient();  // 고객 정보 전체 출력
    void displayName();    // 고객 이름만 출력
    string getId();
};

// 고객 관리 클래스 (동적 배열)
class ClientManager {
    Clients* clients;
    int maxSize;
    int currentSize;

public:
    ClientManager(int size);
    ~ClientManager();
    void addClient(string id, string name, string tel, string address, bool gender);
    void deleteClient(string id);
    void displayAllClients();  // 전체 고객 정보 출력
    void listAllClientNames(); // 고객 이름만 출력
};

// 메뉴 클래스
class Menus {
public:
    Menus();
    int displayMenu();
    void showReference();
};

// 유틸리티 함수
bool getGenderInput(const string& prompt);
int getValidNumber(const string& prompt);

#endif
