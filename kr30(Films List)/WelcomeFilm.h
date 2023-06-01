#pragma once
#include "FilmList.h"
#include "Templates.h"

namespace FilmsList {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ WelcomeFilm
	/// </summary>
	public ref class WelcomeFilm : public System::Windows::Forms::Form
	{
	public:
		WelcomeFilm(void)
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
		~WelcomeFilm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ filmTitle;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ filmYear;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ filmDuration;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ filmDirectors;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ filmWriters;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ filmActors;
	private: System::Windows::Forms::Button^ btnWriteFilms;

	private: System::Windows::Forms::Button^ btnViewFilms;
	private: System::Windows::Forms::Button^ btnAddFilm;








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
			this->filmTitle = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->filmYear = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->filmDuration = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->filmDirectors = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->filmWriters = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->filmActors = (gcnew System::Windows::Forms::TextBox());
			this->btnWriteFilms = (gcnew System::Windows::Forms::Button());
			this->btnViewFilms = (gcnew System::Windows::Forms::Button());
			this->btnAddFilm = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// filmTitle
			// 
			this->filmTitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->filmTitle->Location = System::Drawing::Point(143, 9);
			this->filmTitle->Name = L"filmTitle";
			this->filmTitle->Size = System::Drawing::Size(292, 29);
			this->filmTitle->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(50, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Title:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(125, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Release year:";
			// 
			// filmYear
			// 
			this->filmYear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->filmYear->Location = System::Drawing::Point(143, 44);
			this->filmYear->Name = L"filmYear";
			this->filmYear->Size = System::Drawing::Size(292, 29);
			this->filmYear->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(85, 24);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Duration:";
			// 
			// filmDuration
			// 
			this->filmDuration->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->filmDuration->Location = System::Drawing::Point(143, 79);
			this->filmDuration->Name = L"filmDuration";
			this->filmDuration->Size = System::Drawing::Size(292, 29);
			this->filmDuration->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 119);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(107, 24);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Director(-s):";
			// 
			// filmDirectors
			// 
			this->filmDirectors->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->filmDirectors->Location = System::Drawing::Point(143, 114);
			this->filmDirectors->Name = L"filmDirectors";
			this->filmDirectors->Size = System::Drawing::Size(292, 29);
			this->filmDirectors->TabIndex = 6;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(12, 154);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(91, 24);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Writer(-s):";
			// 
			// filmWriters
			// 
			this->filmWriters->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->filmWriters->Location = System::Drawing::Point(143, 149);
			this->filmWriters->Name = L"filmWriters";
			this->filmWriters->Size = System::Drawing::Size(292, 29);
			this->filmWriters->TabIndex = 8;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(12, 189);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(86, 24);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Actor(-s):";
			// 
			// filmActors
			// 
			this->filmActors->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->filmActors->Location = System::Drawing::Point(143, 184);
			this->filmActors->Name = L"filmActors";
			this->filmActors->Size = System::Drawing::Size(292, 29);
			this->filmActors->TabIndex = 10;
			// 
			// btnWriteFilms
			// 
			this->btnWriteFilms->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnWriteFilms->Location = System::Drawing::Point(12, 235);
			this->btnWriteFilms->Name = L"btnWriteFilms";
			this->btnWriteFilms->Size = System::Drawing::Size(141, 35);
			this->btnWriteFilms->TabIndex = 13;
			this->btnWriteFilms->Text = L"Write Film(-s)";
			this->btnWriteFilms->UseVisualStyleBackColor = true;
			this->btnWriteFilms->Click += gcnew System::EventHandler(this, &WelcomeFilm::btnWriteFilms_Click);
			// 
			// btnViewFilms
			// 
			this->btnViewFilms->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnViewFilms->Location = System::Drawing::Point(12, 276);
			this->btnViewFilms->Name = L"btnViewFilms";
			this->btnViewFilms->Size = System::Drawing::Size(141, 34);
			this->btnViewFilms->TabIndex = 14;
			this->btnViewFilms->Text = L"View All Films";
			this->btnViewFilms->UseVisualStyleBackColor = true;
			this->btnViewFilms->Click += gcnew System::EventHandler(this, &WelcomeFilm::btnViewFilms_Click);
			// 
			// btnAddFilm
			// 
			this->btnAddFilm->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnAddFilm->Location = System::Drawing::Point(257, 235);
			this->btnAddFilm->Name = L"btnAddFilm";
			this->btnAddFilm->Size = System::Drawing::Size(178, 75);
			this->btnAddFilm->TabIndex = 12;
			this->btnAddFilm->Text = L"Add Another Film";
			this->btnAddFilm->UseVisualStyleBackColor = true;
			this->btnAddFilm->Click += gcnew System::EventHandler(this, &WelcomeFilm::btnAddFilm_Click);
			// 
			// WelcomeFilm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(447, 322);
			this->Controls->Add(this->btnViewFilms);
			this->Controls->Add(this->btnWriteFilms);
			this->Controls->Add(this->btnAddFilm);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->filmActors);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->filmWriters);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->filmDirectors);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->filmDuration);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->filmYear);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->filmTitle);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"WelcomeFilm";
			this->Text = L"WelcomeFilm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnAddFilm_Click(System::Object^ sender, System::EventArgs^ e) {
		Film film;
		film.id = std::to_string(films.size() + 1);
		film.title = msclr::interop::marshal_as<std::string>(filmTitle->Text);
		film.year = msclr::interop::marshal_as<std::string>(filmYear->Text);
		film.duration = msclr::interop::marshal_as<std::string>(filmDuration->Text);

		array<String^>^ filmDirectorsSplited = filmDirectors->Text->Split(',');
		for (int i = 0; i < filmDirectorsSplited->Length; i++) {
			String^ directorUnmarshal = filmDirectorsSplited[i];
			std::string director = msclr::interop::marshal_as<std::string>(directorUnmarshal);
			film.directors.push_back(director);
		}

		array<String^>^ filmWritersSplited = filmWriters->Text->Split(',');
		for (int i = 0; i < filmWritersSplited->Length; i++) {
			String^ writerUnmarshal = filmWritersSplited[i];
			std::string writer = msclr::interop::marshal_as<std::string>(writerUnmarshal);
			film.writers.push_back(writer);
		}

		array<String^>^ filmActorsSplited = filmActors->Text->Split(',');
		for (int i = 0; i < filmActorsSplited->Length; i++) {
			String^ actorsUnmarshal = filmActorsSplited[i];
			std::string actors = msclr::interop::marshal_as<std::string>(actorsUnmarshal);
			film.actors.push_back(actors);
		}


		films.push_back(film);

		filmTitle->Clear();
		filmYear->Clear();
		filmDuration->Clear();
		filmDirectors->Clear();
		filmWriters->Clear();
		filmActors->Clear();
	}
	private: System::Void btnWriteFilms_Click(System::Object^ sender, System::EventArgs^ e) {
		serializeFilmsToXml(films, "output.xml");
		MessageBox::Show(this, "Films was writed to 'output.xml'", "Success!", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void btnViewFilms_Click(System::Object^ sender, System::EventArgs^ e) {
		FilmList^ filmListForm = gcnew FilmList();
		filmListForm->Show();
	}
};
}
