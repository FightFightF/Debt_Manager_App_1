#include "HelpWindow.h"

void ShowHelpWindow() {
    DebtManagerApp::HelpWindow^ helpWindowForm = gcnew DebtManagerApp::HelpWindow();
    helpWindowForm->Show();
}
