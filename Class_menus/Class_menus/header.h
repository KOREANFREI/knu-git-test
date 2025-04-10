#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <string>
using namespace std;

// �� Ŭ����
class Clients {
    string id;
    string name;
    string address;
    string tel;
    bool gender;

public:
    Clients();
    void insertClient(string newId, string newName, string newTel, string newAddress, bool newGender);
    void displayClient();  // �� ���� ��ü ���
    void displayName();    // �� �̸��� ���
    string getId();
};

// �� ���� Ŭ���� (���� �迭)
class ClientManager {
    Clients* clients;
    int maxSize;
    int currentSize;

public:
    ClientManager(int size);
    ~ClientManager();
    void addClient(string id, string name, string tel, string address, bool gender);
    void deleteClient(string id);
    void displayAllClients();  // ��ü �� ���� ���
    void listAllClientNames(); // �� �̸��� ���
};

// �޴� Ŭ����
class Menus {
public:
    Menus();
    int displayMenu();
    void showReference();
};

// ��ƿ��Ƽ �Լ�
bool getGenderInput(const string& prompt);
int getValidNumber(const string& prompt);

#endif
