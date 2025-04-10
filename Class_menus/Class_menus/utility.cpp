#include "header.h"

// 성별 입력 함수
bool getGenderInput(const string& prompt) {
    string input;

    while (true) {
        cout << prompt;
        getline(cin, input);

        if (input == "yes") return true;   // 남성
        if (input == "no") return false;  // 여성

        cout << "[Error] 'yes' 또는 'no'를 입력하세요." << endl;
    }
}

// 숫자 검증 함수
int getValidNumber(const string& prompt) {
    int num;

    while (true) {
        cout << prompt;

        cin >> num;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "[Error] 숫자를 입력하세요!" << endl;
        }
        return num;
    }
}


