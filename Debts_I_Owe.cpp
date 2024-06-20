#include "DebtsIOwe.h"

void ShowDebtsIOweScreen() {
    DebtManagerApp::DebtsIOwe^ debtsIOweForm = gcnew DebtManagerApp::DebtsIOwe();
    debtsIOweForm->Show();
}
