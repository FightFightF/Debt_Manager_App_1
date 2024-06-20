#pragma once

void ShowMainScreen();
void ShowHelpWindow();

namespace DebtManagerApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class HelpWindow : public System::Windows::Forms::Form
	{
	public:
		HelpWindow(void)
		{
			InitializeComponent();
			this->WindowState = FormWindowState::Maximized;
		}

	protected:
		~HelpWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ backButton;
	private: System::Windows::Forms::WebBrowser^ webBrowser1;





	protected:

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HelpWindow::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->backButton = (gcnew System::Windows::Forms::Button());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Lime;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Location = System::Drawing::Point(-33, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(2483, 100);
			this->panel1->TabIndex = 0;
			// 
			// backButton
			// 
			this->backButton->BackColor = System::Drawing::Color::SpringGreen;
			this->backButton->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->backButton->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backButton->Location = System::Drawing::Point(30, 127);
			this->backButton->Name = L"backButton";
			this->backButton->Size = System::Drawing::Size(173, 65);
			this->backButton->TabIndex = 1;
			this->backButton->Text = L"Back To Menu";
			this->backButton->UseVisualStyleBackColor = false;
			this->backButton->Click += gcnew System::EventHandler(this, &HelpWindow::backButton_Click);
			// 
			// webBrowser1
			// 
			this->webBrowser1->Location = System::Drawing::Point(353, 144);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(1559, 730);
			this->webBrowser1->TabIndex = 2;
			this->webBrowser1->Url = gcnew System::Uri(System::IO::Path::Combine(System::Environment::CurrentDirectory, "Help.html"));
			// 
			// HelpWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Honeydew;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1924, 886);
			this->Controls->Add(this->webBrowser1);
			this->Controls->Add(this->backButton);
			this->Controls->Add(this->panel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"HelpWindow";
			this->Text = L"Help";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &HelpWindow::HelpWindow_FormClosing);
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void backButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		ShowMainScreen();
	}
	private: System::Void HelpWindow_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		e->Cancel = true;
		this->Hide();
		ShowMainScreen();
	}
	
};
}
