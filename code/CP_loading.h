#include "Game.h"
namespace baseescapev40 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ CP_loading
	/// </summary>
	public ref class CP_loading : public System::Windows::Forms::Form
	{
	public:
		CP_loading(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~CP_loading()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^ cp2_tm1;
	private: System::Windows::Forms::Timer^ cp2_tm2;
	protected:

	protected:

	private: System::Windows::Forms::ProgressBar^ cp_progressbar;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Start;
	private: 	int sec = 0;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CP_loading::typeid));
			this->cp2_tm1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->cp2_tm2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->cp_progressbar = (gcnew System::Windows::Forms::ProgressBar());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Start = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// cp2_tm1
			// 
			this->cp2_tm1->Interval = 15;
			this->cp2_tm1->Tick += gcnew System::EventHandler(this, &CP_loading::cp_tm1_Tick);
			// 
			// cp2_tm2
			// 
			this->cp2_tm2->Tick += gcnew System::EventHandler(this, &CP_loading::cp_tm2_Tick);
			// 
			// cp_progressbar
			// 
			this->cp_progressbar->Location = System::Drawing::Point(147, 193);
			this->cp_progressbar->Name = L"cp_progressbar";
			this->cp_progressbar->Size = System::Drawing::Size(100, 23);
			this->cp_progressbar->TabIndex = 0;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Silver;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(63, 32);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(269, 145);
			this->panel1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(40, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(188, 78);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Chapter 1.\r\nBasement";
			// 
			// Start
			// 
			this->Start->BackColor = System::Drawing::Color::LightGreen;
			this->Start->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Start->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Start->Location = System::Drawing::Point(147, 221);
			this->Start->Name = L"Start";
			this->Start->Size = System::Drawing::Size(100, 27);
			this->Start->TabIndex = 7;
			this->Start->Text = L"Start Game";
			this->Start->UseVisualStyleBackColor = false;
			this->Start->Click += gcnew System::EventHandler(this, &CP_loading::Start_Click);
			// 
			// CP_loading
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkGray;
			this->ClientSize = System::Drawing::Size(400, 260);
			this->Controls->Add(this->Start);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->cp_progressbar);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"CP_loading";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Base_Escape";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
	private: System::Void cp_tm1_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->cp_progressbar->Increment(1);
		if (this->cp_progressbar->Value == 100)
			this->cp2_tm2->Start();
	}
	private: System::Void cp_tm2_Tick(System::Object^ sender, System::EventArgs^ e) {
		sec++;
		if (sec == 5) {
			Game^ f4 = gcnew Game();
			f4->Show();
			CP_loading::Hide();
		}
	}
	private: System::Void Start_Click(System::Object^ sender, System::EventArgs^ e) {
		this->cp2_tm1->Start();
		this->Start->Hide();
	}
	};
}
