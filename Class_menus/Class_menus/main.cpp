#include "header.h"

int main() {
    // 초기 설정: 동적 할당 크기 입력
    int clientCount = getValidNumber("저장할 최대 고객 수를 입력하세요: ");
    ClientManager manager(clientCount);
    Menus menu;

    while (true) {
        int choice = menu.displayMenu();

        switch (choice) {
        case 1: {  // 고객 추가
            string id, name, tel, address;
            cout << "\n[고객 추가]" << endl;
            cout << "ID: "; getline(cin, id);
            cout << "이름: "; getline(cin, name);
            cout << "전화번호: "; getline(cin, tel);
            cout << "주소: "; getline(cin, address);
            bool gender = getGenderInput("성별 (남성=yes, 여성=no): ");
            manager.addClient(id, name, tel, address, gender);
            cout << "고객 추가 완료!" << endl;
            break;
        }

        case 2: {  // 고객 삭제
            string id;
            cout << "\n삭제할 고객 ID를 입력하세요: ";
            getline(cin, id);
            manager.deleteClient(id);
            break;
        }

        case 3: {  // 전체 고객 정보 출력
            cout << "\n[전체 고객 정보]" << endl;
            manager.displayAllClients();
            break;
        }

        case 4: {  // 고객 이름 목록 출력
            cout << "\n[고객 이름 목록]" << endl;
            manager.listAllClientNames();
            break;
        }

        case 5: {  // 참조 정보 출력
            menu.showReference();
            break;
        }

        case 6: {  // 프로그램 종료
            cout << "\n프로그램을 종료합니다." << endl;
            return 0;

        default:
            cout << "[Error] 잘못된 선택입니다! 1~6 사이의 숫자를 입력하세요." << endl;
        }
        }
    }
}