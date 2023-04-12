#pragma once
#include "ResultForm.h"
#include "Templates.h"

namespace task625 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ WordsForm
	/// </summary>
	public ref class WordsForm : public System::Windows::Forms::Form
	{
	public:
		WordsForm(void)
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
		~WordsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnDOIT;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialogF;
	private: System::Windows::Forms::TextBox^ txtBoxFilePath1;


	private: System::Windows::Forms::Button^ btnFChoose;

	private: System::Windows::Forms::Label^ lblF;







	private: System::Windows::Forms::OpenFileDialog^ openFileDialogG;

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnDOIT = (gcnew System::Windows::Forms::Button());
			this->openFileDialogF = (gcnew System::Windows::Forms::OpenFileDialog());
			this->txtBoxFilePath1 = (gcnew System::Windows::Forms::TextBox());
			this->btnFChoose = (gcnew System::Windows::Forms::Button());
			this->lblF = (gcnew System::Windows::Forms::Label());
			this->openFileDialogG = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SuspendLayout();
			// 
			// btnDOIT
			// 
			this->btnDOIT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDOIT->Location = System::Drawing::Point(113, 58);
			this->btnDOIT->Name = L"btnDOIT";
			this->btnDOIT->Size = System::Drawing::Size(124, 52);
			this->btnDOIT->TabIndex = 0;
			this->btnDOIT->Text = L"DO IT!";
			this->btnDOIT->UseVisualStyleBackColor = true;
			this->btnDOIT->Click += gcnew System::EventHandler(this, &WordsForm::btnDOIT_Click);
			// 
			// openFileDialogF
			// 
			this->openFileDialogF->Filter = L"Text|*.txt|All|*.*";
			// 
			// txtBoxFilePath1
			// 
			this->txtBoxFilePath1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->txtBoxFilePath1->Location = System::Drawing::Point(12, 29);
			this->txtBoxFilePath1->Name = L"txtBoxFilePath1";
			this->txtBoxFilePath1->Size = System::Drawing::Size(262, 23);
			this->txtBoxFilePath1->TabIndex = 1;
			// 
			// btnFChoose
			// 
			this->btnFChoose->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnFChoose->Location = System::Drawing::Point(280, 29);
			this->btnFChoose->Name = L"btnFChoose";
			this->btnFChoose->Size = System::Drawing::Size(75, 23);
			this->btnFChoose->TabIndex = 2;
			this->btnFChoose->Text = L"Choose";
			this->btnFChoose->UseVisualStyleBackColor = true;
			this->btnFChoose->Click += gcnew System::EventHandler(this, &WordsForm::btnFChoose_Click);
			// 
			// lblF
			// 
			this->lblF->AutoSize = true;
			this->lblF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblF->Location = System::Drawing::Point(12, 9);
			this->lblF->Name = L"lblF";
			this->lblF->Size = System::Drawing::Size(63, 17);
			this->lblF->TabIndex = 3;
			this->lblF->Text = L"File Path";
			// 
			// openFileDialogG
			// 
			this->openFileDialogG->Filter = L"Text|*.txt|All|*.*";
			// 
			// WordsForm
			// 
			this->AcceptButton = this->btnDOIT;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(367, 122);
			this->Controls->Add(this->lblF);
			this->Controls->Add(this->btnFChoose);
			this->Controls->Add(this->txtBoxFilePath1);
			this->Controls->Add(this->btnDOIT);
			this->Name = L"WordsForm";
			this->Text = L"WordsForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnFChoose_Click(System::Object^ sender, System::EventArgs^ e) {
		if (System::Windows::Forms::DialogResult::OK == openFileDialogF->ShowDialog()) {
			txtBoxFilePath1->Text = openFileDialogF->FileName;
		}
		
	}
	private: System::Void btnDOIT_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtBoxFilePath1->Text->Length == 0) {
			MessageBox::Show(this, "Incorrect file path!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		else {
			readFile(txtBoxFilePath1->Text);
			ResultForm^ resultForm = gcnew ResultForm();
			resultForm->Show();
		}

	}
};
}
