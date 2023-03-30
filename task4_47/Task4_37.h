#pragma once
#include "Header.h"

namespace task437 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ Task4_47
	/// </summary>
	public ref class Task4_47 : public System::Windows::Forms::Form
	{
	public:
		Task4_47(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòðóêòîðà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ðåñóðñû.
		/// </summary>
		~Task4_47()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ dateNumberBox;
	protected:
	private: System::Windows::Forms::TextBox^ dateMonthBox;
	private: System::Windows::Forms::TextBox^ dateYearBox;
	private: System::Windows::Forms::TextBox^ weekDayBox;
	private: System::Windows::Forms::Label^ dateNumberLabel;
	private: System::Windows::Forms::Label^ dateMonthLabel;
	private: System::Windows::Forms::Label^ dateYearLabel;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ correctnessLabel;
	private: System::Windows::Forms::Label^ lastDayOfTheWeekLabel;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;



	protected:

	protected:

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåðåìåííàÿ êîíñòðóêòîðà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òðåáóåìûé ìåòîä äëÿ ïîääåðæêè êîíñòðóêòîðà — íå èçìåíÿéòå 
		/// ñîäåðæèìîå ýòîãî ìåòîäà ñ ïîìîùüþ ðåäàêòîðà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dateNumberBox = (gcnew System::Windows::Forms::TextBox());
			this->dateMonthBox = (gcnew System::Windows::Forms::TextBox());
			this->dateYearBox = (gcnew System::Windows::Forms::TextBox());
			this->weekDayBox = (gcnew System::Windows::Forms::TextBox());
			this->dateNumberLabel = (gcnew System::Windows::Forms::Label());
			this->dateMonthLabel = (gcnew System::Windows::Forms::Label());
			this->dateYearLabel = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->correctnessLabel = (gcnew System::Windows::Forms::Label());
			this->lastDayOfTheWeekLabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// dateNumberBox
			// 
			this->dateNumberBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dateNumberBox->Location = System::Drawing::Point(147, 12);
			this->dateNumberBox->Name = L"dateNumberBox";
			this->dateNumberBox->Size = System::Drawing::Size(125, 23);
			this->dateNumberBox->TabIndex = 0;
			// 
			// dateMonthBox
			// 
			this->dateMonthBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dateMonthBox->Location = System::Drawing::Point(147, 41);
			this->dateMonthBox->Name = L"dateMonthBox";
			this->dateMonthBox->Size = System::Drawing::Size(125, 23);
			this->dateMonthBox->TabIndex = 1;
			// 
			// dateYearBox
			// 
			this->dateYearBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dateYearBox->Location = System::Drawing::Point(147, 70);
			this->dateYearBox->Name = L"dateYearBox";
			this->dateYearBox->Size = System::Drawing::Size(125, 23);
			this->dateYearBox->TabIndex = 2;
			// 
			// weekDayBox
			// 
			this->weekDayBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->weekDayBox->Location = System::Drawing::Point(147, 99);
			this->weekDayBox->Name = L"weekDayBox";
			this->weekDayBox->Size = System::Drawing::Size(125, 23);
			this->weekDayBox->TabIndex = 3;
			// 
			// dateNumberLabel
			// 
			this->dateNumberLabel->AutoSize = true;
			this->dateNumberLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dateNumberLabel->Location = System::Drawing::Point(47, 18);
			this->dateNumberLabel->Name = L"dateNumberLabel";
			this->dateNumberLabel->Size = System::Drawing::Size(94, 17);
			this->dateNumberLabel->TabIndex = 4;
			this->dateNumberLabel->Text = L"Date number:";
			// 
			// dateMonthLabel
			// 
			this->dateMonthLabel->AutoSize = true;
			this->dateMonthLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dateMonthLabel->Location = System::Drawing::Point(56, 47);
			this->dateMonthLabel->Name = L"dateMonthLabel";
			this->dateMonthLabel->Size = System::Drawing::Size(85, 17);
			this->dateMonthLabel->TabIndex = 5;
			this->dateMonthLabel->Text = L"Date month:";
			// 
			// dateYearLabel
			// 
			this->dateYearLabel->AutoSize = true;
			this->dateYearLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dateYearLabel->Location = System::Drawing::Point(67, 76);
			this->dateYearLabel->Name = L"dateYearLabel";
			this->dateYearLabel->Size = System::Drawing::Size(74, 17);
			this->dateYearLabel->TabIndex = 6;
			this->dateYearLabel->Text = L"Date year:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(28, 105);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(113, 17);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Day of the week:";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(70, 146);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 30);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Check correctness";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Task4_47::button1_Click);
			// 
			// correctnessLabel
			// 
			this->correctnessLabel->AutoSize = true;
			this->correctnessLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->correctnessLabel->Location = System::Drawing::Point(153, 197);
			this->correctnessLabel->Name = L"correctnessLabel";
			this->correctnessLabel->Size = System::Drawing::Size(0, 31);
			this->correctnessLabel->TabIndex = 9;
			// 
			// lastDayOfTheWeekLabel
			// 
			this->lastDayOfTheWeekLabel->AutoSize = true;
			this->lastDayOfTheWeekLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lastDayOfTheWeekLabel->Location = System::Drawing::Point(169, 262);
			this->lastDayOfTheWeekLabel->Name = L"lastDayOfTheWeekLabel";
			this->lastDayOfTheWeekLabel->Size = System::Drawing::Size(0, 20);
			this->lastDayOfTheWeekLabel->TabIndex = 10;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 200);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(149, 29);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Correctness:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 262);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(159, 20);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Last day of the week:";
			// 
			// Task4_47
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 307);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->lastDayOfTheWeekLabel);
			this->Controls->Add(this->correctnessLabel);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dateYearLabel);
			this->Controls->Add(this->dateMonthLabel);
			this->Controls->Add(this->dateNumberLabel);
			this->Controls->Add(this->weekDayBox);
			this->Controls->Add(this->dateYearBox);
			this->Controls->Add(this->dateMonthBox);
			this->Controls->Add(this->dateNumberBox);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Task4_47";
			this->Text = L"Task3_47";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->correctnessLabel->Text = Convert::ToString(checkCorrectnessDate(dateNumberBox->Text, dateMonthBox->Text, dateYearBox->Text, weekDayBox->Text));
		this->lastDayOfTheWeekLabel->Text = getDayOfWeek(Convert::ToInt32(dateYearBox->Text), Convert::ToInt32(dateMonthBox->Text), Convert::ToInt32(dateNumberBox->Text));
	}
};
}
