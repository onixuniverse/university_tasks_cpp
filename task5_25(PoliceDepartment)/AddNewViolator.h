#pragma once
#include "Templates.h"

namespace PoliceDepartment {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AddViolatorForm
	/// </summary>
	public ref class AddViolatorForm : public System::Windows::Forms::Form
	{
	public:
		AddViolatorForm(void)
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
		~AddViolatorForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ lastNameTextBox;
	protected:
	private: System::Windows::Forms::TextBox^ patronymicTextBox;
	private: System::Windows::Forms::TextBox^ firstNameTextBox;
	private: System::Windows::Forms::Label^ firstNameLbl;
	private: System::Windows::Forms::Label^ patronymicLbl;
	private: System::Windows::Forms::Label^ lastNameLbl;
	private: System::Windows::Forms::Label^ dateBirthLbl;
	private: System::Windows::Forms::CheckBox^ isCriminalRecord;




	private: System::Windows::Forms::TextBox^ measurePunishmentTextBox;
	private: System::Windows::Forms::TextBox^ termImprisonmentTextBox;


	private: System::Windows::Forms::Button^ saveBtn;
	private: System::Windows::Forms::Button^ canceBtn;


	private: System::Windows::Forms::DateTimePicker^ dateBirthTimePicker;
	private: System::Windows::Forms::GroupBox^ criminalRecordGroupBox;


	private: System::Windows::Forms::RadioButton^ isTermImprisonment;
	private: System::Windows::Forms::RadioButton^ isMeasurePunishment;
	private: System::Windows::Forms::RadioButton^ isNickname;
	private: System::Windows::Forms::Label^ lblDays;




	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lastNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->patronymicTextBox = (gcnew System::Windows::Forms::TextBox());
			this->firstNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->firstNameLbl = (gcnew System::Windows::Forms::Label());
			this->patronymicLbl = (gcnew System::Windows::Forms::Label());
			this->lastNameLbl = (gcnew System::Windows::Forms::Label());
			this->dateBirthLbl = (gcnew System::Windows::Forms::Label());
			this->isCriminalRecord = (gcnew System::Windows::Forms::CheckBox());
			this->measurePunishmentTextBox = (gcnew System::Windows::Forms::TextBox());
			this->termImprisonmentTextBox = (gcnew System::Windows::Forms::TextBox());
			this->saveBtn = (gcnew System::Windows::Forms::Button());
			this->canceBtn = (gcnew System::Windows::Forms::Button());
			this->dateBirthTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->criminalRecordGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->lblDays = (gcnew System::Windows::Forms::Label());
			this->isTermImprisonment = (gcnew System::Windows::Forms::RadioButton());
			this->isMeasurePunishment = (gcnew System::Windows::Forms::RadioButton());
			this->isNickname = (gcnew System::Windows::Forms::RadioButton());
			this->criminalRecordGroupBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// lastNameTextBox
			// 
			this->lastNameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lastNameTextBox->Location = System::Drawing::Point(173, 15);
			this->lastNameTextBox->MaxLength = 32;
			this->lastNameTextBox->Name = L"lastNameTextBox";
			this->lastNameTextBox->Size = System::Drawing::Size(459, 29);
			this->lastNameTextBox->TabIndex = 16;
			this->lastNameTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddViolatorForm::lastNameTextBox_KeyPress);
			// 
			// patronymicTextBox
			// 
			this->patronymicTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->patronymicTextBox->Location = System::Drawing::Point(173, 85);
			this->patronymicTextBox->MaxLength = 32;
			this->patronymicTextBox->Name = L"patronymicTextBox";
			this->patronymicTextBox->Size = System::Drawing::Size(459, 29);
			this->patronymicTextBox->TabIndex = 17;
			this->patronymicTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddViolatorForm::patronymicTextBox_KeyPress);
			// 
			// firstNameTextBox
			// 
			this->firstNameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->firstNameTextBox->Location = System::Drawing::Point(173, 50);
			this->firstNameTextBox->MaxLength = 32;
			this->firstNameTextBox->Name = L"firstNameTextBox";
			this->firstNameTextBox->Size = System::Drawing::Size(459, 29);
			this->firstNameTextBox->TabIndex = 18;
			this->firstNameTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddViolatorForm::firstNameTextBox_KeyPress);
			// 
			// firstNameLbl
			// 
			this->firstNameLbl->AutoSize = true;
			this->firstNameLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->firstNameLbl->Location = System::Drawing::Point(116, 55);
			this->firstNameLbl->Name = L"firstNameLbl";
			this->firstNameLbl->Size = System::Drawing::Size(51, 24);
			this->firstNameLbl->TabIndex = 19;
			this->firstNameLbl->Text = L"Имя:";
			// 
			// patronymicLbl
			// 
			this->patronymicLbl->AutoSize = true;
			this->patronymicLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->patronymicLbl->Location = System::Drawing::Point(64, 90);
			this->patronymicLbl->Name = L"patronymicLbl";
			this->patronymicLbl->Size = System::Drawing::Size(103, 24);
			this->patronymicLbl->TabIndex = 20;
			this->patronymicLbl->Text = L"Отчество:";
			// 
			// lastNameLbl
			// 
			this->lastNameLbl->AutoSize = true;
			this->lastNameLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lastNameLbl->Location = System::Drawing::Point(71, 20);
			this->lastNameLbl->Name = L"lastNameLbl";
			this->lastNameLbl->Size = System::Drawing::Size(96, 24);
			this->lastNameLbl->TabIndex = 21;
			this->lastNameLbl->Text = L"Фамилия:";
			// 
			// dateBirthLbl
			// 
			this->dateBirthLbl->AutoSize = true;
			this->dateBirthLbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dateBirthLbl->Location = System::Drawing::Point(12, 125);
			this->dateBirthLbl->Name = L"dateBirthLbl";
			this->dateBirthLbl->Size = System::Drawing::Size(155, 24);
			this->dateBirthLbl->TabIndex = 22;
			this->dateBirthLbl->Text = L"Дата рождения:";
			// 
			// isCriminalRecord
			// 
			this->isCriminalRecord->AutoSize = true;
			this->isCriminalRecord->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->isCriminalRecord->Location = System::Drawing::Point(16, 171);
			this->isCriminalRecord->Name = L"isCriminalRecord";
			this->isCriminalRecord->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->isCriminalRecord->Size = System::Drawing::Size(129, 28);
			this->isCriminalRecord->TabIndex = 23;
			this->isCriminalRecord->Text = L"Судимость";
			this->isCriminalRecord->UseVisualStyleBackColor = true;
			this->isCriminalRecord->CheckedChanged += gcnew System::EventHandler(this, &AddViolatorForm::isCriminalRecord_CheckedChanged);
			// 
			// measurePunishmentTextBox
			// 
			this->measurePunishmentTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->measurePunishmentTextBox->Location = System::Drawing::Point(189, 63);
			this->measurePunishmentTextBox->MaxLength = 64;
			this->measurePunishmentTextBox->Name = L"measurePunishmentTextBox";
			this->measurePunishmentTextBox->ReadOnly = true;
			this->measurePunishmentTextBox->Size = System::Drawing::Size(388, 29);
			this->measurePunishmentTextBox->TabIndex = 28;
			// 
			// termImprisonmentTextBox
			// 
			this->termImprisonmentTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->termImprisonmentTextBox->Location = System::Drawing::Point(189, 98);
			this->termImprisonmentTextBox->MaxLength = 32;
			this->termImprisonmentTextBox->Name = L"termImprisonmentTextBox";
			this->termImprisonmentTextBox->ReadOnly = true;
			this->termImprisonmentTextBox->Size = System::Drawing::Size(82, 29);
			this->termImprisonmentTextBox->TabIndex = 30;
			this->termImprisonmentTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &AddViolatorForm::termImprisonmentTextBox_KeyPress);
			// 
			// saveBtn
			// 
			this->saveBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->saveBtn->Location = System::Drawing::Point(449, 378);
			this->saveBtn->Name = L"saveBtn";
			this->saveBtn->Size = System::Drawing::Size(183, 54);
			this->saveBtn->TabIndex = 31;
			this->saveBtn->Text = L"Сохранить";
			this->saveBtn->UseVisualStyleBackColor = true;
			this->saveBtn->Click += gcnew System::EventHandler(this, &AddViolatorForm::saveBtn_Click);
			// 
			// canceBtn
			// 
			this->canceBtn->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->canceBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->canceBtn->Location = System::Drawing::Point(246, 378);
			this->canceBtn->Name = L"canceBtn";
			this->canceBtn->Size = System::Drawing::Size(183, 54);
			this->canceBtn->TabIndex = 32;
			this->canceBtn->Text = L"Отмена";
			this->canceBtn->UseVisualStyleBackColor = true;
			this->canceBtn->Click += gcnew System::EventHandler(this, &AddViolatorForm::canceBtn_Click);
			// 
			// dateBirthTimePicker
			// 
			this->dateBirthTimePicker->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->dateBirthTimePicker->Location = System::Drawing::Point(173, 120);
			this->dateBirthTimePicker->MaxDate = System::DateTime(2023, 4, 9, 22, 41, 16, 852);
			this->dateBirthTimePicker->MinDate = System::DateTime(1900, 1, 1, 0, 0, 0, 0);
			this->dateBirthTimePicker->Name = L"dateBirthTimePicker";
			this->dateBirthTimePicker->Size = System::Drawing::Size(211, 29);
			this->dateBirthTimePicker->TabIndex = 34;
			this->dateBirthTimePicker->Value = System::DateTime(2023, 4, 9, 0, 0, 0, 0);
			// 
			// criminalRecordGroupBox
			// 
			this->criminalRecordGroupBox->Controls->Add(this->lblDays);
			this->criminalRecordGroupBox->Controls->Add(this->isTermImprisonment);
			this->criminalRecordGroupBox->Controls->Add(this->isMeasurePunishment);
			this->criminalRecordGroupBox->Controls->Add(this->isNickname);
			this->criminalRecordGroupBox->Controls->Add(this->measurePunishmentTextBox);
			this->criminalRecordGroupBox->Controls->Add(this->termImprisonmentTextBox);
			this->criminalRecordGroupBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->criminalRecordGroupBox->Location = System::Drawing::Point(16, 195);
			this->criminalRecordGroupBox->Name = L"criminalRecordGroupBox";
			this->criminalRecordGroupBox->Size = System::Drawing::Size(616, 156);
			this->criminalRecordGroupBox->TabIndex = 35;
			this->criminalRecordGroupBox->TabStop = false;
			this->criminalRecordGroupBox->Visible = false;
			// 
			// lblDays
			// 
			this->lblDays->AutoSize = true;
			this->lblDays->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblDays->Location = System::Drawing::Point(277, 103);
			this->lblDays->Name = L"lblDays";
			this->lblDays->Size = System::Drawing::Size(55, 24);
			this->lblDays->TabIndex = 36;
			this->lblDays->Text = L"дней";
			// 
			// isTermImprisonment
			// 
			this->isTermImprisonment->AutoSize = true;
			this->isTermImprisonment->Location = System::Drawing::Point(6, 99);
			this->isTermImprisonment->Name = L"isTermImprisonment";
			this->isTermImprisonment->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->isTermImprisonment->Size = System::Drawing::Size(169, 28);
			this->isTermImprisonment->TabIndex = 2;
			this->isTermImprisonment->TabStop = true;
			this->isTermImprisonment->Text = L"Срок наказания";
			this->isTermImprisonment->UseVisualStyleBackColor = true;
			this->isTermImprisonment->CheckedChanged += gcnew System::EventHandler(this, &AddViolatorForm::isTermImprisonment_CheckedChanged);
			// 
			// isMeasurePunishment
			// 
			this->isMeasurePunishment->AutoSize = true;
			this->isMeasurePunishment->Location = System::Drawing::Point(6, 64);
			this->isMeasurePunishment->Name = L"isMeasurePunishment";
			this->isMeasurePunishment->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->isMeasurePunishment->Size = System::Drawing::Size(173, 28);
			this->isMeasurePunishment->TabIndex = 1;
			this->isMeasurePunishment->TabStop = true;
			this->isMeasurePunishment->Text = L"Мера наказания";
			this->isMeasurePunishment->UseVisualStyleBackColor = true;
			this->isMeasurePunishment->CheckedChanged += gcnew System::EventHandler(this, &AddViolatorForm::isMeasurePunishment_CheckedChanged);
			// 
			// isNickname
			// 
			this->isNickname->AutoSize = true;
			this->isNickname->Location = System::Drawing::Point(6, 29);
			this->isNickname->Name = L"isNickname";
			this->isNickname->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->isNickname->Size = System::Drawing::Size(90, 28);
			this->isNickname->TabIndex = 0;
			this->isNickname->TabStop = true;
			this->isNickname->Text = L"Кличка";
			this->isNickname->UseVisualStyleBackColor = true;
			this->isNickname->CheckedChanged += gcnew System::EventHandler(this, &AddViolatorForm::isNickname_CheckedChanged);
			// 
			// AddViolatorForm
			// 
			this->AcceptButton = this->saveBtn;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->canceBtn;
			this->ClientSize = System::Drawing::Size(649, 444);
			this->Controls->Add(this->criminalRecordGroupBox);
			this->Controls->Add(this->dateBirthTimePicker);
			this->Controls->Add(this->canceBtn);
			this->Controls->Add(this->saveBtn);
			this->Controls->Add(this->isCriminalRecord);
			this->Controls->Add(this->dateBirthLbl);
			this->Controls->Add(this->lastNameLbl);
			this->Controls->Add(this->patronymicLbl);
			this->Controls->Add(this->firstNameLbl);
			this->Controls->Add(this->firstNameTextBox);
			this->Controls->Add(this->patronymicTextBox);
			this->Controls->Add(this->lastNameTextBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"AddViolatorForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Добавление нарушителя";
			this->criminalRecordGroupBox->ResumeLayout(false);
			this->criminalRecordGroupBox->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void saveBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->firstNameTextBox->Text->Length < 1 || this->lastNameTextBox->Text->Length < 1 || this->patronymicTextBox->Text->Length < 1) {
			MessageBox::Show(this, "Не все поля заполнены!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else if (this->isCriminalRecord->Checked && !this->isNickname->Checked && !this->isMeasurePunishment->Checked && !this->isTermImprisonment->Checked) {
			MessageBox::Show(this, "Не все поля заполнены!", "Ошибка!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			criminalRecord_T criminalRecord;
			if (this->isCriminalRecord->Checked) {
				if (this->isNickname->Checked) {
					criminalRecord = true;
				}
				else if (this->isMeasurePunishment->Checked) {
					criminalRecord = msclr::interop::marshal_as<std::string>(this->measurePunishmentTextBox->Text);
				}
				else if (this->isTermImprisonment->Checked) {
					criminalRecord = Convert::ToInt32(this->termImprisonmentTextBox->Text);
				}
			}
			else {
				criminalRecord = false;
			}
			
			addViolator(this->firstNameTextBox->Text, this->lastNameTextBox->Text, this->patronymicTextBox->Text, this->dateBirthTimePicker->Text, criminalRecord);
			
			this->Close();
		}

	}
	private: System::Void canceBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}

	private: System::Void isCriminalRecord_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->isCriminalRecord->Checked)
			this->criminalRecordGroupBox->Visible = true;
		else
			this->criminalRecordGroupBox->Visible = false;
	}
	private: System::Void isNickname_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->isNickname->Checked && !this->isMeasurePunishment->Checked && !this->isTermImprisonment->Checked) {
			this->measurePunishmentTextBox->Clear();
			this->termImprisonmentTextBox->Clear();
		}
	}
	private: System::Void isMeasurePunishment_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (!this->isNickname->Checked && this->isMeasurePunishment->Checked && !this->isTermImprisonment->Checked) {
			this->termImprisonmentTextBox->Clear();
			this->measurePunishmentTextBox->ReadOnly = false;
		}
		else
			this->measurePunishmentTextBox->ReadOnly = true;
	}
	private: System::Void isTermImprisonment_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (!this->isNickname->Checked && !this->isMeasurePunishment->Checked && this->isTermImprisonment->Checked) {
			this->measurePunishmentTextBox->Clear();
			this->termImprisonmentTextBox->ReadOnly = false;
		}
		else
			this->termImprisonmentTextBox->ReadOnly = true;
	}
	private: System::Void termImprisonmentTextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (System::Char::IsControl(e->KeyChar) && !System::Char::IsDigit(e->KeyChar))
			e->Handled = true;
	}
	private: System::Void lastNameTextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!System::Char::IsControl(e->KeyChar) && !System::Char::IsLetter(e->KeyChar))
			e->Handled = true;
	}
	private: System::Void firstNameTextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!System::Char::IsControl(e->KeyChar) && !System::Char::IsLetter(e->KeyChar))
			e->Handled = true;
	}
	private: System::Void patronymicTextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!System::Char::IsControl(e->KeyChar) && !System::Char::IsLetter(e->KeyChar))
			e->Handled = true;
	}
};
}
