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
	public ref class second_floor : public System::Windows::Forms::Form
	{
	public:
		second_floor(void)
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
		~second_floor()
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


	private: System::Windows::Forms::GroupBox^ Inventorybox;
	private: System::Windows::Forms::Label^ books_txt;


	private: System::Windows::Forms::Label^ key_txt;

	private: System::Windows::Forms::Button^ inventory_bt;
	private: int player_loc = 0;
	private: bool show_inventory = false, isHasKey = false, isHasBooks = false, CabinetOpen = false, isHasFirecracker = false, BedroomOpen = false;
	private: System::Windows::Forms::Button^ gameover_bt;
	private: System::Windows::Forms::Label^ firecracker_txt;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(second_floor::typeid));
			this->developer = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->ext_btn = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->location_text = (gcnew System::Windows::Forms::Label());
			this->Choice_bt1 = (gcnew System::Windows::Forms::Button());
			this->Choice_bt2 = (gcnew System::Windows::Forms::Button());
			this->Choice_bt3 = (gcnew System::Windows::Forms::Button());
			this->Choice_bt4 = (gcnew System::Windows::Forms::Button());
			this->Inventorybox = (gcnew System::Windows::Forms::GroupBox());
			this->firecracker_txt = (gcnew System::Windows::Forms::Label());
			this->books_txt = (gcnew System::Windows::Forms::Label());
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
			this->developer->ForeColor = System::Drawing::Color::Black;
			this->developer->Location = System::Drawing::Point(12, 338);
			this->developer->Name = L"developer";
			this->developer->Size = System::Drawing::Size(141, 20);
			this->developer->TabIndex = 12;
			this->developer->Text = L"By. Lonewolf239";
			this->developer->Click += gcnew System::EventHandler(this, &second_floor::developer_Click);
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
			this->ext_btn->Click += gcnew System::EventHandler(this, &second_floor::ext_btn_Click);
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
			this->location_text->Size = System::Drawing::Size(269, 126);
			this->location_text->TabIndex = 0;
			this->location_text->Text = L"You climbed to the second floor...\r\nThe floor creaked under your feet..\r\nBut look"
				L"ing around you found:\r\nCabinet\r\nBedroom\r\nRestroom\r\nAttic";
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
			this->Choice_bt1->Text = L"Cabinet";
			this->Choice_bt1->UseVisualStyleBackColor = false;
			this->Choice_bt1->Click += gcnew System::EventHandler(this, &second_floor::Choice_bt1_Click);
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
			this->Choice_bt2->Text = L"Bedroom";
			this->Choice_bt2->UseVisualStyleBackColor = false;
			this->Choice_bt2->Click += gcnew System::EventHandler(this, &second_floor::Choice_bt2_Click);
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
			this->Choice_bt3->Text = L"Restroom";
			this->Choice_bt3->UseVisualStyleBackColor = false;
			this->Choice_bt3->Click += gcnew System::EventHandler(this, &second_floor::Choice_bt3_Click);
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
			this->Choice_bt4->Text = L"Attic";
			this->Choice_bt4->UseVisualStyleBackColor = false;
			this->Choice_bt4->Click += gcnew System::EventHandler(this, &second_floor::Choice_bt4_Click);
			// 
			// Inventorybox
			// 
			this->Inventorybox->BackColor = System::Drawing::Color::LightCoral;
			this->Inventorybox->Controls->Add(this->firecracker_txt);
			this->Inventorybox->Controls->Add(this->books_txt);
			this->Inventorybox->Controls->Add(this->key_txt);
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
			// firecracker_txt
			// 
			this->firecracker_txt->AutoSize = true;
			this->firecracker_txt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->firecracker_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->firecracker_txt->Location = System::Drawing::Point(20, 65);
			this->firecracker_txt->Name = L"firecracker_txt";
			this->firecracker_txt->Size = System::Drawing::Size(99, 20);
			this->firecracker_txt->TabIndex = 2;
			this->firecracker_txt->Text = L"Firecracker";
			this->firecracker_txt->Visible = false;
			// 
			// books_txt
			// 
			this->books_txt->AutoSize = true;
			this->books_txt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->books_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->books_txt->Location = System::Drawing::Point(20, 45);
			this->books_txt->Name = L"books_txt";
			this->books_txt->Size = System::Drawing::Size(59, 20);
			this->books_txt->TabIndex = 0;
			this->books_txt->Text = L"Books";
			this->books_txt->Visible = false;
			// 
			// key_txt
			// 
			this->key_txt->AutoSize = true;
			this->key_txt->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->key_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->key_txt->Location = System::Drawing::Point(20, 25);
			this->key_txt->Name = L"key_txt";
			this->key_txt->Size = System::Drawing::Size(38, 20);
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
			this->inventory_bt->ForeColor = System::Drawing::Color::Black;
			this->inventory_bt->Location = System::Drawing::Point(16, 272);
			this->inventory_bt->Name = L"inventory_bt";
			this->inventory_bt->Size = System::Drawing::Size(134, 59);
			this->inventory_bt->TabIndex = 11;
			this->inventory_bt->Text = L"Inventory";
			this->inventory_bt->UseVisualStyleBackColor = false;
			this->inventory_bt->Click += gcnew System::EventHandler(this, &second_floor::inventory_bt_Click);
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
			this->gameover_bt->Text = L"GAME OVER";
			this->gameover_bt->UseVisualStyleBackColor = false;
			this->gameover_bt->Visible = false;
			this->gameover_bt->Click += gcnew System::EventHandler(this, &second_floor::gameover_bt_Click);
			// 
			// second_floor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkGray;
			this->ClientSize = System::Drawing::Size(680, 360);
			this->Controls->Add(this->gameover_bt);
			this->Controls->Add(this->inventory_bt);
			this->Controls->Add(this->Inventorybox);
			this->Controls->Add(this->Choice_bt4);
			this->Controls->Add(this->Choice_bt3);
			this->Controls->Add(this->Choice_bt2);
			this->Controls->Add(this->Choice_bt1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->ext_btn);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->developer);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"second_floor";
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
			if (this->isHasBooks)
				this->books_txt->Show();
			if (this->isHasFirecracker)
				this->firecracker_txt->Show();
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
		Application::Exit();
	}
	private: System::Void Location_choice(int loc_choice) {
		switch (loc_choice) {
		case 1: //0-3 кабинет | 4-5 спальн€ | 6-7 комната отдыха | 8-? чердак
			if (this->player_loc == 0) {
				if (this->BedroomOpen || this->isHasFirecracker) {
					this->player_loc = 2;
					this->location_text->Text = "There is nothing more interesting here...";
					this->Choice_bt1->Text = "Leave";
					this->Choice_bt2->Hide();
					this->Choice_bt3->Hide();
					this->Choice_bt4->Hide();
					return;
				}
				else {
					this->player_loc = 1;
					if (!this->CabinetOpen)
						this->location_text->Text = "You went to the door and tried to open...closed...";
					else
						this->location_text->Text = "You went to the door...";
					this->Choice_bt1->Text = "Open";
					this->Choice_bt2->Text = "Leave";
					this->Choice_bt3->Hide();
					this->Choice_bt4->Hide();
					return;
				}
			}
			if (this->player_loc == 1) {
				if (this->isHasKey) {
					if (!this->CabinetOpen) {
						this->player_loc = 2;
						this->location_text->Text = "You opened the door and entered a spacious room...\nIt was a dark gothic office with a bunch of bookshelves\nIt seems that one of the shelves is missing a couple of books...\nWhen leaving, you pressed some kind of lever on the wall...\nIt seems that somewhere - then the door opened...";
						this->Choice_bt1->Text = "Leave";
						this->Choice_bt2->Hide();
						this->CabinetOpen = true;
						this->BedroomOpen = true;
						this->key_txt->Text += " X";
						return;
					}
					else {
						this->player_loc = 3;
						this->location_text->Text = "You entered the office...\nThere are still a couple of books missing from the shelves...\nBut now you have them\nHow to put them?";
						this->Choice_bt1->Text = "Blue - right\nRed - left";
						this->Choice_bt2->Text = "Blue - left\nRed - right";
						return;
					}
				}
				else {
					this->location_text->Text = "You can't...\n- So, teller, wait... What can't you see?\nYes, on the other side of the monitor is mentally retarded!\nGod...how stupid do you have to be open the door without a key...\nI don't want to play like that...I don't want to!..\nYOU DIE";
					this->gameover_bt->Show();
					this->Inventorybox->Hide();
					this->inventory_bt->Hide();
					this->Choice_bt1->Hide();
					this->Choice_bt2->Hide();
					return;
				}
			}
			if (this->player_loc == 2) {
				this->player_loc = 0;
				this->location_text->Text = "You are standing next to the stairs...";
				this->Choice_bt1->Text = "Cabinet";
				this->Choice_bt2->Text = "Bedroom";
				this->Choice_bt3->Text = "Restroom";
				this->Choice_bt4->Text = "Attic";
				this->Choice_bt1->Show();
				this->Choice_bt2->Show();
				this->Choice_bt3->Show();
				this->Choice_bt4->Show();
				return;
			}
			if (this->player_loc == 3) {
				this->player_loc = 2;
				this->location_text->Text = "The books moved into place...\nWhen suddenly a small box crawled out of the wall...\nThere was a firecracker and a lighter in it";
				this->Choice_bt1->Text = "Leave";
				this->Choice_bt2->Hide();
				this->isHasFirecracker = true;
				this->firecracker_txt->Show();
				this->books_txt->Text += " X";
				return;
			}
			if (this->player_loc == 4) {
				if (this->isHasBooks) {
					this->player_loc = 2;
					this->location_text->Text = "There is nothing interesting...";
					this->Choice_bt1->Text = "Leave";
					this->Choice_bt2->Hide();
					return;
				}
				else {
					if (this->BedroomOpen) {
						this->player_loc = 5;
						this->location_text->Text = "You entered a spacious bedroom...\nAfter examining the bedroom, you found:\nBooks on the bed\nCloset\nLeave";
						this->Choice_bt1->Text = "Books on the bed";
						this->Choice_bt2->Text = "Closet";
						this->Choice_bt3->Text = "Leave";
						this->Choice_bt3->Show();
						return;
					}
					else {
						this->player_loc = 2;
						this->location_text->Text = "The door is closed...";
						this->Choice_bt1->Text = "Leave";
						this->Choice_bt2->Hide();
						return;
					}
				}
			}
			if (this->player_loc == 5) {
				this->player_loc = 2;
				this->location_text->Text = "You took the books and hurried out of the bedroom...";
				this->BedroomOpen = false;
				this->isHasBooks = true;
				this->books_txt->Show();
				this->Choice_bt1->Text = "Leave";
				this->Choice_bt2->Hide();
				this->Choice_bt3->Hide();
				return;
			}
			if (this->player_loc == 6) {
				if (this->isHasKey) {
					this->player_loc = 2;
					this->location_text->Text = "There is nothing interesting...";
					this->Choice_bt1->Text = "Leave";
					this->Choice_bt2->Hide();
					return;
				}
				else {
					this->player_loc = 7;
					this->location_text->Text = "You entered the rest room...\nIt was a spacious room with a sofa and sports equipment...\nAmidst all this rubbish...\nYou noticed a key lying on the sofa";
					this->Choice_bt1->Text = "Take key";
					this->Choice_bt2->Text = "Leave";
					this->Choice_bt3->Hide();
					this->Choice_bt4->Hide();
					return;
				}
			}
			if (this->player_loc == 7) {
				this->player_loc = 2;
				this->location_text->Text = "You have taken the key...";
				this->Choice_bt1->Text = "Leave";
				this->Choice_bt2->Hide();
				this->isHasKey = true;
				this->key_txt->Show();
				return;
			}
			if (this->player_loc == 8) {
				this->player_loc = 9;
				this->location_text->Text = "You carefully peeked into the attic...\nIt's full of bats...";
				if (this->isHasFirecracker)
					this->Choice_bt1->Text = "Throw firecracker";
				else
					this->Choice_bt1->Text = "Climb";
				this->Choice_bt2->Text = "Leave";
				this->Choice_bt3->Hide();
				this->Choice_bt4->Hide();
				return;
			}
			if (this->player_loc == 9) {
				if (this->isHasFirecracker) {
					this->location_text->Text = "You lit the fuse and threw the firecracker into the attic...\nThen closed the hatch...\nThere was an explosion...\nAnd then the hellspawn burst into screams...\nWhen everything was quiet, you climbed into the attic...\nIn the center of the attic lay a large box...\nYou looked into it... There are explosives!\nBefore you had time to escape from the attic...\nAn explosion was heard...\nAlas, this is the end of your journey...";
					this->gameover_bt->Text = "Thanks for playing!";
					this->gameover_bt->Show();
					this->Inventorybox->Hide();
					this->inventory_bt->Hide();
					this->Choice_bt1->Hide();
					this->Choice_bt2->Hide();
					return;
				}
				else {
					this->location_text->Text = "You climbed into the attic and closed the hatch behind you...\nBats immediately attacked you...\nThey inflicted heavy injuries on you with each attack...\nYOU DIE";
					this->gameover_bt->Show();
					this->Inventorybox->Hide();
					this->inventory_bt->Hide();
					this->Choice_bt1->Hide();
					this->Choice_bt2->Hide();
					return;
				}
			}
			break;
		case 2:
			if (this->player_loc == 0) {
				this->player_loc = 4;
				this->location_text->Text = "You have reached the door...";
				this->Choice_bt1->Text = "Open";
				this->Choice_bt2->Text = "Leave";
				this->Choice_bt3->Hide();
				this->Choice_bt4->Hide();
				return;
			}
			if (this->player_loc == 1 || this->player_loc == 4 || this->player_loc >= 6) {
				this->player_loc = 0;
				this->location_text->Text = "You are standing next to the stairs...";
				this->Choice_bt1->Text = "Cabinet";
				this->Choice_bt2->Text = "Bedroom";
				this->Choice_bt3->Text = "Restroom";
				this->Choice_bt4->Text = "Attic";
				this->Choice_bt1->Show();
				this->Choice_bt2->Show();
				this->Choice_bt3->Show();
				this->Choice_bt4->Show();
				return;
			}
			if (this->player_loc == 3) {
				this->location_text->Text = "The books moved...but immediately flew out and fell to the floor...\nThe door to the study slammed shut...\nApparently you should have watched the Matrix more carefully\nYOU DIE";
				this->gameover_bt->Show();
				this->Inventorybox->Hide();
				this->inventory_bt->Hide();
				this->Choice_bt1->Hide();
				this->Choice_bt2->Hide();
				return;
			}
			if (this->player_loc == 5) {
				this->location_text->Text = "You were looking at an old wardrobe...\nWhen you suddenly heard someone's footsteps in the corridor...\nYou opened it and climbed into the wardrobe...\nAs soon as you entered, the doors closed...\nYou tried to open them, but failed...\nIn some then a long wide spike began to drive out from below...\nYOU DIE";
				this->gameover_bt->Show();
				this->Inventorybox->Hide();
				this->inventory_bt->Hide();
				this->Choice_bt1->Hide();
				this->Choice_bt2->Hide();
				this->Choice_bt3->Hide();
				return;
			}
			break;
		case 3:
			if (this->player_loc == 0) {
				this->player_loc = 6;
				this->location_text->Text = "You have reached the door...";
				this->Choice_bt1->Text = "Open";
				this->Choice_bt2->Text = "Leave";
				this->Choice_bt3->Hide();
				this->Choice_bt4->Hide();
				return;
			}
			if (this->player_loc == 5) {
				this->player_loc = 0;
				this->location_text->Text = "You are standing next to the stairs...";
				this->Choice_bt1->Text = "Cabinet";
				this->Choice_bt2->Text = "Bedroom";
				this->Choice_bt3->Text = "Restroom";
				this->Choice_bt4->Text = "Attic";
				this->Choice_bt1->Show();
				this->Choice_bt2->Show();
				this->Choice_bt3->Show();
				this->Choice_bt4->Show();
				return;
			}
			break;
		case 4:
			if (this->player_loc == 0) {
				this->player_loc = 8;
				this->location_text->Text = "You have reached the attic hatch...\nStrange sounds are coming from there...";
				this->Choice_bt1->Text = "Peek";
				this->Choice_bt2->Text = "Leave";
				this->Choice_bt3->Hide();
				this->Choice_bt4->Hide();
				return;
			}
			break;
		}
	}
	};
}
