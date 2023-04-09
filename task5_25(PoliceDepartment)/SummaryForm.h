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
	/// Ñâîäêà äëÿ SummaryForm
	/// </summary>
	public ref class SummaryForm : public System::Windows::Forms::Form
	{
	public:
		SummaryForm(void)
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
		~SummaryForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PrintDialog^ printDialog1;
	private: System::Windows::Forms::Button^ btnPrint;
	private: System::Windows::Forms::Button^ btnOK;
	
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->btnPrint = (gcnew System::Windows::Forms::Button());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"ÔÈÎ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(314, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(150, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Äàòà ðîæäåíèÿ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(625, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(110, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Ñóäèìîñòü";
			// 
			// printDialog1
			// 
			this->printDialog1->PrintToFile = true;
			this->printDialog1->ShowHelp = true;
			this->printDialog1->UseEXDialog = true;
			// 
			// btnPrint
			// 
			this->btnPrint->Location = System::Drawing::Point(647, 449);
			this->btnPrint->Name = L"btnPrint";
			this->btnPrint->Size = System::Drawing::Size(75, 23);
			this->btnPrint->TabIndex = 3;
			this->btnPrint->Text = L"Ïå÷àòü";
			this->btnPrint->UseVisualStyleBackColor = true;
			this->btnPrint->Click += gcnew System::EventHandler(this, &SummaryForm::btnPrint_Click);
			// 
			// btnOK
			// 
			this->btnOK->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnOK->Location = System::Drawing::Point(728, 449);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(75, 23);
			this->btnOK->TabIndex = 4;
			this->btnOK->Text = L"ÎÊ";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &SummaryForm::btnOK_Click);
			// 
			// SummaryForm
			// 
			this->AcceptButton = this->btnPrint;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->CancelButton = this->btnOK;
			this->ClientSize = System::Drawing::Size(815, 484);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->btnPrint);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"SummaryForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ñâîäêà";
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &SummaryForm::SummaryForm_Paint);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		void DrawString(float x, float y, String^ stringText)
		{
			System::Drawing::Graphics^ formGraphics = this->CreateGraphics();
			System::Drawing::Font^ drawFont = gcnew System::Drawing::Font("Arial", 12);
			System::Drawing::SolidBrush^ drawBrush = gcnew System::Drawing::SolidBrush(System::Drawing::Color::Black);
			System::Drawing::StringFormat^ drawFormat = gcnew System::Drawing::StringFormat();
			formGraphics->DrawString(stringText, drawFont, drawBrush, x, y, drawFormat);
			delete drawFont;
			delete drawBrush;
			delete formGraphics;
		}

	private: System::Void SummaryForm_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		//DrawString(12, 40, "Èâàíîâ Èâàí Èâàíîâè÷");
		float y = 40;

		for (int i = 0; i < violators.size(); i++) {
			String^ criminalRecord;
			String^ name = gcnew String(violators[i].lastName.c_str()) + " " + gcnew String(violators[i].firstName.c_str()) + " " + gcnew String(violators[i].patronymic.c_str());
			String^ dateOfBirth = gcnew String(violators[i].dateBirth.c_str());
			if (violators[i].criminalRecord.index() == 0) {
				bool isNickname = std::get<bool>(violators[i].criminalRecord);
				if (isNickname) {
					criminalRecord = "Åñòü êëè÷êà";
				}
				else {
					criminalRecord = "Íåò ñóäèìîñòè";
				}
			}
			else if (violators[i].criminalRecord.index() == 1) {
				criminalRecord = gcnew String(std::get<std::string>(violators[i].criminalRecord).c_str());
			}
			else if (violators[i].criminalRecord.index() == 2) {
				criminalRecord = gcnew String(std::get<int>(violators[i].criminalRecord).ToString()) + " äíåé";
			}

			DrawString(12, y, name);
			DrawString(325, y, dateOfBirth);
			DrawString(600, y, criminalRecord);

			y += 20;
		}
	}
	private: System::Void btnPrint_Click(System::Object^ sender, System::EventArgs^ e) {
		this->printDialog1->ShowDialog();
	}
	private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
