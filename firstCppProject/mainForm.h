#pragma once

namespace firstCppProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for mainForm
	/// </summary>
	public ref class mainForm : public System::Windows::Forms::Form
	{
	public:
		mainForm(void)
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
		~mainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ FirstName;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ LastName;
	private: System::Windows::Forms::Label^ welcomlabel;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Button^ Clearbutton;






	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->FirstName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->LastName = (gcnew System::Windows::Forms::TextBox());
			this->welcomlabel = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Clearbutton = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(22, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 23);
			this->label1->TabIndex = 0;
			this->label1->Text = L"First Name";
			// 
			// FirstName
			// 
			this->FirstName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->FirstName->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FirstName->Location = System::Drawing::Point(26, 44);
			this->FirstName->Name = L"FirstName";
			this->FirstName->Size = System::Drawing::Size(638, 24);
			this->FirstName->TabIndex = 1;
			this->FirstName->TextChanged += gcnew System::EventHandler(this, &mainForm::FirstName_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(22, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(91, 23);
			this->label2->TabIndex = 2;
			this->label2->Text = L"LastName";
			this->label2->Click += gcnew System::EventHandler(this, &mainForm::LastName_Click);
			// 
			// LastName
			// 
			this->LastName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->LastName->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LastName->Location = System::Drawing::Point(26, 131);
			this->LastName->Name = L"LastName";
			this->LastName->Size = System::Drawing::Size(638, 24);
			this->LastName->TabIndex = 3;
			// 
			// welcomlabel
			// 
			this->welcomlabel->AutoSize = true;
			this->welcomlabel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->welcomlabel->Location = System::Drawing::Point(21, 202);
			this->welcomlabel->Name = L"welcomlabel";
			this->welcomlabel->Size = System::Drawing::Size(69, 27);
			this->welcomlabel->TabIndex = 4;
			this->welcomlabel->Text = L"label3";
			this->welcomlabel->Click += gcnew System::EventHandler(this, &mainForm::label3_Click);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->button1, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->Clearbutton, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(26, 355);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(638, 76);
			this->tableLayoutPanel1->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(3, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(313, 69);
			this->button1->TabIndex = 0;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &mainForm::button1_Click);
			// 
			// Clearbutton
			// 
			this->Clearbutton->Location = System::Drawing::Point(322, 3);
			this->Clearbutton->Name = L"Clearbutton";
			this->Clearbutton->Size = System::Drawing::Size(313, 69);
			this->Clearbutton->TabIndex = 1;
			this->Clearbutton->Text = L"CLEAR";
			this->Clearbutton->UseVisualStyleBackColor = true;
			this->Clearbutton->Click += gcnew System::EventHandler(this, &mainForm::Clearbutton_Click);
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(676, 443);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->welcomlabel);
			this->Controls->Add(this->LastName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->FirstName);
			this->Controls->Add(this->label1);
			this->MinimumSize = System::Drawing::Size(573, 419);
			this->Name = L"mainForm";
			this->Text = L"Welcome";
			this->Load += gcnew System::EventHandler(this, &mainForm::mainForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	
	
	private: System::Void OKbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ firstName = this->FirstName->Text;
		String^ lastName = this->LastName->Text;
		this->welcomlabel->Text = "Hello " + firstName + " " + lastName;
	
	}
	private: System::Void Clearbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->FirstName->Text = "";
		this->LastName->Text = "";
		this->welcomlabel-> Text = "";
	}
	private: System::Void mainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		this->welcomlabel->Text = "";
	}
	
};
}
