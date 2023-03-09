#include <iostream>
#include "CP_loading2.h"
namespace baseescapev40 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Game
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form
	{
	public:
		Game(void)
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
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ location_text;
	private: System::Windows::Forms::Button^ Choice_bt1;
	private: System::Windows::Forms::Button^ Choice_bt2;
	private: System::Windows::Forms::Button^ Choice_bt4;
	private: System::Windows::Forms::Button^ Choice_bt3;
	private: System::Windows::Forms::Button^ inventory_bt;
	private: System::Windows::Forms::Label^ developer;
	private: System::Windows::Forms::GroupBox^ Inventorybox;
	private: System::Windows::Forms::Label^ knife_txt;
	private: System::Windows::Forms::Label^ key_txt;
	private: bool show_inventory = false, isHasKnife = false, isHasKey = false;
	private: System::Windows::Forms::Button^ ext_btn;
	private: int player_loc = 0;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ save_no;

	private: System::Windows::Forms::Button^ save_yes;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Game::typeid));
			this->location_text = (gcnew System::Windows::Forms::Label());
			this->Choice_bt1 = (gcnew System::Windows::Forms::Button());
			this->Choice_bt2 = (gcnew System::Windows::Forms::Button());
			this->Choice_bt4 = (gcnew System::Windows::Forms::Button());
			this->Choice_bt3 = (gcnew System::Windows::Forms::Button());
			this->inventory_bt = (gcnew System::Windows::Forms::Button());
			this->developer = (gcnew System::Windows::Forms::Label());
			this->Inventorybox = (gcnew System::Windows::Forms::GroupBox());
			this->knife_txt = (gcnew System::Windows::Forms::Label());
			this->key_txt = (gcnew System::Windows::Forms::Label());
			this->ext_btn = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->save_no = (gcnew System::Windows::Forms::Button());
			this->save_yes = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->gameover_bt = (gcnew System::Windows::Forms::Button());
			this->Inventorybox->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// location_text
			// 
			this->location_text->AutoSize = true;
			this->location_text->BackColor = System::Drawing::Color::Silver;
			this->location_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11, System::Drawing::FontStyle::Bold));
			this->location_text->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->location_text->Location = System::Drawing::Point(0, 0);
			this->location_text->Name = L"location_text";
			this->location_text->Size = System::Drawing::Size(498, 144);
			this->location_text->TabIndex = 0;
			this->location_text->Text = resources->GetString(L"location_text.Text");
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
			this->Choice_bt1->Text = L"Window";
			this->Choice_bt1->UseVisualStyleBackColor = false;
			this->Choice_bt1->Click += gcnew System::EventHandler(this, &Game::Choice_bt1_Click);
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
			this->Choice_bt2->Text = L"Closet";
			this->Choice_bt2->UseVisualStyleBackColor = false;
			this->Choice_bt2->Click += gcnew System::EventHandler(this, &Game::Choice_bt2_Click);
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
			this->Choice_bt4->Text = L"Carpet";
			this->Choice_bt4->UseVisualStyleBackColor = false;
			this->Choice_bt4->Click += gcnew System::EventHandler(this, &Game::Choice_bt4_Click);
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
			this->Choice_bt3->Text = L"Door";
			this->Choice_bt3->UseVisualStyleBackColor = false;
			this->Choice_bt3->Click += gcnew System::EventHandler(this, &Game::Choice_bt3_Click);
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
			this->inventory_bt->Click += gcnew System::EventHandler(this, &Game::inventory_bt_Click);
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
			this->developer->Click += gcnew System::EventHandler(this, &Game::developer_Click);
			// 
			// Inventorybox
			// 
			this->Inventorybox->BackColor = System::Drawing::Color::LightCoral;
			this->Inventorybox->Controls->Add(this->knife_txt);
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
			// knife_txt
			// 
			this->knife_txt->AutoSize = true;
			this->knife_txt->Location = System::Drawing::Point(20, 31);
			this->knife_txt->Name = L"knife_txt";
			this->knife_txt->Size = System::Drawing::Size(57, 24);
			this->knife_txt->TabIndex = 1;
			this->knife_txt->Text = L"Knife";
			this->knife_txt->Visible = false;
			// 
			// key_txt
			// 
			this->key_txt->AutoSize = true;
			this->key_txt->Location = System::Drawing::Point(20, 55);
			this->key_txt->Name = L"key_txt";
			this->key_txt->Size = System::Drawing::Size(45, 24);
			this->key_txt->TabIndex = 0;
			this->key_txt->Text = L"Key";
			this->key_txt->Visible = false;
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
			this->ext_btn->Click += gcnew System::EventHandler(this, &Game::ext_btn_Click);
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
			this->save_no->Click += gcnew System::EventHandler(this, &Game::save_no_Click);
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
			this->save_yes->Click += gcnew System::EventHandler(this, &Game::save_yes_Click);
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
			this->gameover_bt->Text = L"NEXT";
			this->gameover_bt->UseVisualStyleBackColor = false;
			this->gameover_bt->Visible = false;
			this->gameover_bt->Click += gcnew System::EventHandler(this, &Game::gameover_bt_Click);
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkGray;
			this->ClientSize = System::Drawing::Size(680, 360);
			this->Controls->Add(this->gameover_bt);
			this->Controls->Add(this->save_no);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->save_yes);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->ext_btn);
			this->Controls->Add(this->Inventorybox);
			this->Controls->Add(this->developer);
			this->Controls->Add(this->inventory_bt);
			this->Controls->Add(this->Choice_bt3);
			this->Controls->Add(this->Choice_bt4);
			this->Controls->Add(this->Choice_bt2);
			this->Controls->Add(this->Choice_bt1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Game";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Base_Escape";
			this->Inventorybox->ResumeLayout(false);
			this->Inventorybox->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void inventory_bt_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->show_inventory) {
			this->Inventorybox->Hide();
			this->show_inventory = false;
		}
		else {
			if (this->isHasKnife)
				this->knife_txt->Show();
			if (this->isHasKey)
				this->key_txt->Show();
			this->Inventorybox->Show();
			this->show_inventory = true;
		}
	}
	private: System::Void gameover_bt_Click(System::Object^ sender, System::EventArgs^ e) {
		CP_loading2^ f5 = gcnew CP_loading2();
		f5->Show();
		Game::Hide();
	}
	private: System::Void ext_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
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
	private: System::Void developer_Click(System::Object^ sender, System::EventArgs^ e) {
		system("start https://t.me/+VLJzjVRg8ElkZWYy");
	}
	private: System::Void save_yes_Click(System::Object^ sender, System::EventArgs^ e) {
		Location_choice(1);
	}
	private: System::Void save_no_Click(System::Object^ sender, System::EventArgs^ e) {
		Location_choice(2);
	}
	private: System::Void Location_choice(int loc_choice) {
		switch (loc_choice) {
		case 1: //0-2 окно 3-6 шкаф 7-8 дверь 9-11 ковЄр
			if (this->player_loc == 0) { //у окна
				player_loc = 1;
				this->location_text->Text = "You went to the window and tried to open it...it's closed";
				this->Choice_bt1->Text = "Look";
				this->Choice_bt2->Text = "Leave";
				this->Choice_bt3->Hide();
				this->Choice_bt4->Hide();
				return;
			}
			if (this->player_loc == 1) { //смотрит в окно
				this->player_loc = 2;
				this->location_text->Text = "You looked out the window...there is night";
				this->Choice_bt1->Text = "Leave";
				this->Choice_bt2->Hide();
				return;
			}
			if (this->player_loc == 2 || this->player_loc == 6 || this->player_loc == 11) { //ушЄл от окна
				this->player_loc = 0;
				this->location_text->Text = "You are standing in the center of the basement...";
				this->Choice_bt1->Text = "Window";
				this->Choice_bt2->Text = "Closet";
				this->Choice_bt3->Text = "Door";
				this->Choice_bt2->Show();
				this->Choice_bt3->Show();
				this->Choice_bt4->Show();
				return;
			}
			if (this->player_loc == 3) { //открыл верхний €щик
				this->player_loc = 4;
				this->location_text->Text = "You have opened the top drawer... it is empty";
				this->Choice_bt1->Text = "Open bottom";
				this->Choice_bt2->Text = "Leave";
				this->Choice_bt3->Hide();
				return;
			}
			if (this->player_loc == 4) { //открыл нижний €щик (через вверхний)
				if (!this->isHasKnife) {
					this->player_loc = 5;
					this->location_text->Text = "You have opened the bottom drawer... there is a knife";
					this->Choice_bt1->Text = "Take knife";
					this->Choice_bt2->Text = "Leave";
					this->Choice_bt3->Hide();
					return;
				}
				else {
					this->player_loc = 6;
					this->location_text->Text = "You have opened the bottom drawer... it is empty";
					this->Choice_bt1->Text = "Leave";
					this->Choice_bt2->Hide();
					this->Choice_bt3->Hide();
					return;
				}
			}
			if (this->player_loc == 5) { //вз€л нож
				this->isHasKnife = true;
				this->knife_txt->Show();
				this->player_loc = 6;
				this->location_text->Text = "You took a knife...";
				this->Choice_bt1->Text = "Leave";
				this->Choice_bt2->Hide();
				return;
			}
			if (this->player_loc == 7) { //открыл дверь
				if (this->isHasKey) {
					this->player_loc = 8;
					this->inventory_bt->Hide();
					this->Inventorybox->Hide();
					this->gameover_bt->Show();
					this->location_text->Text = "You inserted the key into the lock and turned...\nthe lock opened and fell to the floor with a clang of metal...";
					this->Choice_bt1->Hide();
					this->Choice_bt2->Hide();
					this->Choice_bt3->Hide();
					this->Choice_bt4->Hide();
					return;
				}
				else {
					this->player_loc = 8;
					this->location_text->Text = "I can't open this door...";
					this->Choice_bt1->Text = "Leave";
					this->Choice_bt2->Hide();
					this->Choice_bt3->Hide();
					this->Choice_bt4->Hide();
					return;
				}
			}
			if (this->player_loc == 8) { //открыл дверь
				if (this->isHasKey) {
					CP_loading2^ f5 = gcnew CP_loading2();
					f5->Show();
					Game::Hide();
					return;
				}
				else {
					this->player_loc = 0;
					this->location_text->Text = "You are standing in the center of the basement...";
					this->Choice_bt1->Text = "Window";
					this->Choice_bt2->Text = "Closet";
					this->Choice_bt2->Show();
					this->Choice_bt3->Show();
					this->Choice_bt4->Show();
					return;
				}
			}
			if (this->player_loc == 9) { //подошЄл к ковру
				if (this->isHasKey) {
					this->player_loc = 11;
					this->location_text->Text = "You looked at the carpet under your feet...\n...why did you cut it in the shape of Among Us?...";
					this->Choice_bt1->Text = "Leave";
					this->Choice_bt2->Hide();
					return;
				}
				else {
					this->player_loc = 10;
					this->location_text->Text = "You sat down on the carpet and felt something in the center...";
					this->Choice_bt1->Text = "Cut";
					this->Choice_bt2->Text = "Leave";
					return;
				}
			}
			if (this->player_loc == 10) {
				if (this->isHasKnife) {
					this->player_loc = 11;
					this->location_text->Text = "You cut the carpet with difficulty...\nYou broke the Knife\nbut you got the Key from under the carpet";
					this->knife_txt->Text += " X";
					this->isHasKey = true;
					this->key_txt->Show();
					this->Choice_bt1->Text = "Leave";
					this->Choice_bt2->Hide();
					return;
				}
				else {
					this->player_loc = 11;
					this->location_text->Text = "You can't do it...";
					this->Choice_bt1->Text = "Leave";
					this->Choice_bt2->Hide();
					return;
				}
			}
			break;
		case 2:
			if (this->player_loc == 0) { //подошЄл к шкафу
				this->player_loc = 3;
				this->location_text->Text = "You have reached a closet...\nIt is divided into two compartments, a lower and an upper one...";
				this->Choice_bt1->Text = "Open up";
				this->Choice_bt2->Text = "Open bottom";
				this->Choice_bt3->Text = "Leave";
				this->Choice_bt4->Hide();
				return;
			}
			if (this->player_loc == 3) { //открыл нижний €щик
				if (!this->isHasKnife) {
					this->player_loc = 5;
					this->location_text->Text = "You have opened the bottom drawer... there is a knife";
					this->Choice_bt1->Text = "Take knife";
					this->Choice_bt2->Text = "Leave";
					this->Choice_bt3->Hide();
					return;
				}
				else {
					this->player_loc = 6;
					this->location_text->Text = "You have opened the bottom drawer... it is empty";
					this->Choice_bt1->Text = "Leave";
					this->Choice_bt2->Hide();
					this->Choice_bt3->Hide();
					return;
				}
			}
			if (this->player_loc == 8) { //не сохранилс€
				CP_loading2^ f5 = gcnew CP_loading2();
				f5->Show();
				Game::Hide();
				return;
			}
			if (this->player_loc == 1 || this->player_loc == 4 || this->player_loc == 5 || this->player_loc == 7 || this->player_loc == 9 || this->player_loc == 10) { //ушЄл от ковра
				this->player_loc = 0;
				this->location_text->Text = "You are standing in the center of the basement...";
				this->Choice_bt1->Text = "Window";
				this->Choice_bt2->Text = "Closet";
				this->Choice_bt3->Text = "Door";
				this->Choice_bt4->Text = "Carpet";
				this->Choice_bt1->Show();
				this->Choice_bt2->Show();
				this->Choice_bt3->Show();
				this->Choice_bt4->Show();
				return;
			}
			break;
		case 3:
			if (this->player_loc == 0) { //подошЄл к двери
				this->player_loc = 7;
				this->location_text->Text = "You have reached the door... it is locked";
				this->Choice_bt1->Text = "Open";
				this->Choice_bt2->Text = "Leave";
				this->Choice_bt3->Hide();
				this->Choice_bt4->Hide();
				return;
			}
			if (this->player_loc == 3) { //ушЄл от шкафа (не открыва€)
				this->player_loc = 0;
				this->location_text->Text = "You are standing in the center of the basement...";
				this->Choice_bt1->Text = "Window";
				this->Choice_bt2->Text = "Closet";
				this->Choice_bt3->Text = "Door";
				this->Choice_bt3->Show();
				this->Choice_bt4->Show();
				return;
			}
			break;
		case 4:
			if (this->player_loc == 0) { //подошЄл к ковру
				this->player_loc = 9;
				this->location_text->Text = "You looked at the carpet under your feet...\nIt looks like there's something under it...\nbut its edges are concreted...";
				this->Choice_bt1->Text = "Inspect";
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
