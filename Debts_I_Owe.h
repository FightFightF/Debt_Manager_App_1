#pragma once

void ShowDebtsIOweScreen();
void ShowMainScreen();

namespace DebtManagerApp {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Collections::Generic;

    public ref class DebtsIOwe : public System::Windows::Forms::Form
    {
    public:
        DebtsIOwe(void)
        {
            InitializeComponent();
            Load_exist_debt();
            flowLayoutPanel->AutoScroll = true;
            this->WindowState = FormWindowState::Maximized;
        }
    private: System::Windows::Forms::Button^ add_debt_i;
    private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel;
    private: System::Windows::Forms::Button^ backButton;
    private: System::Windows::Forms::Label^ initialDebtAmountLabel;
    private: System::Windows::Forms::Panel^ panel1;
    private: System::Windows::Forms::Label^ AllDebtsAmount;



    public:

    public:

        static bool isOpen = false;

    protected:
        ~DebtsIOwe()
        {
            if (components)
            {
                delete components;
            }
        }

    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DebtsIOwe::typeid));
            this->add_debt_i = (gcnew System::Windows::Forms::Button());
            this->flowLayoutPanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
            this->backButton = (gcnew System::Windows::Forms::Button());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->AllDebtsAmount = (gcnew System::Windows::Forms::Label());
            this->SuspendLayout();
            // 
            // add_debt_i
            // 
            this->add_debt_i->BackColor = System::Drawing::Color::SpringGreen;
            this->add_debt_i->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->add_debt_i->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->add_debt_i->Location = System::Drawing::Point(30, 127);
            this->add_debt_i->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->add_debt_i->Name = L"add_debt_i";
            this->add_debt_i->Size = System::Drawing::Size(173, 65);
            this->add_debt_i->TabIndex = 0;
            this->add_debt_i->Text = L"Add debt";
            this->add_debt_i->UseVisualStyleBackColor = false;
            this->add_debt_i->Click += gcnew System::EventHandler(this, &DebtsIOwe::add_debt_i_Click);
            // 
            // flowLayoutPanel
            // 
            this->flowLayoutPanel->BackColor = System::Drawing::Color::Transparent;
            this->flowLayoutPanel->Location = System::Drawing::Point(344, 127);
            this->flowLayoutPanel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->flowLayoutPanel->Name = L"flowLayoutPanel";
            this->flowLayoutPanel->Size = System::Drawing::Size(1397, 800);
            this->flowLayoutPanel->TabIndex = 1;
            // 
            // backButton
            // 
            this->backButton->BackColor = System::Drawing::Color::SpringGreen;
            this->backButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->backButton->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->backButton->Location = System::Drawing::Point(30, 219);
            this->backButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->backButton->Name = L"backButton";
            this->backButton->Size = System::Drawing::Size(173, 65);
            this->backButton->TabIndex = 2;
            this->backButton->Text = L"Back To Menu";
            this->backButton->UseVisualStyleBackColor = false;
            this->backButton->Click += gcnew System::EventHandler(this, &DebtsIOwe::backButton_Click);
            // 
            // panel1
            // 
            this->panel1->BackColor = System::Drawing::Color::Lime;
            this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->panel1->Location = System::Drawing::Point(-33, 0);
            this->panel1->Name = L"panel1";
            this->panel1->Size = System::Drawing::Size(2483, 100);
            this->panel1->TabIndex = 3;
            // 
            // AllDebtsAmount
            // 
            this->AllDebtsAmount->AutoSize = true;
            this->AllDebtsAmount->BackColor = System::Drawing::Color::Transparent;
            this->AllDebtsAmount->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->AllDebtsAmount->ForeColor = System::Drawing::Color::Black;
            this->AllDebtsAmount->Location = System::Drawing::Point(26, 460);
            this->AllDebtsAmount->Name = L"AllDebtsAmount";
            this->AllDebtsAmount->Size = System::Drawing::Size(92, 31);
            this->AllDebtsAmount->TabIndex = 4;
            this->AllDebtsAmount->Text = L"label1";
            this->AllDebtsAmount->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // DebtsIOwe
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::Honeydew;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->ClientSize = System::Drawing::Size(1924, 886);
            this->Controls->Add(this->AllDebtsAmount);
            this->Controls->Add(this->panel1);
            this->Controls->Add(this->backButton);
            this->Controls->Add(this->flowLayoutPanel);
            this->Controls->Add(this->add_debt_i);
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
            this->Name = L"DebtsIOwe";
            this->Text = L"Debts I Owe";
            this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &DebtsIOwe::Debts_I_Owe_FormClosing);
            this->Load += gcnew System::EventHandler(this, &DebtsIOwe::Debts_I_Owe_Load);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private: System::Void add_debt_i_Click(System::Object^ sender, System::EventArgs^ e) {

        DebtPanel("", "", nullptr);

    }
    private: System::Void DebtPanel(String^ debtName, String^ debtAmount, Panel^ exist_Panel) { 

        Panel^ newPanel = exist_Panel == nullptr ? gcnew Panel() : exist_Panel;
        newPanel->Size = System::Drawing::Size(500, 100);
        newPanel->BorderStyle = BorderStyle::FixedSingle;
        newPanel->BackColor = System::Drawing::Color::LightGreen;

        Label^ name = gcnew Label();
        name->Location = System::Drawing::Point(10, 15);
        name->Size = System::Drawing::Size(90, 23);
        name->Text = L"Debt Name:";
        name->Font = gcnew System::Drawing::Font("Bookman Old Style", 10, System::Drawing::FontStyle::Bold);

        TextBox^ textName = gcnew TextBox();
        textName->Location = System::Drawing::Point(100, 15);
        textName->Size = System::Drawing::Size(150, 30);
        textName->Text = debtName;
        textName->Font = gcnew System::Drawing::Font("Bookman Old Style", 11);

        Label^ amount = gcnew Label();
        amount->Location = System::Drawing::Point(260, 15);
        amount->Size = System::Drawing::Size(70, 23);
        amount->Text = L"Amount:";
        amount->Font = gcnew System::Drawing::Font("Bookman Old Style", 10, System::Drawing::FontStyle::Bold);

        TextBox^ textAmount = gcnew TextBox();
        textAmount->Location = System::Drawing::Point(330, 15);
        textAmount->Size = System::Drawing::Size(100, 30);
        textAmount->KeyPress += gcnew KeyPressEventHandler(this, &DebtsIOwe::textAmount_KeyPress);
        textAmount->Text = debtAmount;
        textAmount->Font = gcnew System::Drawing::Font("Bookman Old Style", 11);

        Button^ save = gcnew Button();
        save->Location = System::Drawing::Point(90, 50);
        save->Size = System::Drawing::Size(100, 30);
        save->Text = L"Save";
        save->Font = gcnew System::Drawing::Font("Bookman Old Style", 10, System::Drawing::FontStyle::Bold);
        save->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        save->BackColor = System::Drawing::Color::LimeGreen;
        save->Click += gcnew System::EventHandler(this, &DebtsIOwe::save_Click);

        Button^ del = gcnew Button();
        del->Location = System::Drawing::Point(200, 50);
        del->Size = System::Drawing::Size(100, 30);
        del->Text = L"Delete";
        del->Font = gcnew System::Drawing::Font("Bookman Old Style", 10, System::Drawing::FontStyle::Bold);
        del->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        del->BackColor = System::Drawing::Color::LimeGreen;
        del->Click += gcnew System::EventHandler(this, &DebtsIOwe::delete_Click);

        Button^ more = gcnew Button();
        more->Location = System::Drawing::Point(310, 50);
        more->Size = System::Drawing::Size(100, 30);
        more->Text = L"More";
        more->Font = gcnew System::Drawing::Font("Bookman Old Style", 10, System::Drawing::FontStyle::Bold);
        more->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        more->BackColor = System::Drawing::Color::LimeGreen;
        more->Click += gcnew System::EventHandler(this, &DebtsIOwe::more_Click);

        newPanel->Controls->Add(name);
        newPanel->Controls->Add(textName);
        newPanel->Controls->Add(amount);
        newPanel->Controls->Add(textAmount);
        newPanel->Controls->Add(save);
        newPanel->Controls->Add(del);
        newPanel->Controls->Add(more);

        if (exist_Panel == nullptr)
        {
            flowLayoutPanel->Controls->Add(newPanel);
        }
    }
    private: void Load_exist_debt() {

        if (!System::IO::File::Exists("debts.csv"))
        {
            return;
        }

        try
        {
            array<String^>^ lines = System::IO::File::ReadAllLines("debts.csv");
            for each (String ^ line in lines)
            {
                array<String^>^ parts = line->Split(',');
                if (parts->Length == 2)
                {
                    String^ debtName = parts[0];
                    String^ debtAmount = parts[1];
                    DebtPanel(debtName, debtAmount, nullptr);
                }
            }
        }
        catch (Exception^ ex)
        {
            MessageBox::Show("Error loading data: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
    private: System::Void textAmount_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {

        if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar) && e->KeyChar != '.')
        {
            e->Handled = true;
        }

        TextBox^ textBox = safe_cast<TextBox^>(sender);
        if (e->KeyChar == '.' && textBox->Text->IndexOf('.') > -1)
        {
            e->Handled = true;
        }
    }
    private: System::Void save_Click(System::Object^ sender, System::EventArgs^ e) {

        Button^ save_Button = safe_cast<Button^>(sender);
        Panel^ mainPanel = safe_cast<Panel^>(save_Button->Parent);

        TextBox^ textName = safe_cast<TextBox^>(mainPanel->Controls[1]);
        TextBox^ textAmount = safe_cast<TextBox^>(mainPanel->Controls[3]);

        String^ debtName = textName->Text;
        String^ debtAmount = textAmount->Text;

        if (String::IsNullOrEmpty(debtName) || String::IsNullOrEmpty(debtAmount)) {
            MessageBox::Show("Please enter both name and amount.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }

        try {
            array<String^>^ lines = System::IO::File::ReadAllLines("debts.csv");
            bool found = false;
            int initialAmount = 0;
            System::Collections::Generic::List<int>^ payments = gcnew System::Collections::Generic::List<int>();

            for each (String ^ line in lines) {
                array<String^>^ parts = line->Split(',');
                if (parts->Length >= 2 && parts[0] == debtName) {
                    found = true;
                    initialAmount = Int32::Parse(parts[1]);
                    for (int i = 2; i < parts->Length; i++) {
                        payments->Add(Int32::Parse(parts[i]));
                    }
                    break;
                }
            }

            int newInitialAmount;
            if (found) {
                newInitialAmount = initialAmount;
            }
            else {
                newInitialAmount = Int32::Parse(debtAmount);
            }

            int totalPayments = 0;
            for each (int payment in payments) {
                totalPayments += payment;
            }

            int newTotalAmount = newInitialAmount - totalPayments;

            System::Collections::Generic::List<String^>^ updatedLines = gcnew System::Collections::Generic::List<String^>();
            for each (String ^ line in lines) {
                array<String^>^ parts = line->Split(',');
                if (parts->Length >= 2) {
                    if (parts[0] == debtName) {
                        String^ newLine = debtName + "," + newInitialAmount.ToString();
                        for each (int payment in payments) {
                            newLine += "," + payment.ToString();
                        }
                        updatedLines->Add(newLine);
                    }
                    else {
                        updatedLines->Add(line);
                    }
                }
            }

            if (!found) {
                String^ newLine = debtName + "," + newInitialAmount.ToString();
                updatedLines->Add(newLine);
            }

            System::IO::File::WriteAllLines("debts.csv", updatedLines->ToArray());

            textAmount->ReadOnly = true;

            MessageBox::Show("Debt saved:\nName: " + debtName + "\nAmount: " + newTotalAmount.ToString(), "Save");
        }
        catch (Exception^ ex) {
            MessageBox::Show("Error saving data: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }

        updateAllDebtsAmount();
    }
    private: System::Void delete_Click(System::Object^ sender, System::EventArgs^ e) {

        Button^ delete_Button = safe_cast<Button^>(sender);
        Panel^ mainPanel = safe_cast<Panel^>(delete_Button->Parent);

        TextBox^ textName = safe_cast<TextBox^>(mainPanel->Controls[1]);
        String^ debtName = textName->Text;

        try
        {
            array<String^>^ lines = System::IO::File::ReadAllLines("debts.csv");
            System::Collections::Generic::List<String^>^ update_Line = gcnew System::Collections::Generic::List<String^>();

            for each (String ^ line in lines)
            {
                array<String^>^ parts = line->Split(',');
                if (parts->Length == 2 && parts[0] != debtName)
                {
                    update_Line->Add(line);
                }
            }

            System::IO::File::WriteAllLines("debts.csv", update_Line->ToArray());

            array<String^>^ detailsLines = System::IO::File::ReadAllLines("details.csv");
            List<String^>^ updatedDetailsLines = gcnew List<String^>();

            for each (String ^ detailsLine in detailsLines) {
                array<String^>^ parts = detailsLine->Split(',');
                if (parts->Length == 3 && parts[0] != debtName) {
                    updatedDetailsLines->Add(detailsLine);
                }
            }

            System::IO::File::WriteAllLines("details.csv", updatedDetailsLines->ToArray());

            flowLayoutPanel->Controls->Remove(mainPanel);

            MessageBox::Show("Debt \"" + debtName + "\" deleted successfully.", "Delete");
        }
        catch (Exception^ ex)
        {
            MessageBox::Show("Error deleting data: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }

        updateAllDebtsAmount();
    }
    private: void DebtDetails(String^ debtName) {
        System::Windows::Forms::Form^ detailsForm = gcnew System::Windows::Forms::Form();
        detailsForm->Text = "Debt Details";
        detailsForm->BackColor = System::Drawing::Color::Honeydew;
        detailsForm->BackgroundImage = System::Drawing::Image::FromFile("seamless-pattern-cartoon-frog-cute-wallpaper-for-kids-gift-wrap-paper-vector.jpg");
        detailsForm->Size = System::Drawing::Size(500, 650);
        detailsForm->Icon = gcnew System::Drawing::Icon("10384161.ico");

        System::Windows::Forms::ListBox^ listDetails = gcnew System::Windows::Forms::ListBox();
        listDetails->Dock = System::Windows::Forms::DockStyle::Top;
        listDetails->Height = 450;
        listDetails->Font = gcnew System::Drawing::Font("Bookman Old Style", 11);

        detailsForm->Controls->Add(listDetails);

        Label^ totalAmountLabel = gcnew Label();
        totalAmountLabel->Location = System::Drawing::Point(10, 510);
        totalAmountLabel->Size = System::Drawing::Size(360, 23);
        totalAmountLabel->Font = gcnew System::Drawing::Font("Bookman Old Style", 10);

        detailsForm->Controls->Add(totalAmountLabel);

        Label^ initialDebtAmountLabel = gcnew Label();
        initialDebtAmountLabel->Location = System::Drawing::Point(10, 480);
        initialDebtAmountLabel->Size = System::Drawing::Size(360, 23);
        initialDebtAmountLabel->Font = gcnew System::Drawing::Font("Bookman Old Style", 10);

        detailsForm->Controls->Add(initialDebtAmountLabel);

        double initialDebtAmount = 0.0;
        try {
            array<String^>^ lines = System::IO::File::ReadAllLines("debts.csv");
            for each (String ^ line in lines) {
                array<String^>^ parts = line->Split(',');
                if (parts->Length == 2 && parts[0] == debtName) {
                    initialDebtAmount = Convert::ToDouble(parts[1], System::Globalization::CultureInfo::InvariantCulture);
                    break;
                }
            }
        }
        catch (Exception^ ex) {
            MessageBox::Show("Error loading initial debt amount: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        initialDebtAmountLabel->Text = "Initial Amount: " + initialDebtAmount.ToString(System::Globalization::CultureInfo::InvariantCulture);

        if (!System::IO::File::Exists("details.csv")) {
            MessageBox::Show("No details found for this debt.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
            return;
        }

        double totalAmount = 0.0;

        try {
            array<String^>^ lines = System::IO::File::ReadAllLines("details.csv");
            for each (String ^ line in lines) {
                array<String^>^ parts = line->Split(',');
                if (parts->Length == 3 && parts[0] == debtName) {
                    String^ date = parts[1];
                    String^ amount = parts[2];
                    totalAmount += Convert::ToDouble(amount, System::Globalization::CultureInfo::InvariantCulture);
                    listDetails->Items->Add("Date: " + date + ", Amount: " + amount);
                }
            }
            totalAmountLabel->Text = "Total Amount: " + totalAmount.ToString(System::Globalization::CultureInfo::InvariantCulture);
        }
        catch (Exception^ ex) {
            MessageBox::Show("Error loading details: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }

        TextBox^ newPayment = gcnew TextBox();
        newPayment->Location = System::Drawing::Point(10, 540);
        newPayment->Size = System::Drawing::Size(100, 23);
        newPayment->Font = gcnew System::Drawing::Font("Bookman Old Style", 11);

        DateTimePicker^ PaymentDate = gcnew DateTimePicker();
        PaymentDate->Format = DateTimePickerFormat::Short;
        PaymentDate->Location = System::Drawing::Point(120, 540);
        PaymentDate->Size = System::Drawing::Size(100, 23);
        PaymentDate->Font = gcnew System::Drawing::Font("Bookman Old Style", 11);

        Button^ addPayment = gcnew Button();
        addPayment->Text = "Add Payment";
        addPayment->Location = System::Drawing::Point(230, 540);
        addPayment->Font = gcnew System::Drawing::Font("Bookman Old Style", 10, System::Drawing::FontStyle::Bold);
        addPayment->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        addPayment->BackColor = System::Drawing::Color::LimeGreen;
        addPayment->Click += gcnew System::EventHandler(this, &DebtsIOwe::addPayment_Click);

        detailsForm->Controls->Add(newPayment);
        detailsForm->Controls->Add(PaymentDate);
        detailsForm->Controls->Add(addPayment);

        detailsForm->Tag = gcnew array<Object^> { debtName, listDetails, newPayment, PaymentDate, totalAmountLabel };

        Button^ deletePayment = gcnew Button();
        deletePayment->Text = "Delete Payment";
        deletePayment->Location = System::Drawing::Point(10, 570);
        deletePayment->Font = gcnew System::Drawing::Font("Bookman Old Style", 10, System::Drawing::FontStyle::Bold);
        deletePayment->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
        deletePayment->BackColor = System::Drawing::Color::LimeGreen;
        deletePayment->Click += gcnew System::EventHandler(this, &DebtsIOwe::deletePayment_Click);

        detailsForm->Controls->Add(deletePayment);

        detailsForm->ShowDialog();

    }
    private: System::Void addPayment_Click(System::Object^ sender, System::EventArgs^ e) {
        Button^ addPayment = safe_cast<Button^>(sender);
        Form^ detailsForm = safe_cast<Form^>(addPayment->Parent);

        array<Object^>^ tag = safe_cast<array<Object^>^>(detailsForm->Tag);
        String^ debtName = safe_cast<String^>(tag[0]);
        ListBox^ listDetails = safe_cast<ListBox^>(tag[1]);
        TextBox^ newPayment = safe_cast<TextBox^>(tag[2]);
        DateTimePicker^ PaymentDate = safe_cast<DateTimePicker^>(tag[3]);
        Label^ totalAmountLabel = safe_cast<Label^>(tag[4]);

        String^ paymentAmount = newPayment->Text;
        String^ paymentDate = PaymentDate->Text;

        if (String::IsNullOrEmpty(paymentAmount)) {
            MessageBox::Show("Please, enter the payment amount.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }

        double payment;
        try {
            payment = Convert::ToDouble(paymentAmount, System::Globalization::CultureInfo::InvariantCulture);
        }
        catch (FormatException^) {
            MessageBox::Show("Please enter a valid amount.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }

        try {
            String^ newPaymentDetail = debtName + "," + paymentDate + "," + paymentAmount;
            System::IO::File::AppendAllText("details.csv", newPaymentDetail + "\n");

            array<String^>^ lines = System::IO::File::ReadAllLines("debts.csv");
            for (int i = 0; i < lines->Length; i++) {
                array<String^>^ parts = lines[i]->Split(',');
                if (parts->Length == 2 && parts[0] == debtName) {
                    double currentAmount = Convert::ToDouble(parts[1], System::Globalization::CultureInfo::InvariantCulture);
                    double newAmount = currentAmount - payment;

                    if (newAmount < 0) newAmount = 0;
                        
                    parts[1] = newAmount.ToString(System::Globalization::CultureInfo::InvariantCulture);
                    lines[i] = parts[0] + "," + parts[1];
                    break;
                }
            }
            System::IO::File::WriteAllLines("debts.csv", lines);

            listDetails->Items->Add("Date: " + paymentDate + ", Amount: " + paymentAmount);
            double totalAmount = Convert::ToDouble(totalAmountLabel->Text->Substring(13), System::Globalization::CultureInfo::InvariantCulture) + payment;
            totalAmountLabel->Text = "Total Amount: " + totalAmount.ToString(System::Globalization::CultureInfo::InvariantCulture);

            MessageBox::Show("Payment added successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
        }
        catch (Exception^ ex) {
            MessageBox::Show("Error saving payment: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
    private: System::Void deletePayment_Click(System::Object^ sender, System::EventArgs^ e) {
        
        Button^ deletePayment = safe_cast<Button^>(sender);
        Form^ detailsForm = safe_cast<Form^>(deletePayment->Parent);

        array<Object^>^ tag = safe_cast<array<Object^>^>(detailsForm->Tag);
        String^ debtName = safe_cast<String^>(tag[0]);
        ListBox^ listDetails = safe_cast<ListBox^>(tag[1]);
        Label^ totalAmountLabel = safe_cast<Label^>(tag[4]);

        if (listDetails->SelectedIndex == -1)
        {
            MessageBox::Show("Please, select a payment to delete.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            return;
        }

        String^ selectedPayment = safe_cast<String^>(listDetails->SelectedItem);
        int index = selectedPayment->LastIndexOf(": ");
        String^ amountStr = selectedPayment->Substring(index + 2);
        double amount = Convert::ToDouble(amountStr, System::Globalization::CultureInfo::InvariantCulture);

        try {
            array<String^>^ lines = System::IO::File::ReadAllLines("details.csv");
            List<String^>^ updatedLines = gcnew List<String^>();
            for each (String ^ line in lines)
            {
                if (line->StartsWith(debtName + ","))
                {
                    String^ check = "Date: " + line->Split(',')[1] + ", Amount: " + line->Split(',')[2];
                    if (check != selectedPayment)
                    {
                        updatedLines->Add(line);
                    }
                }
                else
                {
                    updatedLines->Add(line);
                }
            }
            System::IO::File::WriteAllLines("details.csv", updatedLines->ToArray());

            lines = System::IO::File::ReadAllLines("debts.csv");
            for (int i = 0; i < lines->Length; i++)
            {
                array<String^>^ parts = lines[i]->Split(',');
                if (parts->Length == 2 && parts[0] == debtName) {
                    double currentAmount = Convert::ToDouble(parts[1], System::Globalization::CultureInfo::InvariantCulture);
                    double newAmount = currentAmount + amount;

                    parts[1] = newAmount.ToString(System::Globalization::CultureInfo::InvariantCulture);
                    lines[i] = parts[0] + "," + parts[1];
                    break;
                }
            }
            System::IO::File::WriteAllLines("debts.csv", lines);

            listDetails->Items->Remove(selectedPayment);
            double totalAmount = Convert::ToDouble(totalAmountLabel->Text->Substring(13), System::Globalization::CultureInfo::InvariantCulture) - amount;
            totalAmountLabel->Text = "Total Amount: " + totalAmount.ToString(System::Globalization::CultureInfo::InvariantCulture);

            MessageBox::Show("Payment deleted successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
        }
        catch (Exception^ ex) {
        MessageBox::Show("Error deleting payment: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
    }
    private: System::Void more_Click(System::Object^ sender, System::EventArgs^ e) {

        Button^ more_Button = safe_cast<Button^>(sender);
        Panel^ mainPanel = safe_cast<Panel^>(more_Button->Parent);

        TextBox^ textName = safe_cast<TextBox^>(mainPanel->Controls[1]);
        String^ debtName = textName->Text;

        DebtDetails(debtName);

    }
    private: System::Void backButton_Click(System::Object^ sender, System::EventArgs^ e) {
        this->Hide();
        ShowMainScreen();
    }
    private: System::Void Debts_I_Owe_Load(System::Object^ sender, System::EventArgs^ e) {
        updateAllDebtsAmount();
    }
    private: System::Void Debts_I_Owe_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
        e->Cancel = true; 
        this->Hide(); 
        ShowMainScreen(); 
    }
    private: void updateAllDebtsAmount() {

        double debtsTotalAmount = 0.0;
        
        try
        {
            array<String^>^ lines = System::IO::File::ReadAllLines("debts.csv");
            for each (String ^ line in lines)
            {
                array<String^>^ parts = line->Split(',');
                if (parts->Length == 2)
                {
                    debtsTotalAmount += Convert::ToDouble(parts[1], System::Globalization::CultureInfo::InvariantCulture);
                }
            }
        }
        catch (Exception^ ex)
        {
            MessageBox::Show("Error updating total amount: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
        }
        
        AllDebtsAmount->Text = "Total debts amount:\n\n" + debtsTotalAmount.ToString(System::Globalization::CultureInfo::InvariantCulture);
    }
};
}
