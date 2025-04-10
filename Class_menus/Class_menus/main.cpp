#include "header.h"

int main() {
    // �ʱ� ����: ���� �Ҵ� ũ�� �Է�
    int clientCount = getValidNumber("������ �ִ� �� ���� �Է��ϼ���: ");
    ClientManager manager(clientCount);
    Menus menu;

    while (true) {
        int choice = menu.displayMenu();

        switch (choice) {
        case 1: {  // �� �߰�
            string id, name, tel, address;
            cout << "\n[�� �߰�]" << endl;
            cout << "ID: "; getline(cin, id);
            cout << "�̸�: "; getline(cin, name);
            cout << "��ȭ��ȣ: "; getline(cin, tel);
            cout << "�ּ�: "; getline(cin, address);
            bool gender = getGenderInput("���� (����=yes, ����=no): ");
            manager.addClient(id, name, tel, address, gender);
            cout << "�� �߰� �Ϸ�!" << endl;
            break;
        }

        case 2: {  // �� ����
            string id;
            cout << "\n������ �� ID�� �Է��ϼ���: ";
            getline(cin, id);
            manager.deleteClient(id);
            break;
        }

        case 3: {  // ��ü �� ���� ���
            cout << "\n[��ü �� ����]" << endl;
            manager.displayAllClients();
            break;
        }

        case 4: {  // �� �̸� ��� ���
            cout << "\n[�� �̸� ���]" << endl;
            manager.listAllClientNames();
            break;
        }

        case 5: {  // ���� ���� ���
            menu.showReference();
            break;
        }

        case 6: {  // ���α׷� ����
            cout << "\n���α׷��� �����մϴ�." << endl;
            return 0;

        default:
            cout << "[Error] �߸��� �����Դϴ�! 1~6 ������ ���ڸ� �Է��ϼ���." << endl;
        }
        }
    }
}