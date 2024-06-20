#pragma once

#include <Windows.h>
#include "DebtsIOwe.h"
#include "DebtsTheyOwe.h"
#include "HelpWindow.h"

void ShowMainScreen();

namespace DebtManagerApp {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class DebtManager : public System::Windows::Forms::Form
    {
    public:
        DebtManager(void)
        {
            InitializeComponent();
            this->Resize += gcnew System::EventHandler(this, &DebtManager::OnResize);
        }

    protected:
        ~DebtManager()
        {
            if (components)
            {
                delete components;
            }
        }

    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Button^ help_button;


    private:
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DebtManager::typeid));
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->button3 = (gcnew System::Windows::Forms::Button());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->help_button = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // 
            // button1
            // 
            this->button1->BackColor = System::Drawing::Color::Chartreuse;
            this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button1->Font = (gcnew System::Drawing::Font(L"Sylfaen", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button1->ForeColor = System::Drawing::Color::Black;
            this->button1->Location = System::Drawing::Point(53, 381);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(435, 84);
            this->button1->TabIndex = 0;
            this->button1->Text = L"Debts I owe";
            this->button1->UseVisualStyleBackColor = false;
            this->button1->Click += gcnew System::EventHandler(this, &DebtManager::IOweClick);
            // 
            // button2
            // 
            this->button2->BackColor = System::Drawing::Color::Chartreuse;
            this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button2->Font = (gcnew System::Drawing::Font(L"Sylfaen", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button2->Location = System::Drawing::Point(53, 471);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(435, 84);
            this->button2->TabIndex = 1;
            this->button2->Text = L"Debts They owe";
            this->button2->UseVisualStyleBackColor = false;
            this->button2->Click += gcnew System::EventHandler(this, &DebtManager::TheyOweClick);
            // 
            // button3
            // 
            this->button3->BackColor = System::Drawing::Color::Chartreuse;
            this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->button3->Font = (gcnew System::Drawing::Font(L"Sylfaen", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->button3->Location = System::Drawing::Point(53, 561);
            this->button3->Name = L"button3";
            this->button3->Size = System::Drawing::Size(435, 84);
            this->button3->TabIndex = 2;
            this->button3->Text = L"Exit";
            this->button3->UseVisualStyleBackColor = false;
            this->button3->Click += gcnew System::EventHandler(this, &DebtManager::ExitClick);
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->BackColor = System::Drawing::Color::Transparent;
            this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->label1->ForeColor = System::Drawing::Color::Black;
            this->label1->Location = System::Drawing::Point(146, 98);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(242, 91);
            this->label1->TabIndex = 3;
            this->label1->Text = L"Menu";
            this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
            // 
            // help_button
            // 
            this->help_button->BackColor = System::Drawing::Color::Chartreuse;
            this->help_button->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
            this->help_button->Font = (gcnew System::Drawing::Font(L"Sylfaen", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->help_button->Location = System::Drawing::Point(405, 23);
            this->help_button->Name = L"help_button";
            this->help_button->Size = System::Drawing::Size(113, 52);
            this->help_button->TabIndex = 4;
            this->help_button->Text = L"Help";
            this->help_button->UseVisualStyleBackColor = false;
            this->help_button->Click += gcnew System::EventHandler(this, &DebtManager::help_button_Click);
            // 
            // DebtManager
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::Color::MediumSpringGreen;
            this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
            this->ClientSize = System::Drawing::Size(547, 673);
            this->Controls->Add(this->help_button);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->button3);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->button1);
            this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
            this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
            this->Name = L"DebtManager";
            this->Text = L"DebtManager";
            this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &DebtManager::Debt_Manager_FormClosing);
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    
    private:
        void controls_to_center()
        {
            int width = this->ClientSize.Width;
            int height = this->ClientSize.Height;

            label1->Location = System::Drawing::Point((width - label1->Width) / 2, label1->Location.Y);

            button1->Location = System::Drawing::Point((width - button1->Width) / 2, button1->Location.Y);
            button2->Location = System::Drawing::Point((width - button2->Width) / 2, button2->Location.Y);
            button3->Location = System::Drawing::Point((width - button3->Width) / 2, button3->Location.Y);

            help_button->Location = System::Drawing::Point(width - help_button->Width - 20, 20);
        }

    private: System::Void ExitClick(System::Object^ sender, System::EventArgs^ e) {
        PostQuitMessage(0);
    }

    private: System::Void TheyOweClick(System::Object^ sender, System::EventArgs^ e) {
        this->Hide();
        ShowDebtsTheyOweScreen();
    }

    private: System::Void IOweClick(System::Object^ sender, System::EventArgs^ e) {
        this->Hide();
        ShowDebtsIOweScreen();
    }
    private: System::Void Debt_Manager_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
        PostQuitMessage(0);
    }
    private: System::Void help_button_Click(System::Object^ sender, System::EventArgs^ e) {
        this->Hide();
        ShowHelpWindow();
    }
    private: System::Void OnResize(System::Object^ sender, System::EventArgs^ e) {
        controls_to_center();
    }
};
}
