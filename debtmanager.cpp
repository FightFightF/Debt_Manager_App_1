#include "DebtManager.h"

void ShowMainScreen() {
    DebtManagerApp::DebtManager^ mainMenu = gcnew DebtManagerApp::DebtManager();
    mainMenu->Show();
}
