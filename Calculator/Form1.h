#pragma once
#include <cstdlib>
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
	private: System::Windows::Forms::TextBox^ Ecran;
	protected:

	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

	private: double firstNum = 0;
	private: double secondNum = 0;
	private: System::Windows::Forms::Button^ button17;
	private: String^ operation = "";

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Ecran = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Ecran
			// 
			this->Ecran->ForeColor = System::Drawing::Color::DarkMagenta;
			this->Ecran->Location = System::Drawing::Point(81, 66);
			this->Ecran->Name = L"Ecran";
			this->Ecran->Size = System::Drawing::Size(405, 26);
			this->Ecran->TabIndex = 0;
			this->Ecran->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(81, 159);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 36);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(190, 158);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 37);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(299, 159);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 36);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::LavenderBlush;
			this->button4->ForeColor = System::Drawing::Color::Navy;
			this->button4->Location = System::Drawing::Point(411, 159);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 36);
			this->button4->TabIndex = 4;
			this->button4->Text = L"+";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::LavenderBlush;
			this->button5->ForeColor = System::Drawing::Color::Navy;
			this->button5->Location = System::Drawing::Point(411, 228);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 35);
			this->button5->TabIndex = 9;
			this->button5->Text = L"x";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(299, 228);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 35);
			this->button6->TabIndex = 8;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(190, 228);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 35);
			this->button7->TabIndex = 7;
			this->button7->Text = L"5";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(81, 228);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 35);
			this->button8->TabIndex = 6;
			this->button8->Text = L"4";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(81, 301);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 37);
			this->button9->TabIndex = 10;
			this->button9->Text = L"7";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(190, 301);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 37);
			this->button10->TabIndex = 11;
			this->button10->Text = L"8";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(299, 301);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 37);
			this->button11->TabIndex = 12;
			this->button11->Text = L"9";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::LavenderBlush;
			this->button12->ForeColor = System::Drawing::Color::Navy;
			this->button12->Location = System::Drawing::Point(411, 301);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 37);
			this->button12->TabIndex = 13;
			this->button12->Text = L"-";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(81, 372);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 38);
			this->button13->TabIndex = 14;
			this->button13->Text = L"0";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(189, 372);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 38);
			this->button14->TabIndex = 15;
			this->button14->Text = L".";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::Azure;
			this->button15->ForeColor = System::Drawing::Color::Navy;
			this->button15->Location = System::Drawing::Point(299, 372);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(75, 38);
			this->button15->TabIndex = 16;
			this->button15->Text = L"=";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::LavenderBlush;
			this->button16->ForeColor = System::Drawing::Color::Navy;
			this->button16->Location = System::Drawing::Point(411, 372);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(75, 38);
			this->button16->TabIndex = 17;
			this->button16->Text = L"/";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::SeaShell;
			this->button17->ForeColor = System::Drawing::Color::Navy;
			this->button17->Location = System::Drawing::Point(165, 459);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(229, 47);
			this->button17->TabIndex = 18;
			this->button17->Text = L"CLEAR";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &Form1::button17_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(565, 601);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Ecran);
			this->Name = L"Form1";
			this->Text = L"Rechner";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Ecran->Text += "1";

	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Ecran->Text += "2";

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Ecran->Text += "3";

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (Ecran->Text != "") 
		{
			firstNum = Double::Parse(Ecran->Text);
			Ecran->Text = "";
			operation = "+";

		}
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Ecran->Text += "4";

	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Ecran->Text += "5";

	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Ecran->Text += "6";

	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (Ecran->Text != "")
		{
			firstNum = Double::Parse(Ecran->Text);
			Ecran->Text = "";
			operation = "x";

		}

	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Ecran->Text += "7";

	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Ecran->Text += "8";

	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Ecran->Text += "9";
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (Ecran->Text != "")
		{
			firstNum = Double::Parse(Ecran->Text);
			Ecran->Text = "";
			operation = "-";

		}

	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		Ecran->Text += "0";

	}
	private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Ecran->Text += ",";

	}
	private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		if (Ecran->Text != "")
		{
			secondNum = Double::Parse(Ecran->Text);
		}
		else
		{
			secondNum = 0;
		}

		if (operation == "+")
		{
			Ecran->Text = (firstNum + secondNum).ToString();

		}

		if (operation == "x")
		{
			Ecran->Text = (firstNum * secondNum).ToString();

		}

		if (operation == "-")
		{
			Ecran->Text = (firstNum - secondNum).ToString();

		}

		if (operation == "/")
		{
			if (secondNum == 0)
			{
				MessageBox::Show(" Nu-i frumos sa imparti la Zero! ", " Eroare! ", MessageBoxButtons::OK, MessageBoxIcon::Warning);

			}
			else
			{
				Ecran->Text = (firstNum / secondNum).ToString();
			}
			

		}

	}
	private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (Ecran->Text != "")
		{
			firstNum = Double::Parse(Ecran->Text);
			Ecran->Text = "";
			operation = "/";

		}

	}
	
	private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) 
	{

		Ecran->Text = "";
		operation = "";
	}
};
}
