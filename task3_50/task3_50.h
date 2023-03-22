#pragma once
#include "Header.h"
#include <tuple>

namespace task350 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Task3_50
	/// </summary>
	public ref class Task3_50 : public System::Windows::Forms::Form
	{
	public:
		Task3_50(void)
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
		~Task3_50()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ sourceInput;
	private: System::Windows::Forms::TextBox^ resultInput;
	protected:


	protected:


	private: System::Windows::Forms::Label^ labelSourceString;

	private: System::Windows::Forms::Label^ labelResultString;






	private: System::Windows::Forms::Label^ resultLabel;
	private: System::Windows::Forms::Label^ resultCountLabel;


	private: System::Windows::Forms::Button^ checkButton;




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
			this->sourceInput = (gcnew System::Windows::Forms::TextBox());
			this->resultInput = (gcnew System::Windows::Forms::TextBox());
			this->labelSourceString = (gcnew System::Windows::Forms::Label());
			this->labelResultString = (gcnew System::Windows::Forms::Label());
			this->resultLabel = (gcnew System::Windows::Forms::Label());
			this->resultCountLabel = (gcnew System::Windows::Forms::Label());
			this->checkButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// sourceInput
			// 
			this->sourceInput->Location = System::Drawing::Point(122, 12);
			this->sourceInput->Name = L"sourceInput";
			this->sourceInput->Size = System::Drawing::Size(150, 20);
			this->sourceInput->TabIndex = 0;
			this->sourceInput->Tag = L"";
			// 
			// resultInput
			// 
			this->resultInput->Location = System::Drawing::Point(122, 38);
			this->resultInput->Name = L"resultInput";
			this->resultInput->Size = System::Drawing::Size(150, 20);
			this->resultInput->TabIndex = 1;
			this->resultInput->Tag = L"";
			// 
			// labelSourceString
			// 
			this->labelSourceString->AutoSize = true;
			this->labelSourceString->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.5F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelSourceString->Location = System::Drawing::Point(26, 16);
			this->labelSourceString->Name = L"labelSourceString";
			this->labelSourceString->Size = System::Drawing::Size(90, 16);
			this->labelSourceString->TabIndex = 2;
			this->labelSourceString->Text = L"Source String:";
			// 
			// labelResultString
			// 
			this->labelResultString->AutoSize = true;
			this->labelResultString->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.5F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelResultString->Location = System::Drawing::Point(31, 42);
			this->labelResultString->Name = L"labelResultString";
			this->labelResultString->Size = System::Drawing::Size(85, 16);
			this->labelResultString->TabIndex = 3;
			this->labelResultString->Text = L"Result String:";
			// 
			// resultLabel
			// 
			this->resultLabel->AutoSize = true;
			this->resultLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->resultLabel->Location = System::Drawing::Point(95, 129);
			this->resultLabel->Name = L"resultLabel";
			this->resultLabel->Size = System::Drawing::Size(0, 54);
			this->resultLabel->TabIndex = 6;
			// 
			// resultCountLabel
			// 
			this->resultCountLabel->AutoSize = true;
			this->resultCountLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 35, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->resultCountLabel->Location = System::Drawing::Point(120, 183);
			this->resultCountLabel->Name = L"resultCountLabel";
			this->resultCountLabel->Size = System::Drawing::Size(0, 54);
			this->resultCountLabel->TabIndex = 7;
			// 
			// checkButton
			// 
			this->checkButton->Location = System::Drawing::Point(122, 64);
			this->checkButton->Name = L"checkButton";
			this->checkButton->Size = System::Drawing::Size(150, 27);
			this->checkButton->TabIndex = 8;
			this->checkButton->Text = L"Check";
			this->checkButton->UseVisualStyleBackColor = true;
			this->checkButton->Click += gcnew System::EventHandler(this, &Task3_50::checkButton_Click);
			// 
			// Task3_50
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->checkButton);
			this->Controls->Add(this->resultCountLabel);
			this->Controls->Add(this->resultLabel);
			this->Controls->Add(this->labelResultString);
			this->Controls->Add(this->labelSourceString);
			this->Controls->Add(this->resultInput);
			this->Controls->Add(this->sourceInput);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Task3_50";
			this->ShowIcon = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Task 3.50";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void checkButton_Click(System::Object^ sender, System::EventArgs^ e) {
		bool resultBool;
		Int32 countK;

		this->resultLabel->Text = "";
		this->resultCountLabel->Text = "";
		this->resultLabel->Location = System::Drawing::Point(95, 129);

		std::tie(resultBool, countK) = canTransform(sourceInput->Text, resultInput->Text);

		if (resultBool) {
			this->resultLabel->Text = "Yes";
			if (countK)
				this->resultCountLabel->Text = Convert::ToString(countK);
		}
		else {
			this->resultLabel->Text = "No";
			this->resultLabel->Location = System::Drawing::Point(105, 129);
		}
	}
};
}
