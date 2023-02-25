#pragma once

namespace task140 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Task140
	/// </summary>
	public ref class Task140 : public System::Windows::Forms::Form
	{
	public:
		Task140(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Task140()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ user_input;
	private: System::Windows::Forms::Button^ btn_enter_index;
	private: System::Windows::Forms::Label^ label_number;
	private: System::Windows::Forms::Label^ label1;


	protected:



	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->user_input = (gcnew System::Windows::Forms::TextBox());
			this->btn_enter_index = (gcnew System::Windows::Forms::Button());
			this->label_number = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// user_input
			// 
			this->user_input->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->user_input->Location = System::Drawing::Point(100, 12);
			this->user_input->Name = L"user_input";
			this->user_input->Size = System::Drawing::Size(100, 29);
			this->user_input->TabIndex = 0;
			this->user_input->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// btn_enter_index
			// 
			this->btn_enter_index->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_enter_index->Location = System::Drawing::Point(100, 47);
			this->btn_enter_index->Name = L"btn_enter_index";
			this->btn_enter_index->Size = System::Drawing::Size(100, 23);
			this->btn_enter_index->TabIndex = 1;
			this->btn_enter_index->Text = L"Enter";
			this->btn_enter_index->UseVisualStyleBackColor = true;
			this->btn_enter_index->Click += gcnew System::EventHandler(this, &Task140::btn_enter_index_Click);
			// 
			// label_number
			// 
			this->label_number->AutoSize = true;
			this->label_number->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 128, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label_number->Location = System::Drawing::Point(67, 86);
			this->label_number->Name = L"label_number";
			this->label_number->Size = System::Drawing::Size(0, 193);
			this->label_number->TabIndex = 2;
			this->label_number->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(70, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(24, 24);
			this->label1->TabIndex = 3;
			this->label1->Text = L"k:";
			// 
			// Task140
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(300, 300);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label_number);
			this->Controls->Add(this->btn_enter_index);
			this->Controls->Add(this->user_input);
			this->Name = L"Task140";
			this->Text = L"Task 1.40";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_enter_index_Click(System::Object^ sender, System::EventArgs^ e) {
		if (user_input->Text == "") {
			MessageBox::Show(this, "Wrong index!\n1 < k < 180", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		for (int i = 0; i < (user_input->Text->Length); i++) {
			if ((System::Char::IsDigit(user_input->Text[i]) == false)) {
				MessageBox::Show(this, "Wrong index!\n1 < k < 180", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
		}

		if ((Convert::ToInt32(user_input->Text) >= 1) && (Convert::ToInt32(user_input->Text) <= 180)) {
			int flag = 0, number = 0;
			for (int i = 10; i <= 99; i++) {
				flag += 2;
				if (flag == Convert::ToInt32(user_input->Text))
					number = i % 10;
				else if ((flag - 1) == Convert::ToInt32(user_input->Text))
					number = i / 10;

				this->label_number->Text = Convert::ToString(number);
			}
		} 
		else {
			this->label_number->Text = "";
			MessageBox::Show(this, "Wrong index!\n1 < k < 180", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	};
}
