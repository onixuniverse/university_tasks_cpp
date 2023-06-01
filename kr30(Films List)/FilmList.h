#pragma once
#include "Templates.h"

namespace FilmsList {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ FilmList
	/// </summary>
	public ref class FilmList : public System::Windows::Forms::Form
	{
	public:
		FilmList(void)
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
		~FilmList()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ filmID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ filmTitle;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ filmYear;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ filmDuration;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ filmDirectors;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ filmWriters;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ filmActors;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->filmID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->filmTitle = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->filmYear = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->filmDuration = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->filmDirectors = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->filmWriters = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->filmActors = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->filmID,
					this->filmTitle, this->filmYear, this->filmDuration, this->filmDirectors, this->filmWriters, this->filmActors
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(795, 293);
			this->dataGridView1->TabIndex = 0;
			// 
			// filmID
			// 
			this->filmID->Frozen = true;
			this->filmID->HeaderText = L"ID";
			this->filmID->Name = L"filmID";
			this->filmID->ReadOnly = true;
			// 
			// filmTitle
			// 
			this->filmTitle->Frozen = true;
			this->filmTitle->HeaderText = L"Title";
			this->filmTitle->Name = L"filmTitle";
			this->filmTitle->ReadOnly = true;
			// 
			// filmYear
			// 
			this->filmYear->HeaderText = L"Year";
			this->filmYear->Name = L"filmYear";
			this->filmYear->ReadOnly = true;
			// 
			// filmDuration
			// 
			this->filmDuration->HeaderText = L"Duration";
			this->filmDuration->Name = L"filmDuration";
			this->filmDuration->ReadOnly = true;
			// 
			// filmDirectors
			// 
			this->filmDirectors->HeaderText = L"Directors";
			this->filmDirectors->Name = L"filmDirectors";
			this->filmDirectors->ReadOnly = true;
			// 
			// filmWriters
			// 
			this->filmWriters->HeaderText = L"Writers";
			this->filmWriters->Name = L"filmWriters";
			this->filmWriters->ReadOnly = true;
			// 
			// filmActors
			// 
			this->filmActors->HeaderText = L"Actors";
			this->filmActors->Name = L"filmActors";
			this->filmActors->ReadOnly = true;
			// 
			// FilmList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(819, 317);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"FilmList";
			this->Text = L"FilmList";
			this->Load += gcnew System::EventHandler(this, &FilmList::FilmList_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void FilmList_Load(System::Object^ sender, System::EventArgs^ e) {
		std::vector<Film> deserializeFilms = deserializeFilmsFromXml("output.xml");

		
		for (Film film : deserializeFilms) {
			auto rowIndex = this->dataGridView1->Rows->Add();

			dataGridView1->Rows[rowIndex]->Cells[0]->Value = gcnew String(film.id.c_str());
			dataGridView1->Rows[rowIndex]->Cells[1]->Value = gcnew String(film.title.c_str());
			dataGridView1->Rows[rowIndex]->Cells[2]->Value = gcnew String(film.year.c_str());
			dataGridView1->Rows[rowIndex]->Cells[3]->Value = gcnew String(film.duration.c_str());

			System::String^ filmDiractorsString = "";
			for (std::string dir : film.directors) {
				filmDiractorsString += gcnew String(dir.c_str()) + ",";
			}
			dataGridView1->Rows[rowIndex]->Cells[4]->Value = filmDiractorsString;

			System::String^ filmWritersString = "";
			for (std::string writer : film.writers) {
				filmWritersString += gcnew String(writer.c_str()) + ",";
			}
			dataGridView1->Rows[rowIndex]->Cells[5]->Value = filmWritersString;

			System::String^ filmActorsString= "";
			for (std::string actor : film.actors) {
				filmActorsString += gcnew String(actor.c_str()) + ",";
			}
			dataGridView1->Rows[rowIndex]->Cells[6]->Value = filmActorsString;
		}
	}
};
}
