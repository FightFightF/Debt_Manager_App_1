#include "DebtsTheyOwe.h"

void ShowDebtsTheyOweScreen() {
    DebtManagerApp::DebtsTheyOwe^ debtsTheyOweForm = gcnew DebtManagerApp::DebtsTheyOwe();
    debtsTheyOweForm->Show();
}
