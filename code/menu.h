#include <iostream>
#include "CP_loading.h"
namespace baseescapev40 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ base_escape
	/// </summary>
	public ref class menu: public System::Windows::Forms::Form {
	public:
		menu(void) {
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~menu() {
			if (components) {
				delete components;
			}
		}


	private: System::Windows::Forms::Timer^ loading_timer;
	private: System::Windows::Forms::Label^ main_menu_txt;

	private: System::Windows::Forms::Button^ Start;

	private: System::Windows::Forms::Button^ developer;
	private: System::Windows::Forms::Button^ Exit_btn;
	private: System::Windows::Forms::Button^ tg_btn;




	private: System::ComponentModel::IContainer^ components;
	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void) {
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(menu::typeid));
			this->loading_timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->main_menu_txt = (gcnew System::Windows::Forms::Label());
			this->Start = (gcnew System::Windows::Forms::Button());
			this->developer = (gcnew System::Windows::Forms::Button());
			this->Exit_btn = (gcnew System::Windows::Forms::Button());
			this->tg_btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// main_menu_txt
			// 
			this->main_menu_txt->AutoSize = true;
			this->main_menu_txt->Font = (gcnew System::Drawing::Font(L"Felix Titling", 18, System::Drawing::FontStyle::Bold));
			this->main_menu_txt->ForeColor = System::Drawing::Color::Black;
			this->main_menu_txt->Location = System::Drawing::Point(14, 9);
			this->main_menu_txt->Name = L"main_menu_txt";
			this->main_menu_txt->Size = System::Drawing::Size(372, 56);
			this->main_menu_txt->TabIndex = 4;
			this->main_menu_txt->Text = L"Base_Escape_NONconsole\r\n             Main Menu";
			// 
			// Start
			// 
			this->Start->BackColor = System::Drawing::Color::LightGreen;
			this->Start->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Start->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Start->ForeColor = System::Drawing::Color::Black;
			this->Start->Location = System::Drawing::Point(140, 83);
			this->Start->Name = L"Start";
			this->Start->Size = System::Drawing::Size(120, 36);
			this->Start->TabIndex = 6;
			this->Start->Text = L"Start Game";
			this->Start->UseVisualStyleBackColor = false;
			this->Start->Click += gcnew System::EventHandler(this, &menu::Start_Click);
			// 
			// developer
			// 
			this->developer->BackColor = System::Drawing::Color::LightGreen;
			this->developer->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->developer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->developer->ForeColor = System::Drawing::Color::Black;
			this->developer->Location = System::Drawing::Point(140, 125);
			this->developer->Name = L"developer";
			this->developer->Size = System::Drawing::Size(120, 36);
			this->developer->TabIndex = 8;
			this->developer->Text = L"Developer";
			this->developer->UseVisualStyleBackColor = false;
			this->developer->Click += gcnew System::EventHandler(this, &menu::developer_Click);
			// 
			// Exit_btn
			// 
			this->Exit_btn->BackColor = System::Drawing::Color::LightCoral;
			this->Exit_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Exit_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Exit_btn->ForeColor = System::Drawing::Color::Black;
			this->Exit_btn->Location = System::Drawing::Point(140, 209);
			this->Exit_btn->Name = L"Exit_btn";
			this->Exit_btn->Size = System::Drawing::Size(120, 36);
			this->Exit_btn->TabIndex = 10;
			this->Exit_btn->Text = L"Exit";
			this->Exit_btn->UseVisualStyleBackColor = false;
			this->Exit_btn->Click += gcnew System::EventHandler(this, &menu::Exit_btn_Click);
			// 
			// tg_btn
			// 
			this->tg_btn->BackColor = System::Drawing::Color::LightGreen;
			this->tg_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->tg_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tg_btn->ForeColor = System::Drawing::Color::Black;
			this->tg_btn->Location = System::Drawing::Point(140, 167);
			this->tg_btn->Name = L"tg_btn";
			this->tg_btn->Size = System::Drawing::Size(120, 36);
			this->tg_btn->TabIndex = 9;
			this->tg_btn->Text = L"Telegram";
			this->tg_btn->UseVisualStyleBackColor = false;
			this->tg_btn->Click += gcnew System::EventHandler(this, &menu::tg_btn_Click);
			// 
			// menu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackColor = System::Drawing::Color::DarkGray;
			this->ClientSize = System::Drawing::Size(400, 260);
			this->Controls->Add(this->tg_btn);
			this->Controls->Add(this->Exit_btn);
			this->Controls->Add(this->developer);
			this->Controls->Add(this->Start);
			this->Controls->Add(this->main_menu_txt);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"menu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Base_Escape";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: System::Void developer_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(this, "My social networks:\nDiscord: Bubba#4211\nVK: @1blitz01\nTelegram: @an1onime", "About Developer", MessageBoxButtons::OK, MessageBoxIcon::Question);
	}
	private: System::Void Exit_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void tg_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		system("start https://t.me/+VLJzjVRg8ElkZWYy");
	}
	private: System::Void Start_Click(System::Object^ sender, System::EventArgs^ e) {
		CP_loading^ f3 = gcnew CP_loading();
		f3->Show();
		menu::Hide();
	}
	private: System::Void Save_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show(this, "Coming soon", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	};
}
