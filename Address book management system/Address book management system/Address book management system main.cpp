#include "Address book management system.h"

int main() {
    cout << "��ӭʹ�����繤���ҽ̳�" << endl;

    // ����ͨѶ¼
    Addressbooks abs;
    abs.personArray = new Person[MAX];
    abs.m_Size = 0;

    int select = 0;
    while (true) {
        showMenu();
        // ������֤ѭ��
        cout << "����������ѡ��0-6����";
        while (!(cin >> select)) {
            cout << "��������Ч������ѡ�" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        // ������뻺�����еĻ��з�
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (select) {
        case 1: // �����ϵ��
            addPerson(&abs);
            break;
        case 2: // ��ʾ��ϵ��
            showPerson(&abs);
            break;
        case 3: // ɾ����ϵ��
            deletePerson(&abs);
            break;
        case 4: // ������ϵ��
            findPerson(&abs);
            break;
        case 5: // �޸���ϵ��
            modifyPerson(&abs);
            break;
        case 6: // �����ϵ��
            cleanPerson(&abs);
            break;
        case 0: // �˳�ͨѶ¼
            cout << "��ӭ�´�ʹ�����繤����ͨѶ¼" << endl;
            delete[] abs.personArray; // �ͷ��ڴ�
            system("pause");
            return 0;
        default:
            cout << "��Ч���룬������ѡ��" << endl;
            break;
        }
    }
}