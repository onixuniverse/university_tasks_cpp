#pragma once
#include "AddNewViolator.h"
#include "SummaryForm.h"

namespace PoliceDepartment {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для PoliceDepartment
	/// </summary>
	public ref class PoliceDepartment : public System::Windows::Forms::Form
	{
	public:
		PoliceDepartment(void)
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
		~PoliceDepartment()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnAddNewViolator;
	protected:

	private: System::Windows::Forms::Button^ btnSummary;

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
			this->btnAddNewViolator = (gcnew System::Windows::Forms::Button());
			this->btnSummary = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnAddNewViolator
			// 
			this->btnAddNewViolator->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnAddNewViolator->Location = System::Drawing::Point(12, 12);
			this->btnAddNewViolator->Name = L"btnAddNewViolator";
			this->btnAddNewViolator->Size = System::Drawing::Size(217, 86);
			this->btnAddNewViolator->TabIndex = 0;
			this->btnAddNewViolator->Text = L"Добавить нарушителя";
			this->btnAddNewViolator->UseVisualStyleBackColor = true;
			this->btnAddNewViolator->Click += gcnew System::EventHandler(this, &PoliceDepartment::btnAddNewViolator_Click);
			// 
			// btnSummary
			// 
			this->btnSummary->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSummary->Location = System::Drawing::Point(235, 12);
			this->btnSummary->Name = L"btnSummary";
			this->btnSummary->Size = System::Drawing::Size(217, 86);
			this->btnSummary->TabIndex = 1;
			this->btnSummary->Text = L"Сводка";
			this->btnSummary->UseVisualStyleBackColor = true;
			this->btnSummary->Click += gcnew System::EventHandler(this, &PoliceDepartment::btnSummary_Click);
			// 
			// PoliceDepartment
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(465, 109);
			this->Controls->Add(this->btnSummary);
			this->Controls->Add(this->btnAddNewViolator);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"PoliceDepartment";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Районный отдел полиции";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnAddNewViolator_Click(System::Object^ sender, System::EventArgs^ e) {
		AddViolatorForm^ registrationForm = gcnew AddViolatorForm();
		registrationForm->Show();
	}
	private: System::Void btnSummary_Click(System::Object^ sender, System::EventArgs^ e) {
		SummaryForm^ summaryForm = gcnew SummaryForm();
		summaryForm->Show();
	}
	};
}
