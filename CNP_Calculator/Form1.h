#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ input_cnp;
	private: System::Windows::Forms::TextBox^ afisaj_cnp;
	private: System::Windows::Forms::Button^ Calculeaza_cnp;
	protected:

	protected:


	private: System::Windows::Forms::Button^ Stergere;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->input_cnp = (gcnew System::Windows::Forms::TextBox());
			this->afisaj_cnp = (gcnew System::Windows::Forms::TextBox());
			this->Calculeaza_cnp = (gcnew System::Windows::Forms::Button());
			this->Stergere = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// input_cnp
			// 
			this->input_cnp->Location = System::Drawing::Point(155, 45);
			this->input_cnp->Name = L"input_cnp";
			this->input_cnp->Size = System::Drawing::Size(193, 26);
			this->input_cnp->TabIndex = 0;
			this->input_cnp->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// afisaj_cnp
			// 
			this->afisaj_cnp->Location = System::Drawing::Point(91, 369);
			this->afisaj_cnp->Name = L"afisaj_cnp";
			this->afisaj_cnp->Size = System::Drawing::Size(325, 26);
			this->afisaj_cnp->TabIndex = 1;
			// 
			// Calculeaza_cnp
			// 
			this->Calculeaza_cnp->Location = System::Drawing::Point(91, 201);
			this->Calculeaza_cnp->Name = L"Calculeaza_cnp";
			this->Calculeaza_cnp->Size = System::Drawing::Size(140, 40);
			this->Calculeaza_cnp->TabIndex = 2;
			this->Calculeaza_cnp->Text = L"calculeaza_cnp";
			this->Calculeaza_cnp->UseVisualStyleBackColor = true;
			this->Calculeaza_cnp->Click += gcnew System::EventHandler(this, &Form1::Calculeaza_Click);
			// 
			// Stergere
			// 
			this->Stergere->Location = System::Drawing::Point(295, 209);
			this->Stergere->Name = L"Stergere";
			this->Stergere->Size = System::Drawing::Size(87, 32);
			this->Stergere->TabIndex = 3;
			this->Stergere->Text = L"Stergere";
			this->Stergere->UseVisualStyleBackColor = true;
			this->Stergere->Click += gcnew System::EventHandler(this, &Form1::Stergere_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(473, 454);
			this->Controls->Add(this->Stergere);
			this->Controls->Add(this->Calculeaza_cnp);
			this->Controls->Add(this->afisaj_cnp);
			this->Controls->Add(this->input_cnp);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Stergere_Click(System::Object^ sender, System::EventArgs^ e) {
		input_cnp->Clear();
		afisaj_cnp->Clear();
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Calculeaza_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (input_cnp->Text->Length == 0)
		{
			MessageBox::Show("Introduceti CNP! ", "Eroare", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		else
		{
			String^ cnp = input_cnp->Text;
			int an = Int32::Parse(cnp->Substring(1, 2));
			int luna = Int32::Parse(cnp->Substring(3, 2));
			int zi = Int32::Parse(cnp->Substring(5, 2));

			DateTime azi = DateTime::Now;

			int century = 0;
			if (Int32::Parse(cnp->Substring(0, 1)) <= 2)
			{
				century = 1900;
			}
			else if (Int32::Parse(cnp->Substring(0, 1)) <= 4)
			{
				century = 1800;
			}
			else if (Int32::Parse(cnp->Substring(0, 1)) <= 6)
			{
				century = 2000;
			}
			else if (Int32::Parse(cnp->Substring(0, 1)) <= 8)
			{
				century = 1900;
			}

			int varsta = azi.Year - (century + an);
			afisaj_cnp->Text = "Data nasterii: " + zi.ToString() + "/" + luna.ToString() + "/" + an.ToString() + "\n" + "Varsta: " + varsta.ToString();

		}
	}
	};
} 