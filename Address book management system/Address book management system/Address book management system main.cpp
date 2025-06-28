#include "Address book management system.h"

int main() {
    cout << "欢迎使用御风工作室教程" << endl;

    // 创建通讯录
    Addressbooks abs;
    abs.personArray = new Person[MAX];
    abs.m_Size = 0;

    int select = 0;
    while (true) {
        showMenu();
        // 输入验证循环
        cout << "请输入您的选择（0-6）：";
        while (!(cin >> select)) {
            cout << "请输入有效的数字选项：" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        // 清除输入缓冲区中的换行符
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (select) {
        case 1: // 添加联系人
            addPerson(&abs);
            break;
        case 2: // 显示联系人
            showPerson(&abs);
            break;
        case 3: // 删除联系人
            deletePerson(&abs);
            break;
        case 4: // 查找联系人
            findPerson(&abs);
            break;
        case 5: // 修改联系人
            modifyPerson(&abs);
            break;
        case 6: // 清空联系人
            cleanPerson(&abs);
            break;
        case 0: // 退出通讯录
            cout << "欢迎下次使用御风工作室通讯录" << endl;
            delete[] abs.personArray; // 释放内存
            system("pause");
            return 0;
        default:
            cout << "无效输入，请重新选择" << endl;
            break;
        }
    }
}