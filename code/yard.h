#include <iostream>
#include "CP_loading3.h"
namespace baseescapev40 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ yard
	/// </summary>
	public ref class yard : public System::Windows::Forms::Form
	{
	public:
		yard(void)
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
		~yard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ developer;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ location_text;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ ext_btn;
	private: System::Windows::Forms::Button^ inventory_bt;
	private: bool isHasCrowbar = false, isHasMaul = false, isHasExplosives = false, show_inventory = false;
	private: int player_loc = 0;
	private: System::Windows::Forms::GroupBox^ Inventorybox;
	private: System::Windows::Forms::Label^ crowbar_txt;
	private: System::Windows::Forms::Label^ maul_txt;
	private: System::Windows::Forms::Button^ Choice_bt1;
	private: System::Windows::Forms::Button^ Choice_bt2;
	private: System::Windows::Forms::Button^ Choice_bt3;
	private: System::Windows::Forms::Button^ Choice_bt4;
	private: System::Windows::Forms::Button^ save_yes;
	private: System::Windows::Forms::Button^ save_no;
	private: System::Windows::Forms::Button^ gameover_bt;

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(yard::typeid));
			this->developer = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->location_text = (gcnew System::Windows::Forms::Label());
			this->Choice_bt4 = (gcnew System::Windows::Forms::Button());
			this->Choice_bt3 = (gcnew System::Windows::Forms::Button());
			this->Choice_bt2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ext_btn = (gcnew System::Windows::Forms::Button());
			this->inventory_bt = (gcnew System::Windows::Forms::Button());
			this->Inventorybox = (gcnew System::Windows::Forms::GroupBox());
			this->maul_txt = (gcnew System::Windows::Forms::Label());
			this->crowbar_txt = (gcnew System::Windows::Forms::Label());
			this->Choice_bt1 = (gcnew System::Windows::Forms::Button());
			this->save_yes = (gcnew System::Windows::Forms::Button());
			this->save_no = (gcnew System::Windows::Forms::Button());
			this->gameover_bt = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->Inventorybox->SuspendLayout();
			this->SuspendLayout();
			// 
			// developer
			// 
			this->developer->AutoSize = true;
			this->developer->Cursor = System::Windows::Forms::Cursors::Help;
			this->developer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->developer->ForeColor = System::Drawing::Color::Black;
			this->developer->Location = System::Drawing::Point(12, 338);
			this->developer->Name = L"developer";
			this->developer->Size = System::Drawing::Size(141, 20);
			this->developer->TabIndex = 12;
			this->developer->Text = L"By. Lonewolf239";
			this->developer->Click += gcnew System::EventHandler(this, &yard::developer_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Silver;
			this->panel1->Controls->Add(this->location_text);
			this->panel1->Location = System::Drawing::Point(156, 49);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(512, 203);
			this->panel1->TabIndex = 15;
			// 
			// location_text
			// 
			this->location_text->AutoSize = true;
			this->location_text->BackColor = System::Drawing::Color::Silver;
			this->location_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold));
			this->location_text->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->location_text->Location = System::Drawing::Point(0, 0);
			this->location_text->Name = L"location_text";
			this->location_text->Size = System::Drawing::Size(415, 198);
			this->location_text->TabIndex = 0;
			this->location_text->Text = resources->GetString(L"location_text.Text");
			// 
			// Choice_bt4
			// 
			this->Choice_bt4->BackColor = System::Drawing::Color::LightGreen;
			this->Choice_bt4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Choice_bt4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.75F, System::Drawing::FontStyle::Bold));
			this->Choice_bt4->ForeColor = System::Drawing::Color::Black;
			this->Choice_bt4->Location = System::Drawing::Point(16, 207);
			this->Choice_bt4->Name = L"Choice_bt4";
			this->Choice_bt4->Size = System::Drawing::Size(134, 59);
			this->Choice_bt4->TabIndex = 10;
			this->Choice_bt4->Text = L"Shed";
			this->Choice_bt4->UseVisualStyleBackColor = false;
			this->Choice_bt4->Click += gcnew System::EventHandler(this, &yard::Choice_bt4_Click);
			// 
			// Choice_bt3
			// 
			this->Choice_bt3->BackColor = System::Drawing::Color::LightGreen;
			this->Choice_bt3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Choice_bt3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.75F, System::Drawing::FontStyle::Bold));
			this->Choice_bt3->ForeColor = System::Drawing::Color::Black;
			this->Choice_bt3->Location = System::Drawing::Point(16, 142);
			this->Choice_bt3->Name = L"Choice_bt3";
			this->Choice_bt3->Size = System::Drawing::Size(134, 59);
			this->Choice_bt3->TabIndex = 9;
			this->Choice_bt3->Text = L"Treehouse";
			this->Choice_bt3->UseVisualStyleBackColor = false;
			this->Choice_bt3->Click += gcnew System::EventHandler(this, &yard::Choice_bt3_Click);
			// 
			// Choice_bt2
			// 
			this->Choice_bt2->BackColor = System::Drawing::Color::LightGreen;
			this->Choice_bt2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Choice_bt2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.75F, System::Drawing::FontStyle::Bold));
			this->Choice_bt2->ForeColor = System::Drawing::Color::Black;
			this->Choice_bt2->Location = System::Drawing::Point(16, 77);
			this->Choice_bt2->Name = L"Choice_bt2";
			this->Choice_bt2->Size = System::Drawing::Size(134, 59);
			this->Choice_bt2->TabIndex = 8;
			this->Choice_bt2->Text = L"Gate";
			this->Choice_bt2->UseVisualStyleBackColor = false;
			this->Choice_bt2->Click += gcnew System::EventHandler(this, &yard::Choice_bt2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(237, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(398, 33);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Base_Escape_NONconsole";
			// 
			// ext_btn
			// 
			this->ext_btn->BackColor = System::Drawing::Color::Red;
			this->ext_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->ext_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ext_btn->ForeColor = System::Drawing::Color::Silver;
			this->ext_btn->Location = System::Drawing::Point(638, 12);
			this->ext_btn->Name = L"ext_btn";
			this->ext_btn->Size = System::Drawing::Size(30, 30);
			this->ext_btn->TabIndex = 15;
			this->ext_btn->Text = L"X";
			this->ext_btn->UseVisualStyleBackColor = false;
			this->ext_btn->Click += gcnew System::EventHandler(this, &yard::ext_btn_Click);
			// 
			// inventory_bt
			// 
			this->inventory_bt->BackColor = System::Drawing::Color::LightCoral;
			this->inventory_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->inventory_bt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->inventory_bt->ForeColor = System::Drawing::Color::Black;
			this->inventory_bt->Location = System::Drawing::Point(16, 272);
			this->inventory_bt->Name = L"inventory_bt";
			this->inventory_bt->Size = System::Drawing::Size(134, 59);
			this->inventory_bt->TabIndex = 11;
			this->inventory_bt->Text = L"Inventory";
			this->inventory_bt->UseVisualStyleBackColor = false;
			this->inventory_bt->Click += gcnew System::EventHandler(this, &yard::inventory_bt_Click);
			// 
			// Inventorybox
			// 
			this->Inventorybox->BackColor = System::Drawing::Color::LightCoral;
			this->Inventorybox->Controls->Add(this->maul_txt);
			this->Inventorybox->Controls->Add(this->crowbar_txt);
			this->Inventorybox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Inventorybox->ForeColor = System::Drawing::Color::Black;
			this->Inventorybox->Location = System::Drawing::Point(468, 258);
			this->Inventorybox->Name = L"Inventorybox";
			this->Inventorybox->Size = System::Drawing::Size(200, 100);
			this->Inventorybox->TabIndex = 13;
			this->Inventorybox->TabStop = false;
			this->Inventorybox->Text = L"Inventory";
			this->Inventorybox->UseCompatibleTextRendering = true;
			this->Inventorybox->Visible = false;
			// 
			// maul_txt
			// 
			this->maul_txt->AutoSize = true;
			this->maul_txt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->maul_txt->Location = System::Drawing::Point(20, 55);
			this->maul_txt->Name = L"maul_txt";
			this->maul_txt->Size = System::Drawing::Size(55, 24);
			this->maul_txt->TabIndex = 0;
			this->maul_txt->Text = L"Maul";
			this->maul_txt->Visible = false;
			// 
			// crowbar_txt
			// 
			this->crowbar_txt->AutoSize = true;
			this->crowbar_txt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->crowbar_txt->Location = System::Drawing::Point(20, 31);
			this->crowbar_txt->Name = L"crowbar_txt";
			this->crowbar_txt->Size = System::Drawing::Size(88, 24);
			this->crowbar_txt->TabIndex = 1;
			this->crowbar_txt->Text = L"Crowbar";
			this->crowbar_txt->Visible = false;
			// 
			// Choice_bt1
			// 
			this->Choice_bt1->BackColor = System::Drawing::Color::LightGreen;
			this->Choice_bt1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Choice_bt1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.75F, System::Drawing::FontStyle::Bold));
			this->Choice_bt1->ForeColor = System::Drawing::Color::Black;
			this->Choice_bt1->Location = System::Drawing::Point(16, 12);
			this->Choice_bt1->Name = L"Choice_bt1";
			this->Choice_bt1->Size = System::Drawing::Size(134, 59);
			this->Choice_bt1->TabIndex = 7;
			this->Choice_bt1->Text = L"Mansion";
			this->Choice_bt1->UseVisualStyleBackColor = false;
			this->Choice_bt1->Click += gcnew System::EventHandler(this, &yard::Choice_bt1_Click);
			// 
			// save_yes
			// 
			this->save_yes->BackColor = System::Drawing::Color::LightGreen;
			this->save_yes->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->save_yes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->save_yes->ForeColor = System::Drawing::Color::Black;
			this->save_yes->Location = System::Drawing::Point(16, 49);
			this->save_yes->Name = L"save_yes";
			this->save_yes->Size = System::Drawing::Size(134, 59);
			this->save_yes->TabIndex = 8;
			this->save_yes->Text = L"Yes";
			this->save_yes->UseVisualStyleBackColor = false;
			this->save_yes->Visible = false;
			this->save_yes->Click += gcnew System::EventHandler(this, &yard::save_yes_Click);
			// 
			// save_no
			// 
			this->save_no->BackColor = System::Drawing::Color::LightGreen;
			this->save_no->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->save_no->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->save_no->ForeColor = System::Drawing::Color::Black;
			this->save_no->Location = System::Drawing::Point(16, 114);
			this->save_no->Name = L"save_no";
			this->save_no->Size = System::Drawing::Size(134, 59);
			this->save_no->TabIndex = 9;
			this->save_no->Text = L"No";
			this->save_no->UseVisualStyleBackColor = false;
			this->save_no->Visible = false;
			this->save_no->Click += gcnew System::EventHandler(this, &yard::save_no_Click);
			// 
			// gameover_bt
			// 
			this->gameover_bt->BackColor = System::Drawing::Color::LightGreen;
			this->gameover_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->gameover_bt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->gameover_bt->ForeColor = System::Drawing::Color::Black;
			this->gameover_bt->Location = System::Drawing::Point(156, 258);
			this->gameover_bt->Name = L"gameover_bt";
			this->gameover_bt->Size = System::Drawing::Size(306, 100);
			this->gameover_bt->TabIndex = 14;
			this->gameover_bt->Text = L"NEXT";
			this->gameover_bt->UseVisualStyleBackColor = false;
			this->gameover_bt->Visible = false;
			this->gameover_bt->Click += gcnew System::EventHandler(this, &yard::gameover_bt_Click);
			// 
			// yard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkGray;
			this->ClientSize = System::Drawing::Size(680, 360);
			this->Controls->Add(this->gameover_bt);
			this->Controls->Add(this->save_no);
			this->Controls->Add(this->save_yes);
			this->Controls->Add(this->Choice_bt4);
			this->Controls->Add(this->Choice_bt1);
			this->Controls->Add(this->Choice_bt3);
			this->Controls->Add(this->Inventorybox);
			this->Controls->Add(this->Choice_bt2);
			this->Controls->Add(this->inventory_bt);
			this->Controls->Add(this->ext_btn);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->developer);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"yard";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CP_loading";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->Inventorybox->ResumeLayout(false);
			this->Inventorybox->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: System::Void developer_Click(System::Object^ sender, System::EventArgs^ e) {
		system("start https://t.me/+VLJzjVRg8ElkZWYy");
	}
	private: System::Void ext_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void inventory_bt_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->show_inventory) {
			this->Inventorybox->Hide();
			this->show_inventory = false;
		}
		else {
			if (this->isHasCrowbar)
				this->crowbar_txt->Show();
			if (this->isHasMaul)
				this->maul_txt->Show();
			this->Inventorybox->Show();
			this->show_inventory = true;
		}
	}
	private: System::Void Choice_bt1_Click(System::Object^ sender, System::EventArgs^ e) {
		Location_choice(1);
	}
	private: System::Void Choice_bt2_Click(System::Object^ sender, System::EventArgs^ e) {
		Location_choice(2);
	}
	private: System::Void Choice_bt3_Click(System::Object^ sender, System::EventArgs^ e) {
		Location_choice(3);
	}
	private: System::Void Choice_bt4_Click(System::Object^ sender, System::EventArgs^ e) {
		Location_choice(4);
	}
	private: System::Void save_yes_Click(System::Object^ sender, System::EventArgs^ e) {
		Location_choice(1);
	}
	private: System::Void save_no_Click(System::Object^ sender, System::EventArgs^ e) {
		Location_choice(2);
	}
	private: System::Void gameover_bt_Click(System::Object^ sender, System::EventArgs^ e) {
		CP_loading3^ f7 = gcnew CP_loading3();
		f7->Show();
		yard::Hide();
		return;
	}
	private: System::Void Location_choice(int loc_choice) {
		switch (loc_choice) {
		case 1: //0-4 (4 выход в главу 3) особн€к # 5 ворота # 6-7 домик на дереве # 8-9 сарай
			if (this->player_loc == 0) {
				this->player_loc = 1;
				this->location_text->Text = "Approaching the main entrance of the mansion\nYou saw a huge majestic wooden gate with metal edging";
				this->Choice_bt1->Text = "Open";
				this->Choice_bt2->Text = "Leave";
				this->Choice_bt3->Hide();
				this->Choice_bt4->Hide();
				return;
			}
			if (this->player_loc == 1) {
				if (!this->isHasCrowbar && !this->isHasMaul) {
					this->player_loc = 2;
					this->location_text->Text = "You examined the door of the mansion...\nIt seems to be closed on the other side...";
					this->Choice_bt1->Text = "Leave";
					this->Choice_bt2->Hide();
					return;
				}
				else {
					this->player_loc = 3;
					this->location_text->Text = "Closed on the other side...";
					this->Choice_bt1->Text = "Try to open";
					this->Choice_bt2->Text = "Leave";
					return;
				}
			}
			if (this->player_loc == 2) {
				this->player_loc = 0;
				this->location_text->Text = "You are standing in the middle of the courtyard...";
				this->Choice_bt1->Text = "Mansion";
				this->Choice_bt2->Text = "Gate";
				this->Choice_bt3->Text = "Treehouse";
				this->Choice_bt4->Text = "Shed";
				this->Choice_bt1->Show();
				this->Choice_bt2->Show();
				this->Choice_bt3->Show();
				this->Choice_bt4->Show();
				return;
			}
			if (this->player_loc == 3) {
				if (!this->isHasMaul) {
					this->player_loc = 2;
					this->location_text->Text = "Nothing succeeded...";
					this->Choice_bt1->Text = "Leave";
					this->Choice_bt2->Hide();
					return;
				}
				else {
					this->player_loc = 4;
					this->location_text->Text = "You hit the door with all your foolishness...\nThe door flew out of its hinges\nAnd fell to the floor with a crash...";
					this->gameover_bt->Show();
					this->inventory_bt->Hide();
					this->Inventorybox->Hide();
					this->Choice_bt1->Hide();
					this->Choice_bt2->Hide();
					return;
				}
			}
			if (this->player_loc == 4) {
				CP_loading3^ f7 = gcnew CP_loading3();
				f7->Show();
				yard::Hide();
				return;
			}
			if (this->player_loc == 5) {
				this->player_loc = 2;
				if (this->isHasMaul)
					this->location_text->Text = "You swung around and hit the castle with a sledgehammer...\nThe castle was not damaged...\nBut your hands were very sore";
				else if (this->isHasCrowbar && !this->isHasMaul)
					this->location_text->Text = "You tried to remove it with a tire iron...no result";
				else
					this->location_text->Text = "After examining the lock, you realized...\nThat it has not been operational for a long time...\nBut it is very durable...";
				this->Choice_bt1->Text = "Leave";
				this->Choice_bt2->Hide();
				return;
			}
			if (this->player_loc == 6) {
				this->player_loc = 7;
				this->location_text->Text = "Climbing up the stairs to a small balcony\nYou saw that the entrance to the house was boarded up...";
				this->Choice_bt1->Text = "Tear off the boards";
				this->Choice_bt2->Text = "Leave";
				return;
			}
			if (this->player_loc == 7) {
				this->player_loc = 2;
				if (this->isHasCrowbar && !this->isHasMaul) {
					this->location_text->Text = "After tearing off the boards and going inside\nYou saw a small box...\nYou found a sledgehammer...\nBut since the crowbar was very rusty...\nIt broke with a bang in the middle...";
					this->Choice_bt1->Text = "Leave";
					this->Choice_bt2->Hide();
					this->isHasMaul = true;
					this->crowbar_txt->Text += " X";
					this->maul_txt->Show();
					return;
				}
				else
					this->location_text->Text = "Completely sick?!\nHow can I tear the boards off with my bare hands?..";
				this->Choice_bt1->Text = "Leave";
				this->Choice_bt2->Hide();
				return;
			}
			if (this->player_loc == 8) {
				this->player_loc = 9;
				this->location_text->Text = "When you open the door and go inside...\nYou can't see anything..again";
				this->Choice_bt1->Text = "Turn on the light";
				this->Choice_bt2->Text = "Leave";
				return;
			}
			if (this->player_loc == 9) {
				this->player_loc = 2;
				this->location_text->Text = "Turning on the light...\nYou saw a crowbar lying on a shelf\nYou took a crowbar";
				this->isHasCrowbar = true;
				this->crowbar_txt->Show();
				this->Choice_bt1->Text = "Leave";
				this->Choice_bt2->Hide();
			}
			break;
		case 2:
			if (this->player_loc == 0) {
				this->player_loc = 5;
				this->location_text->Text = "You have come to a large iron gate with numerous designs...\nA bulky old lock hangs on it...\nIt seems that it is no longer possible to open it";
				this->Choice_bt1->Text = "Inspect";
				this->Choice_bt2->Text = "Leave";
				this->Choice_bt3->Hide();
				this->Choice_bt4->Hide();
				return;
			}
			if (this->player_loc == 1 || this->player_loc == 3 || this->player_loc == 5 || this->player_loc == 6 || this->player_loc == 7 || this->player_loc == 8 || this->player_loc == 9) {
				this->player_loc = 0;
				this->location_text->Text = "You are standing in the middle of the courtyard...";
				this->Choice_bt1->Text = "Mansion";
				this->Choice_bt2->Text = "Gate";
				this->Choice_bt3->Text = "Treehouse";
				this->Choice_bt4->Text = "Shed";
				this->Choice_bt1->Show();
				this->Choice_bt2->Show();
				this->Choice_bt3->Show();
				this->Choice_bt4->Show();
				return;
			}
			if (this->player_loc == 4) {
				CP_loading3^ f7 = gcnew CP_loading3();
				f7->Show();
				yard::Hide();
				return;
			}
			break;
		case 3:
			if (this->player_loc == 0) {
				if (!this->isHasMaul) {
					this->player_loc = 6;
					this->location_text->Text = "You came to a tree house...\nOld rotten boards nailed to a tree led into it...";
					this->Choice_bt1->Text = "Climb";
					this->Choice_bt2->Text = "Leave";
					this->Choice_bt3->Hide();
					this->Choice_bt4->Hide();
					return;
				}
				else {
					this->player_loc = 2;
					this->location_text->Text = "There is nothing interesting there...\nI don't want to go up there";
					this->Choice_bt1->Text = "Leave";
					this->Choice_bt2->Hide();
					this->Choice_bt3->Hide();
					this->Choice_bt4->Hide();
					return;
				}
			}
			break;
		case 4:
			if (this->player_loc == 0) {
				if (!this->isHasCrowbar) {
					this->player_loc = 8;
					this->location_text->Text = "You have come to a small shed...\nThe door seems to be open";
					this->Choice_bt1->Text = "Enter";
					this->Choice_bt2->Text = "Leave";
					this->Choice_bt3->Hide();
					this->Choice_bt4->Hide();
					return;
				}
				else {
					this->player_loc = 2;
					this->location_text->Text = "There is nothing more interesting here...";
					this->Choice_bt1->Text = "Leave";
					this->Choice_bt2->Hide();
					this->Choice_bt3->Hide();
					this->Choice_bt4->Hide();
				}
			}
			break;
		}
	}
	};
}