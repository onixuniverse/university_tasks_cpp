#pragma once
#include "Templates.h"

namespace task625 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ ResultForm
	/// </summary>
	public ref class ResultForm : public System::Windows::Forms::Form
	{
	public:
		ResultForm(void)
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
		~ResultForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:
	private: System::Drawing::Printing::PrintDocument^ printDocument1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox2;


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
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(3, 5);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(264, 303);
			this->listBox1->TabIndex = 1;
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(272, 5);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(263, 303);
			this->listBox2->TabIndex = 2;
			// 
			// ResultForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(539, 312);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Name = L"ResultForm";
			this->Text = L"ResultForm";
			this->Load += gcnew System::EventHandler(this, &ResultForm::ResultForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnPrint_Click(System::Object^ sender, System::EventArgs^ e) {
		printDocument1->Print();
	}
	private: System::Void ResultForm_Load(System::Object^ sender, System::EventArgs^ e) {\
		for (int i = 0; i < words.size() / 2; i++) {
			listBox1->Items->Add(gcnew String(words[i].c_str()));
			listBox2->Items->Add(gcnew String(words[i + 50].c_str()));
		}
	}
	};
}
