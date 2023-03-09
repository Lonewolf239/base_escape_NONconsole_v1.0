#include "CP_loading4.h"
#include <iostream>
namespace baseescapev40 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ first_floor
	/// </summary>
	public ref class first_floor : public System::Windows::Forms::Form
	{
	public:
		first_floor(void)
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
		~first_floor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ developer;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ ext_btn;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ location_text;
	private: System::Windows::Forms::Button^ Choice_bt1;
	private: System::Windows::Forms::Button^ Choice_bt2;
	private: System::Windows::Forms::Button^ Choice_bt3;
	private: System::Windows::Forms::Button^ Choice_bt4;
	private: System::Windows::Forms::Button^ save_yes;
	private: System::Windows::Forms::Button^ save_no;
	private: System::Windows::Forms::GroupBox^ Inventorybox;
	private: System::Windows::Forms::Label^ planks_txt;

	private: System::Windows::Forms::Label^ key_txt;

	private: System::Windows::Forms::Button^ inventory_bt;
	private: int player_loc = 0;
	private: bool show_inventory = false, isHasKey = false, isHasPlanks = false, kitchen = false, next = false;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(first_floor::typeid));
			this->developer = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ext_btn = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->location_text = (gcnew System::Windows::Forms::Label());
			this->save_no = (gcnew System::Windows::Forms::Button());
			this->save_yes = (gcnew System::Windows::Forms::Button());
			this->Choice_bt1 = (gcnew System::Windows::Forms::Button());
			this->Choice_bt2 = (gcnew System::Windows::Forms::Button());
			this->Choice_bt3 = (gcnew System::Windows::Forms::Button());
			this->Choice_bt4 = (gcnew System::Windows::Forms::Button());
			this->Inventorybox = (gcnew System::Windows::Forms::GroupBox());
			this->planks_txt = (gcnew System::Windows::Forms::Label());
			this->key_txt = (gcnew System::Windows::Forms::Label());
			this->inventory_bt = (gcnew System::Windows::Forms::Button());
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
			this->developer->Location = System::Drawing::Point(12, 338);
			this->developer->Name = L"developer";
			this->developer->Size = System::Drawing::Size(141, 20);
			this->developer->TabIndex = 12;
			this->developer->Text = L"By. Lonewolf239";
			this->developer->Click += gcnew System::EventHandler(this, &first_floor::developer_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(237, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(398, 33);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Base_Escape_NONconsole";
			// 
			// ext_btn
			// 
			this->ext_btn->BackColor = System::Drawing::Color::Red;
			this->ext_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ext_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ext_btn->Location = System::Drawing::Point(638, 12);
			this->ext_btn->Name = L"ext_btn";
			this->ext_btn->Size = System::Drawing::Size(30, 30);
			this->ext_btn->TabIndex = 15;
			this->ext_btn->Text = L"X";
			this->ext_btn->UseVisualStyleBackColor = false;
			this->ext_btn->Click += gcnew System::EventHandler(this, &first_floor::ext_btn_Click);
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
			this->location_text->Size = System::Drawing::Size(399, 126);
			this->location_text->TabIndex = 0;
			this->location_text->Text = L"You entered a huge lobby...\r\nThere was a large T-shaped staircase in its center.."
				L".\r\nThe first thing that caught your attention:\r\nStaircase\r\nLounge\r\nKitchen\r\nStor"
				L"age";
			// 
			// save_no
			// 
			this->save_no->BackColor = System::Drawing::Color::LightGreen;
			this->save_no->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->save_no->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->save_no->Location = System::Drawing::Point(16, 114);
			this->save_no->Name = L"save_no";
			this->save_no->Size = System::Drawing::Size(134, 59);
			this->save_no->TabIndex = 9;
			this->save_no->Text = L"No";
			this->save_no->UseVisualStyleBackColor = false;
			this->save_no->Visible = false;
			this->save_no->Click += gcnew System::EventHandler(this, &first_floor::save_no_Click);
			// 
			// save_yes
			// 
			this->save_yes->BackColor = System::Drawing::Color::LightGreen;
			this->save_yes->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->save_yes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->save_yes->Location = System::Drawing::Point(16, 49);
			this->save_yes->Name = L"save_yes";
			this->save_yes->Size = System::Drawing::Size(134, 59);
			this->save_yes->TabIndex = 8;
			this->save_yes->Text = L"Yes";
			this->save_yes->UseVisualStyleBackColor = false;
			this->save_yes->Visible = false;
			this->save_yes->Click += gcnew System::EventHandler(this, &first_floor::save_yes_Click);
			// 
			// Choice_bt1
			// 
			this->Choice_bt1->BackColor = System::Drawing::Color::LightGreen;
			this->Choice_bt1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Choice_bt1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.75F, System::Drawing::FontStyle::Bold));
			this->Choice_bt1->Location = System::Drawing::Point(16, 12);
			this->Choice_bt1->Name = L"Choice_bt1";
			this->Choice_bt1->Size = System::Drawing::Size(134, 59);
			this->Choice_bt1->TabIndex = 7;
			this->Choice_bt1->Text = L"Staircase";
			this->Choice_bt1->UseVisualStyleBackColor = false;
			this->Choice_bt1->Click += gcnew System::EventHandler(this, &first_floor::Choice_bt1_Click);
			// 
			// Choice_bt2
			// 
			this->Choice_bt2->BackColor = System::Drawing::Color::LightGreen;
			this->Choice_bt2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Choice_bt2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.75F, System::Drawing::FontStyle::Bold));
			this->Choice_bt2->Location = System::Drawing::Point(16, 77);
			this->Choice_bt2->Name = L"Choice_bt2";
			this->Choice_bt2->Size = System::Drawing::Size(134, 59);
			this->Choice_bt2->TabIndex = 8;
			this->Choice_bt2->Text = L"Lounge";
			this->Choice_bt2->UseVisualStyleBackColor = false;
			this->Choice_bt2->Click += gcnew System::EventHandler(this, &first_floor::Choice_bt2_Click);
			// 
			// Choice_bt3
			// 
			this->Choice_bt3->BackColor = System::Drawing::Color::LightGreen;
			this->Choice_bt3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Choice_bt3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.75F, System::Drawing::FontStyle::Bold));
			this->Choice_bt3->Location = System::Drawing::Point(16, 142);
			this->Choice_bt3->Name = L"Choice_bt3";
			this->Choice_bt3->Size = System::Drawing::Size(134, 59);
			this->Choice_bt3->TabIndex = 9;
			this->Choice_bt3->Text = L"Kitchen";
			this->Choice_bt3->UseVisualStyleBackColor = false;
			this->Choice_bt3->Click += gcnew System::EventHandler(this, &first_floor::Choice_bt3_Click);
			// 
			// Choice_bt4
			// 
			this->Choice_bt4->BackColor = System::Drawing::Color::LightGreen;
			this->Choice_bt4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Choice_bt4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.75F, System::Drawing::FontStyle::Bold));
			this->Choice_bt4->Location = System::Drawing::Point(16, 207);
			this->Choice_bt4->Name = L"Choice_bt4";
			this->Choice_bt4->Size = System::Drawing::Size(134, 59);
			this->Choice_bt4->TabIndex = 10;
			this->Choice_bt4->Text = L"Storage";
			this->Choice_bt4->UseVisualStyleBackColor = false;
			this->Choice_bt4->Click += gcnew System::EventHandler(this, &first_floor::Choice_bt4_Click);
			// 
			// Inventorybox
			// 
			this->Inventorybox->BackColor = System::Drawing::Color::LightCoral;
			this->Inventorybox->Controls->Add(this->planks_txt);
			this->Inventorybox->Controls->Add(this->key_txt);
			this->Inventorybox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Inventorybox->Location = System::Drawing::Point(468, 258);
			this->Inventorybox->Name = L"Inventorybox";
			this->Inventorybox->Size = System::Drawing::Size(200, 100);
			this->Inventorybox->TabIndex = 13;
			this->Inventorybox->TabStop = false;
			this->Inventorybox->Text = L"Inventory";
			this->Inventorybox->UseCompatibleTextRendering = true;
			this->Inventorybox->Visible = false;
			// 
			// planks_txt
			// 
			this->planks_txt->AutoSize = true;
			this->planks_txt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->planks_txt->Location = System::Drawing::Point(20, 55);
			this->planks_txt->Name = L"planks_txt";
			this->planks_txt->Size = System::Drawing::Size(71, 24);
			this->planks_txt->TabIndex = 0;
			this->planks_txt->Text = L"Planks";
			this->planks_txt->Visible = false;
			// 
			// key_txt
			// 
			this->key_txt->AutoSize = true;
			this->key_txt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->key_txt->Location = System::Drawing::Point(20, 31);
			this->key_txt->Name = L"key_txt";
			this->key_txt->Size = System::Drawing::Size(45, 24);
			this->key_txt->TabIndex = 1;
			this->key_txt->Text = L"Key";
			this->key_txt->Visible = false;
			// 
			// inventory_bt
			// 
			this->inventory_bt->BackColor = System::Drawing::Color::LightCoral;
			this->inventory_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->inventory_bt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->inventory_bt->Location = System::Drawing::Point(16, 272);
			this->inventory_bt->Name = L"inventory_bt";
			this->inventory_bt->Size = System::Drawing::Size(134, 59);
			this->inventory_bt->TabIndex = 11;
			this->inventory_bt->Text = L"Inventory";
			this->inventory_bt->UseVisualStyleBackColor = false;
			this->inventory_bt->Click += gcnew System::EventHandler(this, &first_floor::inventory_bt_Click);
			// 
			// gameover_bt
			// 
			this->gameover_bt->BackColor = System::Drawing::Color::LightGreen;
			this->gameover_bt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->gameover_bt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->gameover_bt->Location = System::Drawing::Point(159, 258);
			this->gameover_bt->Name = L"gameover_bt";
			this->gameover_bt->Size = System::Drawing::Size(303, 100);
			this->gameover_bt->TabIndex = 14;
			this->gameover_bt->Text = L"GAME OVER";
			this->gameover_bt->UseVisualStyleBackColor = false;
			this->gameover_bt->Visible = false;
			this->gameover_bt->Click += gcnew System::EventHandler(this, &first_floor::gameover_bt_Click);
			// 
			// first_floor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkGray;
			this->ClientSize = System::Drawing::Size(680, 360);
			this->Controls->Add(this->gameover_bt);
			this->Controls->Add(this->inventory_bt);
			this->Controls->Add(this->Inventorybox);
			this->Controls->Add(this->save_no);
			this->Controls->Add(this->Choice_bt4);
			this->Controls->Add(this->save_yes);
			this->Controls->Add(this->Choice_bt3);
			this->Controls->Add(this->Choice_bt2);
			this->Controls->Add(this->Choice_bt1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->ext_btn);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->developer);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"first_floor";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Base_Escape";
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
			if (this->isHasKey)
				this->key_txt->Show();
			if (this->isHasPlanks)
				this->planks_txt->Show();
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
		if (!this->next) {
			if (!this->kitchen)
				Application::Exit();
			else {
				this->location_text->Text = "You have been sitting and eating for about 10 minutes...\nWhen suddenly you felt a blow to your back...\nAnd then unbearable pain...\nAfter that, someone grabbed youand threw you to the floor...\nBefore you died, you only managed to see an ax flying at you...\nYOU DIE";
				this->gameover_bt->Text = "DON'T EAT\nGAME OVER";
				this->kitchen = false;
				return;
			}
		}
		else {
			CP_loading4^ f9 = gcnew CP_loading4();
			f9->Show();
			first_floor::Hide();
			return;
		}
	}
	private: System::Void Location_choice(int loc_choice) {
		switch (loc_choice) {
		case 1: //0-2 лестница | 3-6 гостинна€ | 7 кухн€ | 8 подсобка (2 выход с локации)
			if (this->player_loc == 0) {
				this->player_loc = 1;
				if (!this->isHasPlanks) {
					this->location_text->Text = "You have come to a T-shaped staircase...\nA few planks are broken in the middle of the junction\nIt looks like you can jump over";
					this->Choice_bt1->Text = "Jump";
				}
				else {
					this->location_text->Text = "You've come to a T-shaped staircase...\nA few planks are broken in the middle of the junction\nBut now you can make a bridge";
					this->Choice_bt1->Text = "Make bridge";
				}
				this->Choice_bt2->Text = "Leave";
				this->Choice_bt3->Hide();
				this->Choice_bt4->Hide();
				return;
			}
			if (this->player_loc == 1) {
				this->player_loc = 2;
				if (!this->isHasPlanks) {
					this->location_text->Text = "You ran hard...\nBut tripped over a protruding nail and fell into a hole...\nYOU DIE";
					this->gameover_bt->Show();
					this->Inventorybox->Hide();
					this->inventory_bt->Hide();
					this->Choice_bt1->Hide();
					this->Choice_bt2->Hide();
					return;
				}
				else {
					this->location_text->Text = "You put down the plank and fixed it a little with nails\nNow you can go up to the second floor";
					this->gameover_bt->Text = "NEXT";
					this->next = true;
					this->inventory_bt->Hide();
					this->Inventorybox->Hide();
					this->Choice_bt1->Hide();
					this->Choice_bt2->Hide();
					this->gameover_bt->Show();
					return;
				}
			}
			if (this->player_loc == 2) {
			}
			if (this->player_loc == 4) {
				this->player_loc = 5;
				this->location_text->Text = "Entering the living room you saw...\nA large oval table with a bunch of chairs\nComing closer you found a large birthday cake\nLooks delicious.";
				this->Choice_bt1->Text = "Try a cake";
				this->Choice_bt2->Text = "Don't try the cake";
				return;
			}
			if (this->player_loc == 5) {
				this->location_text->Text = "You've tasted the cake...\nAnd it's damn delicious!..\nAlthough with some strange aftertaste\nYour stomach hurts sharply...\nYou feel unbearable pain...\nYOU DIE";
				this->gameover_bt->Text = "CAKE IS A LIE\nGAME OVER";
				this->gameover_bt->Show();
				this->Inventorybox->Hide();
				this->inventory_bt->Hide();
				this->Choice_bt1->Hide();
				this->Choice_bt2->Hide();
				return;
			}
			if (this->player_loc == 6) {
				this->player_loc = 0;
				this->location_text->Text = "You are standing in the center of the hallway...";
				this->Choice_bt1->Text = "Staircase";
				this->Choice_bt2->Text = "Lounge";
				this->Choice_bt3->Text = "Kitchen";
				this->Choice_bt4->Text = "Storage";
				this->Choice_bt1->Show();
				this->Choice_bt2->Show();
				this->Choice_bt3->Show();
				this->Choice_bt4->Show();
				return;
			}
			if (this->player_loc == 7) {
				this->location_text->Text = "Entering the kitchen, you saw...the kitchen is AMAZING...\nThere is a lot of food on the table...\nThe air smells of freshly cooked food...\nYou really wanted to eat...\nGoing to the table, you were unable to stop...\nSitting at the tableand when you start eating...\nYou immediately feel how delicious this food is...";
				this->gameover_bt->Text = "NEXT";
				this->kitchen = true;
				this->gameover_bt->Show();
				this->Inventorybox->Hide();
				this->inventory_bt->Hide();
				this->Choice_bt1->Hide();
				this->Choice_bt2->Hide();
				return;
			}
			if (this->player_loc == 8) {
				if (!this->isHasKey) {
					this->player_loc = 6;
					this->location_text->Text = "How were you going to open that door without a key?";
					this->Choice_bt1->Text = "Leave";
					this->Choice_bt2->Hide();
					return;
				}
				else {
					this->player_loc = 6;
					this->location_text->Text = "You opened the door and went inside...\nYou have found: several boards, a hammerand a couple of nails";
					this->key_txt->Text += " X";
					this->isHasPlanks = true;
					this->planks_txt->Show();
					this->Choice_bt1->Text = "Leave";
					this->Choice_bt2->Hide();
					return;
				}
			}
			break;
		case 2:
			if (this->player_loc == 0) {
				if (!this->isHasKey) {
					this->player_loc = 4;
					this->location_text->Text = "You have reached the door\nThe door is open";
					this->Choice_bt1->Text = "Enter";
					this->Choice_bt2->Text = "Leave";
					this->Choice_bt3->Hide();
					this->Choice_bt4->Hide();
					return;
				}
				else {
					this->player_loc = 6;
					this->location_text->Text = "There is nothing more interesting here...";
					this->Choice_bt1->Text = "Leave";
					this->Choice_bt2->Hide();
					this->Choice_bt3->Hide();
					this->Choice_bt4->Hide();
					return;
				}
			}
			if (this->player_loc == 1 || this->player_loc == 4 || this->player_loc == 7 || this->player_loc == 8) {
				this->player_loc = 0;
				this->location_text->Text = "You are standing in the center of the hallway...";
				this->Choice_bt1->Text = "Staircase";
				this->Choice_bt2->Text = "Lounge";
				this->Choice_bt3->Text = "Kitchen";
				this->Choice_bt4->Text = "Storage";
				this->Choice_bt1->Show();
				this->Choice_bt2->Show();
				this->Choice_bt3->Show();
				this->Choice_bt4->Show();
				return;
			}
			if (this->player_loc == 2) {
				CP_loading4^ f9 = gcnew CP_loading4();
				f9->Show();
				first_floor::Hide();
				return;
			}
			if (this->player_loc == 5) {
				this->player_loc = 6;
				this->location_text->Text = "You decided not to eat this rubbish...\nBecause CAKE IS A LIE...\nSo you took it and threw the cake on the floor\nThere was a key under the cake";
				this->isHasKey = true;
				this->key_txt->Show();
				this->Choice_bt1->Text = "Leave";
				this->Choice_bt2->Hide();
				return;
			}
			break;
		case 3:
			if (this->player_loc == 0) {
				this->player_loc = 7;
				this->location_text->Text = "You approached the kitchen\nLooks open";
				this->Choice_bt1->Text = "Enter";
				this->Choice_bt2->Text = "Leave";
				this->Choice_bt3->Hide();
				this->Choice_bt4->Hide();
				return;
			}
			break;
		case 4:
			if (this->player_loc == 0) {
				if (!this->isHasPlanks) {
					this->player_loc = 8;
					this->location_text->Text = "You have reached the door\nThe door is closed";
					this->Choice_bt1->Text = "Enter";
					this->Choice_bt2->Text = "Leave";
					this->Choice_bt3->Hide();
					this->Choice_bt4->Hide();
					return;
				}
				else {
					this->player_loc = 6;
					this->location_text->Text = "There is nothing more interesting here...";
					this->Choice_bt1->Text = "Leave";
					this->Choice_bt2->Hide();
					this->Choice_bt3->Hide();
					this->Choice_bt4->Hide();
					return;
				}
			}
			break;
		}
	}
	};
}
