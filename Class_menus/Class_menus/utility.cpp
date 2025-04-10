#include "header.h"

// ���� �Է� �Լ�
bool getGenderInput(const string& prompt) {
    string input;

    while (true) {
        cout << prompt;
        getline(cin, input);

        if (input == "yes") return true;   // ����
        if (input == "no") return false;  // ����

        cout << "[Error] 'yes' �Ǵ� 'no'�� �Է��ϼ���." << endl;
    }
}

// ���� ���� �Լ�
int getValidNumber(const string& prompt) {
    int num;

    while (true) {
        cout << prompt;

        cin >> num;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "[Error] ���ڸ� �Է��ϼ���!" << endl;
        }
        return num;
    }
}


