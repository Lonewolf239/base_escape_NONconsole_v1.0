#include "second_floor.h"
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
	public ref class CP_loading4 : public System::Windows::Forms::Form
	{
	public:
		CP_loading4(void)
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
		~CP_loading4()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^ cp3_tm1;
	private: System::Windows::Forms::Timer^ cp3_tm2;
	protected:


	protected:

	protected:


	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;

	private: 	int sec = 0;
	private: System::Windows::Forms::Button^ Start;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CP_loading4::typeid));
			this->cp3_tm1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->cp3_tm2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Start = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// cp3_tm1
			// 
			this->cp3_tm1->Interval = 15;
			this->cp3_tm1->Tick += gcnew System::EventHandler(this, &CP_loading4::cp_tm1_Tick);
			// 
			// cp3_tm2
			// 
			this->cp3_tm2->Tick += gcnew System::EventHandler(this, &CP_loading4::cp_tm2_Tick);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Silver;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(65, 32);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(270, 145);
			this->panel1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26, System::Drawing::FontStyle::Bold));
			this->label1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Location = System::Drawing::Point(18, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(234, 78);
			this->label1->TabIndex = 0;
			this->label1->Text = L"  Chapter 4.\r\nSecond Floor";
			// 
			// Start
			// 
			this->Start->BackColor = System::Drawing::Color::LightGreen;
			this->Start->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Start->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Start->ForeColor = System::Drawing::Color::Black;
			this->Start->Location = System::Drawing::Point(110, 180);
			this->Start->Name = L"Start";
			this->Start->Size = System::Drawing::Size(180, 65);
			this->Start->TabIndex = 8;
			this->Start->Text = L"Start Game";
			this->Start->UseVisualStyleBackColor = false;
			this->Start->Click += gcnew System::EventHandler(this, &CP_loading4::Start_Click_1);
			// 
			// CP_loading4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkGray;
			this->ClientSize = System::Drawing::Size(400, 260);
			this->Controls->Add(this->Start);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"CP_loading4";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Base_Escape";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
	private: System::Void cp_tm1_Tick(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void cp_tm2_Tick(System::Object^ sender, System::EventArgs^ e) {
		sec++;
		if (sec == 5) {

		}
	}
	private: System::Void Start_Click(System::Object^ sender, System::EventArgs^ e) {
		this->cp3_tm1->Start();
		this->Start->Hide();
	}
	private: System::Void Start_Click_1(System::Object^ sender, System::EventArgs^ e) {
		second_floor^ f10 = gcnew second_floor();
		f10->Show();
		CP_loading4::Hide();
	}
};
}
