#pragma once
#include "MyForm1.h"
#include <Windows.h>
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::ToolTip^ toolTip2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTip2 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(244, 263);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 52);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(369, 263);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 52);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(195, 113);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Username\?";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(195, 182);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Password\?";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(324, 106);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(159, 26);
			this->textBox1->TabIndex = 4;
			this->toolTip1->SetToolTip(this->textBox1, L"??\'? ???????????");
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(324, 182);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(159, 26);
			this->textBox2->TabIndex = 5;
			this->toolTip2->SetToolTip(this->textBox2, L"??????");
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(28, 79);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(134, 216);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(667, 411);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "")
		{
			MessageBox::Show("??????? Username !!!", "COM", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else if (textBox2->Text == "")
		{
			MessageBox::Show("??????? ?????? !!!", "?????!!!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
		else if (textBox1->Text == "S" && textBox2->Text == "1")
		{
			this->Hide();
			MyForm1^ form2 = gcnew MyForm1();
			form2->ShowDialog();
		}
		else
		{
			MessageBox::Show("???????????? ??????", "?????!!!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}




private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
