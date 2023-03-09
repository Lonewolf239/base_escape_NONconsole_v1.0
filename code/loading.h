#include "menu.h"
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
	public ref class loading : public System::Windows::Forms::Form {
	public:
		loading(void) {
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~loading() {
			if (components) {
				delete components;
			}
		}

	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::Timer^ loading_timer;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ ext_btn;
	private: System::ComponentModel::IContainer^ components;
	private: int sec = 0;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(loading::typeid));
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->loading_timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->ext_btn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(17, 216);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(372, 32);
			this->progressBar1->TabIndex = 1;
			// 
			// loading_timer
			// 
			this->loading_timer->Enabled = true;
			this->loading_timer->Interval = 35;
			this->loading_timer->Tick += gcnew System::EventHandler(this, &loading::loading_timer_Tick);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Felix Titling", 22.25F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(12, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(238, 175);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Welcome\r\nTo\r\nBase\r\nEscape\r\nNONConsole";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(15, 197);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(11, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L" ";
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &loading::timer1_Tick);
			// 
			// ext_btn
			// 
			this->ext_btn->BackColor = System::Drawing::Color::Red;
			this->ext_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ext_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 6.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ext_btn->Location = System::Drawing::Point(367, 12);
			this->ext_btn->Name = L"ext_btn";
			this->ext_btn->Size = System::Drawing::Size(20, 20);
			this->ext_btn->TabIndex = 15;
			this->ext_btn->Text = L"X";
			this->ext_btn->UseVisualStyleBackColor = false;
			this->ext_btn->Click += gcnew System::EventHandler(this, &loading::ext_btn_Click);
			// 
			// loading
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackColor = System::Drawing::Color::DarkGray;
			this->ClientSize = System::Drawing::Size(400, 260);
			this->Controls->Add(this->ext_btn);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->progressBar1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"loading";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Base_Escape";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: System::Void loading_timer_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->progressBar1->Increment(1);
		this->label2->Text = "Loading " + System::Convert::ToString(this->progressBar1->Value) + "%";
		if (this->progressBar1->Value == 100)
			this->timer1->Start();
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		sec++;
		if (sec == 1) {
			menu^ f2 = gcnew menu();
			f2->Show();
			loading::Hide();
		}
	}
	private: System::Void ext_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	};
}