#pragma once
#include<Windows.h>
namespace Organaizer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;
	using namespace Microsoft::Win32;
	/// <summary>
	/// Сводка для MyForm
	/// </summary>

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Button^  add;
	private: System::Windows::Forms::Button^  Видалити;




	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand1;
	private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapter1;
	private: System::Data::DataSet^  dataSet1;
	private: System::Data::OleDb::OleDbConnection^  oleDbConnection1;
	private: System::Data::DataTable^  dataTable1;
	private: System::Data::DataColumn^  dataColumn1;
	private: System::Data::DataColumn^  dataColumn2;




	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dateDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  taskDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Date;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Task;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn3;



	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  контактиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  детальнішеToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  зворотнійЗвязокToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  авторToolStripMenuItem;




	private: System::Windows::Forms::DataGridViewTextBoxColumn^  dataGridViewTextBoxColumn2;

	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->dataSet1 = (gcnew System::Data::DataSet());
			this->dataTable1 = (gcnew System::Data::DataTable());
			this->dataColumn1 = (gcnew System::Data::DataColumn());
			this->dataColumn2 = (gcnew System::Data::DataColumn());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->add = (gcnew System::Windows::Forms::Button());
			this->Видалити = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbConnection1 = (gcnew System::Data::OleDb::OleDbConnection());
			this->oleDbInsertCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDataAdapter1 = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->dateDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->taskDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Task = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->контактиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->зворотнійЗвязокToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->авторToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->детальнішеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->DataBindings->Add((gcnew System::Windows::Forms::Binding(L"Text", this->dataSet1, L"Table1.Task", true)));
			this->richTextBox1->DataBindings->Add((gcnew System::Windows::Forms::Binding(L"Tag", this->dataSet1, L"Table1.Task", true)));
			this->richTextBox1->Location = System::Drawing::Point(12, 56);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->richTextBox1->Size = System::Drawing::Size(205, 178);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// dataSet1
			// 
			this->dataSet1->DataSetName = L"NewDataSet";
			this->dataSet1->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(1) { this->dataTable1 });
			// 
			// dataTable1
			// 
			this->dataTable1->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(2) { this->dataColumn1, this->dataColumn2 });
			this->dataTable1->TableName = L"Table1";
			// 
			// dataColumn1
			// 
			this->dataColumn1->ColumnName = L"Date";
			// 
			// dataColumn2
			// 
			this->dataColumn2->ColumnName = L"Task";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CustomFormat = L"dd.MM.yyyy";
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(12, 27);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->dateTimePicker1->Size = System::Drawing::Size(205, 20);
			this->dateTimePicker1->TabIndex = 2;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &MyForm::dateTimePicker1_ValueChanged);
			// 
			// add
			// 
			this->add->Location = System::Drawing::Point(12, 240);
			this->add->Name = L"add";
			this->add->Size = System::Drawing::Size(100, 25);
			this->add->TabIndex = 3;
			this->add->Text = L"Додати";
			this->add->UseVisualStyleBackColor = true;
			this->add->Click += gcnew System::EventHandler(this, &MyForm::Додати_Click);
			// 
			// Видалити
			// 
			this->Видалити->Location = System::Drawing::Point(118, 240);
			this->Видалити->Name = L"Видалити";
			this->Видалити->Size = System::Drawing::Size(100, 25);
			this->Видалити->TabIndex = 4;
			this->Видалити->Text = L"Видалити";
			this->Видалити->UseVisualStyleBackColor = true;
			this->Видалити->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Location = System::Drawing::Point(345, 161);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(8, 8);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"groupBox1";
			// 
			// oleDbConnection1
			// 
			this->oleDbConnection1->ConnectionString = L"Provider=Microsoft.Jet.OLEDB.4.0;Data Source=" + Application::StartupPath + "\\organizer.mdb";
			// 
			// oleDbInsertCommand1
			// 
			this->oleDbInsertCommand1->CommandText = L"INSERT INTO `organizer` (`Task`, `data`) VALUES (\?, \?)";
			this->oleDbInsertCommand1->Connection = this->oleDbConnection1;
			this->oleDbInsertCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(2) {
				(gcnew System::Data::OleDb::OleDbParameter(L"Task",
					System::Data::OleDb::OleDbType::LongVarWChar, 0, L"Task")), (gcnew System::Data::OleDb::OleDbParameter(L"data", System::Data::OleDb::OleDbType::VarWChar,
						0, L"data"))
			});
			// 
			// oleDbUpdateCommand1
			// 
			this->oleDbUpdateCommand1->CommandText = L"UPDATE `organizer` SET `Task` = \?, `data` = \? WHERE ((`Код` = \?) AND ((\? = 1 AND "
				L"`data` IS NULL) OR (`data` = \?)))";
			this->oleDbUpdateCommand1->Connection = this->oleDbConnection1;
			this->oleDbUpdateCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(5) {
				(gcnew System::Data::OleDb::OleDbParameter(L"Task",
					System::Data::OleDb::OleDbType::LongVarWChar, 0, L"Task")), (gcnew System::Data::OleDb::OleDbParameter(L"data", System::Data::OleDb::OleDbType::VarWChar,
						0, L"data")), (gcnew System::Data::OleDb::OleDbParameter(L"Original_Код", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input,
							false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"Код", System::Data::DataRowVersion::Original, nullptr)),
							(gcnew System::Data::OleDb::OleDbParameter(L"IsNull_data", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input,
								static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"data", System::Data::DataRowVersion::Original, true, nullptr)),
								(gcnew System::Data::OleDb::OleDbParameter(L"Original_data", System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input,
									false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"data", System::Data::DataRowVersion::Original, nullptr))
			});
			// 
			// oleDbDeleteCommand1
			// 
			this->oleDbDeleteCommand1->CommandText = L"DELETE FROM `organizer` WHERE ((`Код` = \?) AND ((\? = 1 AND `data` IS NULL) OR (`d"
				L"ata` = \?)))";
			this->oleDbDeleteCommand1->Connection = this->oleDbConnection1;
			this->oleDbDeleteCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(3) {
				(gcnew System::Data::OleDb::OleDbParameter(L"Original_Код",
					System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
					static_cast<System::Byte>(0), L"Код", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_data",
						System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0),
						L"data", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_data",
							System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0),
							static_cast<System::Byte>(0), L"data", System::Data::DataRowVersion::Original, nullptr))
			});
			// 
			// oleDbDataAdapter1
			// 
			this->oleDbDataAdapter1->DeleteCommand = this->oleDbDeleteCommand1;
			this->oleDbDataAdapter1->InsertCommand = this->oleDbInsertCommand1;
			this->oleDbDataAdapter1->SelectCommand = this->oleDbSelectCommand1;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__1 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(3) {
				(gcnew System::Data::Common::DataColumnMapping(L"Код",
					L"Код")), (gcnew System::Data::Common::DataColumnMapping(L"Task", L"Task")), (gcnew System::Data::Common::DataColumnMapping(L"data",
						L"data"))
			};
			this->oleDbDataAdapter1->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {
				(gcnew System::Data::Common::DataTableMapping(L"Table",
					L"organizer", __mcTemp__1))
			});
			this->oleDbDataAdapter1->UpdateCommand = this->oleDbUpdateCommand1;
			// 
			// dateDataGridViewTextBoxColumn
			// 
			this->dateDataGridViewTextBoxColumn->Name = L"dateDataGridViewTextBoxColumn";
			// 
			// taskDataGridViewTextBoxColumn
			// 
			this->taskDataGridViewTextBoxColumn->Name = L"taskDataGridViewTextBoxColumn";
			// 
			// Date
			// 
			this->Date->DataPropertyName = L"Date";
			this->Date->HeaderText = L"Date";
			this->Date->Name = L"Date";
			// 
			// Task
			// 
			this->Task->DataPropertyName = L"Task";
			this->Task->HeaderText = L"Task";
			this->Task->Name = L"Task";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->контактиToolStripMenuItem,
					this->детальнішеToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(232, 24);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// контактиToolStripMenuItem
			// 
			this->контактиToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->зворотнійЗвязокToolStripMenuItem,
					this->авторToolStripMenuItem
			});
			this->контактиToolStripMenuItem->Name = L"контактиToolStripMenuItem";
			this->контактиToolStripMenuItem->Size = System::Drawing::Size(64, 20);
			this->контактиToolStripMenuItem->Text = L"Про нас";
			this->контактиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::контактиToolStripMenuItem_Click);
			// 
			// зворотнійЗвязокToolStripMenuItem
			// 
			this->зворотнійЗвязокToolStripMenuItem->Name = L"зворотнійЗвязокToolStripMenuItem";
			this->зворотнійЗвязокToolStripMenuItem->Size = System::Drawing::Size(171, 22);
			this->зворотнійЗвязокToolStripMenuItem->Text = L"Зворотній зв\'язок";
			this->зворотнійЗвязокToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::зворотнійЗвязокToolStripMenuItem_Click);
			// 
			// авторToolStripMenuItem
			// 
			this->авторToolStripMenuItem->Name = L"авторToolStripMenuItem";
			this->авторToolStripMenuItem->Size = System::Drawing::Size(171, 22);
			this->авторToolStripMenuItem->Text = L"Автор";
			this->авторToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::авторToolStripMenuItem_Click);
			// 
			// детальнішеToolStripMenuItem
			// 
			this->детальнішеToolStripMenuItem->Name = L"детальнішеToolStripMenuItem";
			this->детальнішеToolStripMenuItem->Size = System::Drawing::Size(84, 20);
			this->детальнішеToolStripMenuItem->Text = L"Детальніше";
			this->детальнішеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::детальнішеToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->ClientSize = System::Drawing::Size(232, 281);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->Видалити);
			this->Controls->Add(this->add);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Органайзер";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataSet1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataTable1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}



#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		this->oleDbSelectCommand1->CommandText = L"SELECT * FROM organizer WHERE my_data = '" + dateTimePicker1->Value.ToShortDateString() + "'";
		this->oleDbSelectCommand1->Connection = this->oleDbConnection1;
		oleDbDataAdapter1->Fill(dataTable1);

		HKEY hKey;
		TCHAR buffer[MAX_PATH];
		GetModuleFileName(NULL, buffer, MAX_PATH + 1);
		RegCreateKeyEx(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Windows\\CurrentVersion\\Run", 0, NULL, 0, KEY_ALL_ACCESS, NULL, &hKey, NULL);
		RegSetValueEx(hKey, L"Органайзер", 0, REG_SZ, (PBYTE)buffer, 2 * wcslen(buffer) + 1);
		RegCloseKey(hKey);
	}

	private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		String ^dt = dateTimePicker1->Value.ToShortDateString();
		dataTable1->Clear();
		this->oleDbSelectCommand1->CommandText = L"SELECT * FROM organizer WHERE my_data = '" + dt + "'";
		this->oleDbSelectCommand1->Connection = this->oleDbConnection1;
		oleDbDataAdapter1->Fill(dataTable1);
	}
	private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void Додати_Click(System::Object^  sender, System::EventArgs^  e) {
		String ^dt = dateTimePicker1->Value.ToShortDateString();
		String ^str = richTextBox1->Text;
		oleDbConnection1->Open();
		this->oleDbSelectCommand1->CommandText = L"SELECT Task FROM organizer WHERE (my_data = '" + dt + "') AND Task = \? ";
		this->oleDbSelectCommand1->Connection = this->oleDbConnection1;
		if (str == "") {
			MessageBoxButtons button = MessageBoxButtons::OK;
			Organaizer::MessageBox::Show(this, "Поле не може бути порожнім", "Увага", button, MessageBoxIcon::Warning);
		}
		else {
			try {
				oleDbDeleteCommand1->CommandText = "DELETE FROM organizer WHERE (my_data='" + dt + "')";
				oleDbDataAdapter1->DeleteCommand->ExecuteNonQuery();
				oleDbInsertCommand1->CommandText = "INSERT INTO organizer (Task, my_data) VALUES ('" + str + "', '" + dt + "')";
				oleDbDataAdapter1->InsertCommand->ExecuteNonQuery();
				oleDbDataAdapter1->Update(dataSet1);
				MessageBoxButtons button = MessageBoxButtons::OK;
				Organaizer::MessageBox::Show(this, "Успішно додано!", "Додано", button, MessageBoxIcon::Information);
			}
			catch (...) {
				MessageBoxButtons button = MessageBoxButtons::OK;
				Organaizer::MessageBox::Show(this, "Не вдалося додати, спробуйте ще раз або зверніться в службу підтримки", "Помилка додавання", button, MessageBoxIcon::Error);
			}
		}
		oleDbConnection1->Close();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		String ^dt = dateTimePicker1->Value.ToShortDateString();
		String ^str = richTextBox1->Text;
		if (str == "") {
			MessageBoxButtons button = MessageBoxButtons::OK;
			Organaizer::MessageBox::Show(this, "Ви не додавали задачу на даний день", "Увага", button, MessageBoxIcon::Warning);
		}
		else if (MessageBox::Show(this, "Ви дійсно хочете видалити завдання за '" + dt + "'?", "Видалення", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		{
			try {
				oleDbConnection1->Open();
				richTextBox1->Clear();
				oleDbDeleteCommand1->CommandText = "DELETE FROM organizer WHERE (my_data='" + dt + "')";
				oleDbDataAdapter1->DeleteCommand->ExecuteNonQuery();
				oleDbDataAdapter1->Update(dataSet1);
				oleDbConnection1->Close();
				MessageBoxButtons button = MessageBoxButtons::OK;
				Organaizer::MessageBox::Show(this, "Успішно видалено!", "Видалено", button, MessageBoxIcon::Information);
				oleDbConnection1->Close();
			}
			catch (...) {
				MessageBoxButtons button = MessageBoxButtons::OK;
				Organaizer::MessageBox::Show(this, "Не вдалося видалити, спробуйте ще раз або зверніться в службу підтримки", "Помилка видалення", button, MessageBoxIcon::Error);
			}
		}
	}

	private: System::Void oleDbDataAdapter1_RowUpdated(System::Object^  sender, System::Data::OleDb::OleDbRowUpdatedEventArgs^  e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

	}
	private: System::Void dataGridView1_CellContentClick_1(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

	}
	private: System::Void oleDbConnection1_InfoMessage(System::Object^  sender, System::Data::OleDb::OleDbInfoMessageEventArgs^  e) {
	}
	private: System::Void контактиToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void зворотнійЗвязокToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBoxButtons button = MessageBoxButtons::OK;
		Organaizer::MessageBox::Show(this, "Telegram: @sasharoyenko\nE-mail: sasharoyenko@gmail.com ", "Зворотній зв'язок", button);
	}
	private: System::Void авторToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBoxButtons button = MessageBoxButtons::OK;
		Organaizer::MessageBox::Show(this, "Автор: Роєнко Олександр \nГруппа: ТІ-72", "Автор", button);
	}
	private: System::Void детальнішеToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		MessageBoxButtons button = MessageBoxButtons::OK;
		Organaizer::MessageBox::Show(this, "1) Виберіть дату в календарі.\n2) В текстовому полі будуть відображатися ваші завдання, якщо вони є. \n3) Для того щоб додати нове завдання, виберіть дату, в тектовому полі введіть завдання та натисніть кнопку 'Додати'.\n4) Для того щоб видалити завдання, виберіть дату та натисніть кнопку 'Видалити'.", "Детальніше", button);
	}
	private: System::Void bindingNavigator1_RefreshItems(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void bindingSource1_CurrentChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
