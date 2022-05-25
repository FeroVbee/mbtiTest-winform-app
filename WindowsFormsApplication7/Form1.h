#pragma once

namespace WindowsFormsApplication7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::IO;

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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newToolStripMenuItem;







	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;












	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^  searchToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator5;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TextBox^  userBox;

	private: System::Windows::Forms::ProgressBar^  progressBar2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Timer^  timer1;










	private: System::Windows::Forms::RichTextBox^  richTextBox1;

	private: System::Windows::Forms::Button^  nextButton;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  pleg1;
	private: System::Windows::Forms::RadioButton^  mel1;
	private: System::Windows::Forms::RadioButton^  kol1;
	private: System::Windows::Forms::RadioButton^  sang1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RadioButton^  kol2;
	private: System::Windows::Forms::RadioButton^  pleg2;
	private: System::Windows::Forms::RadioButton^  mel2;
	private: System::Windows::Forms::RadioButton^  sang2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::RadioButton^  sang3;
	private: System::Windows::Forms::RadioButton^  pleg3;
	private: System::Windows::Forms::RadioButton^  mel3;
	private: System::Windows::Forms::RadioButton^  kol3;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::RadioButton^  pleg4;

	private: System::Windows::Forms::RadioButton^  mel4;

	private: System::Windows::Forms::RadioButton^  sang4;


	private: System::Windows::Forms::RadioButton^  kol4;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::RadioButton^  sang5;
	private: System::Windows::Forms::RadioButton^  pleg5;
	private: System::Windows::Forms::RadioButton^  mel5;
	private: System::Windows::Forms::RadioButton^  kol5;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::RadioButton^  sang6;
	private: System::Windows::Forms::RadioButton^  pleg6;
	private: System::Windows::Forms::RadioButton^  kol6;
	private: System::Windows::Forms::RadioButton^  mel6;
	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::RadioButton^  mel7;
	private: System::Windows::Forms::RadioButton^  sang7;
	private: System::Windows::Forms::RadioButton^  pleg7;
	private: System::Windows::Forms::RadioButton^  kol7;
	private: System::Windows::Forms::GroupBox^  groupBox8;
	private: System::Windows::Forms::RadioButton^  kol8;
	private: System::Windows::Forms::RadioButton^  mel8;
	private: System::Windows::Forms::RadioButton^  sang8;
	private: System::Windows::Forms::RadioButton^  pleg8;
	private: System::Windows::Forms::GroupBox^  groupBox9;
	private: System::Windows::Forms::RadioButton^  mel9;
	private: System::Windows::Forms::RadioButton^  sang9;
	private: System::Windows::Forms::RadioButton^  kol9;
	private: System::Windows::Forms::RadioButton^  pleg9;
	private: System::Windows::Forms::GroupBox^  groupBox10;
	private: System::Windows::Forms::RadioButton^  sang10;
	private: System::Windows::Forms::RadioButton^  pleg10;
	private: System::Windows::Forms::RadioButton^  mel10;
	private: System::Windows::Forms::RadioButton^  kol10;
	private: System::Windows::Forms::GroupBox^  groupBox11;
	private: System::Windows::Forms::RadioButton^  kol11;
	private: System::Windows::Forms::RadioButton^  sang11;
	private: System::Windows::Forms::RadioButton^  mel11;
	private: System::Windows::Forms::RadioButton^  pleg11;
	private: System::Windows::Forms::GroupBox^  groupBox12;
	private: System::Windows::Forms::RadioButton^  pleg12;
	private: System::Windows::Forms::RadioButton^  kol12;
	private: System::Windows::Forms::RadioButton^  mel12;
	private: System::Windows::Forms::RadioButton^  sang12;
	private: System::Windows::Forms::GroupBox^  groupBox13;
	private: System::Windows::Forms::RadioButton^  sang13;
	private: System::Windows::Forms::RadioButton^  pleg13;
	private: System::Windows::Forms::RadioButton^  kol13;
	private: System::Windows::Forms::RadioButton^  mel13;
	private: System::Windows::Forms::GroupBox^  groupBox14;
	private: System::Windows::Forms::RadioButton^  kol14;
	private: System::Windows::Forms::RadioButton^  sang14;
	private: System::Windows::Forms::RadioButton^  mel14;
	private: System::Windows::Forms::RadioButton^  pleg14;
	private: System::Windows::Forms::GroupBox^  groupBox15;
	private: System::Windows::Forms::RadioButton^  sang15;
	private: System::Windows::Forms::RadioButton^  kol15;
	private: System::Windows::Forms::RadioButton^  mel15;
	private: System::Windows::Forms::RadioButton^  pleg15;
	private: System::Windows::Forms::GroupBox^  groupBox16;
	private: System::Windows::Forms::RadioButton^  kol16;
	private: System::Windows::Forms::RadioButton^  pleg16;
	private: System::Windows::Forms::RadioButton^  sang16;
	private: System::Windows::Forms::RadioButton^  mel16;
	private: System::Windows::Forms::GroupBox^  groupBox17;
	private: System::Windows::Forms::RadioButton^  kol17;
	private: System::Windows::Forms::RadioButton^  pleg17;
	private: System::Windows::Forms::RadioButton^  mel17;
	private: System::Windows::Forms::RadioButton^  sang17;
	private: System::Windows::Forms::GroupBox^  groupBox18;
	private: System::Windows::Forms::RadioButton^  sang18;
	private: System::Windows::Forms::RadioButton^  mel18;
	private: System::Windows::Forms::RadioButton^  pleg18;
	private: System::Windows::Forms::RadioButton^  kol18;
	private: System::Windows::Forms::GroupBox^  groupBox19;
	private: System::Windows::Forms::RadioButton^  kol19;
	private: System::Windows::Forms::RadioButton^  mel19;
	private: System::Windows::Forms::RadioButton^  sang19;
	private: System::Windows::Forms::RadioButton^  pleg19;
	private: System::Windows::Forms::GroupBox^  groupBox20;
	private: System::Windows::Forms::RadioButton^  mel20;
	private: System::Windows::Forms::RadioButton^  sang20;
	private: System::Windows::Forms::RadioButton^  kol20;
	private: System::Windows::Forms::RadioButton^  pleg20;
private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
private: System::Windows::Forms::PictureBox^  picturemel;
private: System::Windows::Forms::PictureBox^  picturekol;
private: System::Windows::Forms::PictureBox^  picturesang;
private: System::Windows::Forms::PictureBox^  picturepleg;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::TextBox^  textBoxv;
private: System::Windows::Forms::GroupBox^  groupBox25;

private: System::Windows::Forms::RadioButton^  sang25;
private: System::Windows::Forms::RadioButton^  pleg25;
private: System::Windows::Forms::RadioButton^  kol25;



private: System::Windows::Forms::RadioButton^  mel25;

private: System::Windows::Forms::PictureBox^  picmel21;
private: System::Windows::Forms::PictureBox^  pictureBox4;
private: System::Windows::Forms::PictureBox^  pictureBox3;
private: System::Windows::Forms::PictureBox^  picsang21;
private: System::Windows::Forms::GroupBox^  groupBox24;
private: System::Windows::Forms::RadioButton^  pleg24;


private: System::Windows::Forms::RadioButton^  kol24;

private: System::Windows::Forms::RadioButton^  sang24;

private: System::Windows::Forms::PictureBox^  pictureBox5;
private: System::Windows::Forms::PictureBox^  pictureBox6;
private: System::Windows::Forms::PictureBox^  pictureBox7;
private: System::Windows::Forms::PictureBox^  pictureBox8;
private: System::Windows::Forms::RadioButton^  mel24;
private: System::Windows::Forms::GroupBox^  groupBox23;

private: System::Windows::Forms::RadioButton^  sang23;
private: System::Windows::Forms::RadioButton^  mel23;
private: System::Windows::Forms::RadioButton^  kol23;













private: System::Windows::Forms::PictureBox^  pictureBox9;
private: System::Windows::Forms::PictureBox^  pictureBox10;
private: System::Windows::Forms::PictureBox^  pictureBox11;
private: System::Windows::Forms::PictureBox^  pictureBox12;
private: System::Windows::Forms::RadioButton^  pleg23;
private: System::Windows::Forms::GroupBox^  groupBox22;
private: System::Windows::Forms::RadioButton^  pleg22;






private: System::Windows::Forms::RadioButton^  mel22;

private: System::Windows::Forms::RadioButton^  sang22;

private: System::Windows::Forms::PictureBox^  pictureBox13;
private: System::Windows::Forms::PictureBox^  pictureBox14;
private: System::Windows::Forms::PictureBox^  pictureBox15;
private: System::Windows::Forms::PictureBox^  pictureBox16;
private: System::Windows::Forms::RadioButton^  kol22;

private: System::Windows::Forms::GroupBox^  groupBox21;
private: System::Windows::Forms::RadioButton^  kol21;

private: System::Windows::Forms::RadioButton^  pleg21;

private: System::Windows::Forms::RadioButton^  mel21;

private: System::Windows::Forms::PictureBox^  pictureBox17;
private: System::Windows::Forms::PictureBox^  pictureBox18;
private: System::Windows::Forms::PictureBox^  pictureBox19;
private: System::Windows::Forms::PictureBox^  pictureBox20;
private: System::Windows::Forms::RadioButton^  sang21;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::ToolStripMenuItem^  keToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  sanguinisToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  kolerisToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  melankolisToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^  plegmatisToolStripMenuItem;
































	protected: 




	protected: 


	protected: 



	protected: 

	protected: 


	private: System::ComponentModel::IContainer^  components;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->searchToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator5 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->keToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sanguinisToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->kolerisToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->melankolisToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->plegmatisToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->userBox = (gcnew System::Windows::Forms::TextBox());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->nextButton = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pleg1 = (gcnew System::Windows::Forms::RadioButton());
			this->mel1 = (gcnew System::Windows::Forms::RadioButton());
			this->kol1 = (gcnew System::Windows::Forms::RadioButton());
			this->sang1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->kol2 = (gcnew System::Windows::Forms::RadioButton());
			this->pleg2 = (gcnew System::Windows::Forms::RadioButton());
			this->mel2 = (gcnew System::Windows::Forms::RadioButton());
			this->sang2 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->sang3 = (gcnew System::Windows::Forms::RadioButton());
			this->pleg3 = (gcnew System::Windows::Forms::RadioButton());
			this->mel3 = (gcnew System::Windows::Forms::RadioButton());
			this->kol3 = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->pleg4 = (gcnew System::Windows::Forms::RadioButton());
			this->mel4 = (gcnew System::Windows::Forms::RadioButton());
			this->sang4 = (gcnew System::Windows::Forms::RadioButton());
			this->kol4 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->sang5 = (gcnew System::Windows::Forms::RadioButton());
			this->pleg5 = (gcnew System::Windows::Forms::RadioButton());
			this->mel5 = (gcnew System::Windows::Forms::RadioButton());
			this->kol5 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->sang6 = (gcnew System::Windows::Forms::RadioButton());
			this->pleg6 = (gcnew System::Windows::Forms::RadioButton());
			this->kol6 = (gcnew System::Windows::Forms::RadioButton());
			this->mel6 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->mel7 = (gcnew System::Windows::Forms::RadioButton());
			this->sang7 = (gcnew System::Windows::Forms::RadioButton());
			this->pleg7 = (gcnew System::Windows::Forms::RadioButton());
			this->kol7 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->kol8 = (gcnew System::Windows::Forms::RadioButton());
			this->mel8 = (gcnew System::Windows::Forms::RadioButton());
			this->sang8 = (gcnew System::Windows::Forms::RadioButton());
			this->pleg8 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox9 = (gcnew System::Windows::Forms::GroupBox());
			this->mel9 = (gcnew System::Windows::Forms::RadioButton());
			this->sang9 = (gcnew System::Windows::Forms::RadioButton());
			this->kol9 = (gcnew System::Windows::Forms::RadioButton());
			this->pleg9 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox10 = (gcnew System::Windows::Forms::GroupBox());
			this->sang10 = (gcnew System::Windows::Forms::RadioButton());
			this->pleg10 = (gcnew System::Windows::Forms::RadioButton());
			this->mel10 = (gcnew System::Windows::Forms::RadioButton());
			this->kol10 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox11 = (gcnew System::Windows::Forms::GroupBox());
			this->kol11 = (gcnew System::Windows::Forms::RadioButton());
			this->sang11 = (gcnew System::Windows::Forms::RadioButton());
			this->mel11 = (gcnew System::Windows::Forms::RadioButton());
			this->pleg11 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox12 = (gcnew System::Windows::Forms::GroupBox());
			this->pleg12 = (gcnew System::Windows::Forms::RadioButton());
			this->kol12 = (gcnew System::Windows::Forms::RadioButton());
			this->mel12 = (gcnew System::Windows::Forms::RadioButton());
			this->sang12 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox13 = (gcnew System::Windows::Forms::GroupBox());
			this->sang13 = (gcnew System::Windows::Forms::RadioButton());
			this->pleg13 = (gcnew System::Windows::Forms::RadioButton());
			this->kol13 = (gcnew System::Windows::Forms::RadioButton());
			this->mel13 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox14 = (gcnew System::Windows::Forms::GroupBox());
			this->kol14 = (gcnew System::Windows::Forms::RadioButton());
			this->sang14 = (gcnew System::Windows::Forms::RadioButton());
			this->mel14 = (gcnew System::Windows::Forms::RadioButton());
			this->pleg14 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox15 = (gcnew System::Windows::Forms::GroupBox());
			this->sang15 = (gcnew System::Windows::Forms::RadioButton());
			this->kol15 = (gcnew System::Windows::Forms::RadioButton());
			this->mel15 = (gcnew System::Windows::Forms::RadioButton());
			this->pleg15 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox16 = (gcnew System::Windows::Forms::GroupBox());
			this->kol16 = (gcnew System::Windows::Forms::RadioButton());
			this->pleg16 = (gcnew System::Windows::Forms::RadioButton());
			this->sang16 = (gcnew System::Windows::Forms::RadioButton());
			this->mel16 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox17 = (gcnew System::Windows::Forms::GroupBox());
			this->kol17 = (gcnew System::Windows::Forms::RadioButton());
			this->pleg17 = (gcnew System::Windows::Forms::RadioButton());
			this->mel17 = (gcnew System::Windows::Forms::RadioButton());
			this->sang17 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox18 = (gcnew System::Windows::Forms::GroupBox());
			this->sang18 = (gcnew System::Windows::Forms::RadioButton());
			this->mel18 = (gcnew System::Windows::Forms::RadioButton());
			this->pleg18 = (gcnew System::Windows::Forms::RadioButton());
			this->kol18 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox19 = (gcnew System::Windows::Forms::GroupBox());
			this->kol19 = (gcnew System::Windows::Forms::RadioButton());
			this->mel19 = (gcnew System::Windows::Forms::RadioButton());
			this->sang19 = (gcnew System::Windows::Forms::RadioButton());
			this->pleg19 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox20 = (gcnew System::Windows::Forms::GroupBox());
			this->mel20 = (gcnew System::Windows::Forms::RadioButton());
			this->sang20 = (gcnew System::Windows::Forms::RadioButton());
			this->kol20 = (gcnew System::Windows::Forms::RadioButton());
			this->pleg20 = (gcnew System::Windows::Forms::RadioButton());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->picturemel = (gcnew System::Windows::Forms::PictureBox());
			this->picturekol = (gcnew System::Windows::Forms::PictureBox());
			this->picturesang = (gcnew System::Windows::Forms::PictureBox());
			this->picturepleg = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxv = (gcnew System::Windows::Forms::TextBox());
			this->groupBox25 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox24 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox23 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox22 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox21 = (gcnew System::Windows::Forms::GroupBox());
			this->kol21 = (gcnew System::Windows::Forms::RadioButton());
			this->pleg21 = (gcnew System::Windows::Forms::RadioButton());
			this->mel21 = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->sang21 = (gcnew System::Windows::Forms::RadioButton());
			this->pleg22 = (gcnew System::Windows::Forms::RadioButton());
			this->mel22 = (gcnew System::Windows::Forms::RadioButton());
			this->sang22 = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->kol22 = (gcnew System::Windows::Forms::RadioButton());
			this->sang23 = (gcnew System::Windows::Forms::RadioButton());
			this->mel23 = (gcnew System::Windows::Forms::RadioButton());
			this->kol23 = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pleg23 = (gcnew System::Windows::Forms::RadioButton());
			this->pleg24 = (gcnew System::Windows::Forms::RadioButton());
			this->kol24 = (gcnew System::Windows::Forms::RadioButton());
			this->sang24 = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->mel24 = (gcnew System::Windows::Forms::RadioButton());
			this->pleg25 = (gcnew System::Windows::Forms::RadioButton());
			this->kol25 = (gcnew System::Windows::Forms::RadioButton());
			this->mel25 = (gcnew System::Windows::Forms::RadioButton());
			this->picmel21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->picsang21 = (gcnew System::Windows::Forms::PictureBox());
			this->sang25 = (gcnew System::Windows::Forms::RadioButton());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->groupBox9->SuspendLayout();
			this->groupBox10->SuspendLayout();
			this->groupBox11->SuspendLayout();
			this->groupBox12->SuspendLayout();
			this->groupBox13->SuspendLayout();
			this->groupBox14->SuspendLayout();
			this->groupBox15->SuspendLayout();
			this->groupBox16->SuspendLayout();
			this->groupBox17->SuspendLayout();
			this->groupBox18->SuspendLayout();
			this->groupBox19->SuspendLayout();
			this->groupBox20->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picturemel))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picturekol))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picturesang))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picturepleg))->BeginInit();
			this->groupBox25->SuspendLayout();
			this->groupBox24->SuspendLayout();
			this->groupBox23->SuspendLayout();
			this->groupBox22->SuspendLayout();
			this->groupBox21->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picmel21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picsang21))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->fileToolStripMenuItem, 
				this->helpToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(334, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->newToolStripMenuItem, 
				this->toolStripSeparator2, this->exitToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"&File";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"newToolStripMenuItem.Image")));
			this->newToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->newToolStripMenuItem->Size = System::Drawing::Size(141, 22);
			this->newToolStripMenuItem->Text = L"&New";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::newToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(138, 6);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(141, 22);
			this->exitToolStripMenuItem->Text = L"E&xit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->searchToolStripMenuItem, 
				this->toolStripSeparator5, this->aboutToolStripMenuItem, this->keToolStripMenuItem});
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"&Help";
			// 
			// searchToolStripMenuItem
			// 
			this->searchToolStripMenuItem->Name = L"searchToolStripMenuItem";
			this->searchToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->searchToolStripMenuItem->Text = L"Help";
			this->searchToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::searchToolStripMenuItem_Click);
			// 
			// toolStripSeparator5
			// 
			this->toolStripSeparator5->Name = L"toolStripSeparator5";
			this->toolStripSeparator5->Size = System::Drawing::Size(149, 6);
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->aboutToolStripMenuItem->Text = L"&About...";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::aboutToolStripMenuItem_Click);
			// 
			// keToolStripMenuItem
			// 
			this->keToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {this->sanguinisToolStripMenuItem, 
				this->kolerisToolStripMenuItem, this->melankolisToolStripMenuItem, this->plegmatisToolStripMenuItem});
			this->keToolStripMenuItem->Name = L"keToolStripMenuItem";
			this->keToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->keToolStripMenuItem->Text = L"4 Personality";
			this->keToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::keToolStripMenuItem_Click);
			// 
			// sanguinisToolStripMenuItem
			// 
			this->sanguinisToolStripMenuItem->Name = L"sanguinisToolStripMenuItem";
			this->sanguinisToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->sanguinisToolStripMenuItem->Text = L"Sanguinis";
			this->sanguinisToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::sanguinisToolStripMenuItem_Click);
			// 
			// kolerisToolStripMenuItem
			// 
			this->kolerisToolStripMenuItem->Name = L"kolerisToolStripMenuItem";
			this->kolerisToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->kolerisToolStripMenuItem->Text = L"Koleris";
			this->kolerisToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::kolerisToolStripMenuItem_Click);
			// 
			// melankolisToolStripMenuItem
			// 
			this->melankolisToolStripMenuItem->Name = L"melankolisToolStripMenuItem";
			this->melankolisToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->melankolisToolStripMenuItem->Text = L"Melankolis";
			this->melankolisToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::melankolisToolStripMenuItem_Click);
			// 
			// plegmatisToolStripMenuItem
			// 
			this->plegmatisToolStripMenuItem->Name = L"plegmatisToolStripMenuItem";
			this->plegmatisToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->plegmatisToolStripMenuItem->Text = L"Plegmatis";
			this->plegmatisToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::plegmatisToolStripMenuItem_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(-38, 24);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(396, 327);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// userBox
			// 
			this->userBox->Location = System::Drawing::Point(106, 382);
			this->userBox->Name = L"userBox";
			this->userBox->Size = System::Drawing::Size(124, 20);
			this->userBox->TabIndex = 3;
			// 
			// progressBar2
			// 
			this->progressBar2->Location = System::Drawing::Point(32, 408);
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(269, 23);
			this->progressBar2->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(119, 450);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(95, 36);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Mulai";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Form1::timer1_Tick);
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(14, 291);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(308, 259);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = resources->GetString(L"richTextBox1.Text");
			// 
			// nextButton
			// 
			this->nextButton->BackColor = System::Drawing::Color::White;
			this->nextButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->nextButton->Location = System::Drawing::Point(266, 251);
			this->nextButton->Name = L"nextButton";
			this->nextButton->Size = System::Drawing::Size(56, 34);
			this->nextButton->TabIndex = 8;
			this->nextButton->Text = L"L&anjut";
			this->nextButton->UseVisualStyleBackColor = false;
			this->nextButton->Click += gcnew System::EventHandler(this, &Form1::nextButton_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::White;
			this->groupBox1->Controls->Add(this->pleg1);
			this->groupBox1->Controls->Add(this->mel1);
			this->groupBox1->Controls->Add(this->kol1);
			this->groupBox1->Controls->Add(this->sang1);
			this->groupBox1->Location = System::Drawing::Point(0, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(213, 72);
			this->groupBox1->TabIndex = 7;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"1 dari 25";
			// 
			// pleg1
			// 
			this->pleg1->AutoSize = true;
			this->pleg1->Location = System::Drawing::Point(109, 42);
			this->pleg1->Name = L"pleg1";
			this->pleg1->Size = System::Drawing::Size(67, 17);
			this->pleg1->TabIndex = 3;
			this->pleg1->TabStop = true;
			this->pleg1->Text = L"Adatable";
			this->pleg1->UseVisualStyleBackColor = true;
			// 
			// mel1
			// 
			this->mel1->AutoSize = true;
			this->mel1->Location = System::Drawing::Point(18, 42);
			this->mel1->Name = L"mel1";
			this->mel1->Size = System::Drawing::Size(70, 17);
			this->mel1->TabIndex = 2;
			this->mel1->TabStop = true;
			this->mel1->Text = L"Analytical";
			this->mel1->UseVisualStyleBackColor = true;
			// 
			// kol1
			// 
			this->kol1->AutoSize = true;
			this->kol1->Location = System::Drawing::Point(109, 19);
			this->kol1->Name = L"kol1";
			this->kol1->Size = System::Drawing::Size(85, 17);
			this->kol1->TabIndex = 1;
			this->kol1->TabStop = true;
			this->kol1->Text = L"Adventurous";
			this->kol1->UseVisualStyleBackColor = true;
			// 
			// sang1
			// 
			this->sang1->AutoSize = true;
			this->sang1->Location = System::Drawing::Point(18, 19);
			this->sang1->Name = L"sang1";
			this->sang1->Size = System::Drawing::Size(69, 17);
			this->sang1->TabIndex = 0;
			this->sang1->TabStop = true;
			this->sang1->Text = L"Animated";
			this->sang1->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::White;
			this->groupBox2->Controls->Add(this->groupBox1);
			this->groupBox2->Controls->Add(this->kol2);
			this->groupBox2->Controls->Add(this->pleg2);
			this->groupBox2->Controls->Add(this->mel2);
			this->groupBox2->Controls->Add(this->sang2);
			this->groupBox2->Location = System::Drawing::Point(47, 213);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(213, 72);
			this->groupBox2->TabIndex = 7;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"2 dari 25";
			// 
			// kol2
			// 
			this->kol2->AutoSize = true;
			this->kol2->Location = System::Drawing::Point(109, 42);
			this->kol2->Name = L"kol2";
			this->kol2->Size = System::Drawing::Size(77, 17);
			this->kol2->TabIndex = 3;
			this->kol2->TabStop = true;
			this->kol2->Text = L"Persuasive";
			this->kol2->UseVisualStyleBackColor = true;
			// 
			// pleg2
			// 
			this->pleg2->AutoSize = true;
			this->pleg2->Location = System::Drawing::Point(18, 42);
			this->pleg2->Name = L"pleg2";
			this->pleg2->Size = System::Drawing::Size(67, 17);
			this->pleg2->TabIndex = 2;
			this->pleg2->TabStop = true;
			this->pleg2->Text = L"Peaceful";
			this->pleg2->UseVisualStyleBackColor = true;
			// 
			// mel2
			// 
			this->mel2->AutoSize = true;
			this->mel2->Location = System::Drawing::Point(109, 19);
			this->mel2->Name = L"mel2";
			this->mel2->Size = System::Drawing::Size(71, 17);
			this->mel2->TabIndex = 1;
			this->mel2->TabStop = true;
			this->mel2->Text = L"Persistent";
			this->mel2->UseVisualStyleBackColor = true;
			// 
			// sang2
			// 
			this->sang2->AutoSize = true;
			this->sang2->Location = System::Drawing::Point(18, 19);
			this->sang2->Name = L"sang2";
			this->sang2->Size = System::Drawing::Size(56, 17);
			this->sang2->TabIndex = 0;
			this->sang2->TabStop = true;
			this->sang2->Text = L"Playful";
			this->sang2->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::White;
			this->groupBox3->Controls->Add(this->sang3);
			this->groupBox3->Controls->Add(this->pleg3);
			this->groupBox3->Controls->Add(this->mel3);
			this->groupBox3->Controls->Add(this->kol3);
			this->groupBox3->Location = System::Drawing::Point(47, 213);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(213, 72);
			this->groupBox3->TabIndex = 7;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"3 dari 25";
			// 
			// sang3
			// 
			this->sang3->AutoSize = true;
			this->sang3->Location = System::Drawing::Point(109, 42);
			this->sang3->Name = L"sang3";
			this->sang3->Size = System::Drawing::Size(66, 17);
			this->sang3->TabIndex = 3;
			this->sang3->TabStop = true;
			this->sang3->Text = L"Sociable";
			this->sang3->UseVisualStyleBackColor = true;
			// 
			// pleg3
			// 
			this->pleg3->AutoSize = true;
			this->pleg3->Location = System::Drawing::Point(18, 42);
			this->pleg3->Name = L"pleg3";
			this->pleg3->Size = System::Drawing::Size(78, 17);
			this->pleg3->TabIndex = 2;
			this->pleg3->TabStop = true;
			this->pleg3->Text = L"Submissive";
			this->pleg3->UseVisualStyleBackColor = true;
			// 
			// mel3
			// 
			this->mel3->AutoSize = true;
			this->mel3->Location = System::Drawing::Point(109, 19);
			this->mel3->Name = L"mel3";
			this->mel3->Size = System::Drawing::Size(93, 17);
			this->mel3->TabIndex = 1;
			this->mel3->TabStop = true;
			this->mel3->Text = L"Self sacrificing";
			this->mel3->UseVisualStyleBackColor = true;
			// 
			// kol3
			// 
			this->kol3->AutoSize = true;
			this->kol3->Location = System::Drawing::Point(18, 19);
			this->kol3->Name = L"kol3";
			this->kol3->Size = System::Drawing::Size(88, 17);
			this->kol3->TabIndex = 0;
			this->kol3->TabStop = true;
			this->kol3->Text = L"Strong Willed";
			this->kol3->UseVisualStyleBackColor = true;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Location = System::Drawing::Point(0, 26);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(334, 538);
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::White;
			this->groupBox4->Controls->Add(this->pleg4);
			this->groupBox4->Controls->Add(this->mel4);
			this->groupBox4->Controls->Add(this->sang4);
			this->groupBox4->Controls->Add(this->kol4);
			this->groupBox4->Location = System::Drawing::Point(0, 0);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(213, 72);
			this->groupBox4->TabIndex = 7;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"4 dari 25";
			// 
			// pleg4
			// 
			this->pleg4->AutoSize = true;
			this->pleg4->Location = System::Drawing::Point(109, 42);
			this->pleg4->Name = L"pleg4";
			this->pleg4->Size = System::Drawing::Size(72, 17);
			this->pleg4->TabIndex = 3;
			this->pleg4->TabStop = true;
			this->pleg4->Text = L"Controlled";
			this->pleg4->UseVisualStyleBackColor = true;
			// 
			// mel4
			// 
			this->mel4->AutoSize = true;
			this->mel4->Location = System::Drawing::Point(18, 42);
			this->mel4->Name = L"mel4";
			this->mel4->Size = System::Drawing::Size(81, 17);
			this->mel4->TabIndex = 2;
			this->mel4->TabStop = true;
			this->mel4->Text = L"Considerate";
			this->mel4->UseVisualStyleBackColor = true;
			// 
			// sang4
			// 
			this->sang4->AutoSize = true;
			this->sang4->Location = System::Drawing::Point(109, 19);
			this->sang4->Name = L"sang4";
			this->sang4->Size = System::Drawing::Size(72, 17);
			this->sang4->TabIndex = 1;
			this->sang4->TabStop = true;
			this->sang4->Text = L"Convicing";
			this->sang4->UseVisualStyleBackColor = true;
			// 
			// kol4
			// 
			this->kol4->AutoSize = true;
			this->kol4->Location = System::Drawing::Point(18, 19);
			this->kol4->Name = L"kol4";
			this->kol4->Size = System::Drawing::Size(80, 17);
			this->kol4->TabIndex = 0;
			this->kol4->TabStop = true;
			this->kol4->Text = L"Competitive";
			this->kol4->UseVisualStyleBackColor = true;
			// 
			// groupBox5
			// 
			this->groupBox5->BackColor = System::Drawing::Color::White;
			this->groupBox5->Controls->Add(this->groupBox4);
			this->groupBox5->Controls->Add(this->sang5);
			this->groupBox5->Controls->Add(this->pleg5);
			this->groupBox5->Controls->Add(this->mel5);
			this->groupBox5->Controls->Add(this->kol5);
			this->groupBox5->Location = System::Drawing::Point(47, 213);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(213, 72);
			this->groupBox5->TabIndex = 7;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"5 dari 25";
			// 
			// sang5
			// 
			this->sang5->AutoSize = true;
			this->sang5->Location = System::Drawing::Point(110, 42);
			this->sang5->Name = L"sang5";
			this->sang5->Size = System::Drawing::Size(76, 17);
			this->sang5->TabIndex = 3;
			this->sang5->TabStop = true;
			this->sang5->Text = L"Refreshing";
			this->sang5->UseVisualStyleBackColor = true;
			// 
			// pleg5
			// 
			this->pleg5->AutoSize = true;
			this->pleg5->Location = System::Drawing::Point(18, 42);
			this->pleg5->Name = L"pleg5";
			this->pleg5->Size = System::Drawing::Size(71, 17);
			this->pleg5->TabIndex = 2;
			this->pleg5->TabStop = true;
			this->pleg5->Text = L"Reserved";
			this->pleg5->UseVisualStyleBackColor = true;
			// 
			// mel5
			// 
			this->mel5->AutoSize = true;
			this->mel5->Location = System::Drawing::Point(109, 19);
			this->mel5->Name = L"mel5";
			this->mel5->Size = System::Drawing::Size(76, 17);
			this->mel5->TabIndex = 1;
			this->mel5->TabStop = true;
			this->mel5->Text = L"Respectful";
			this->mel5->UseVisualStyleBackColor = true;
			// 
			// kol5
			// 
			this->kol5->AutoSize = true;
			this->kol5->Location = System::Drawing::Point(18, 19);
			this->kol5->Name = L"kol5";
			this->kol5->Size = System::Drawing::Size(82, 17);
			this->kol5->TabIndex = 0;
			this->kol5->TabStop = true;
			this->kol5->Text = L"Resourceful";
			this->kol5->UseVisualStyleBackColor = true;
			// 
			// groupBox6
			// 
			this->groupBox6->BackColor = System::Drawing::Color::White;
			this->groupBox6->Controls->Add(this->sang6);
			this->groupBox6->Controls->Add(this->pleg6);
			this->groupBox6->Controls->Add(this->kol6);
			this->groupBox6->Controls->Add(this->mel6);
			this->groupBox6->Location = System::Drawing::Point(0, 0);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(213, 72);
			this->groupBox6->TabIndex = 7;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"6 dari 25";
			// 
			// sang6
			// 
			this->sang6->AutoSize = true;
			this->sang6->Location = System::Drawing::Point(109, 42);
			this->sang6->Name = L"sang6";
			this->sang6->Size = System::Drawing::Size(60, 17);
			this->sang6->TabIndex = 3;
			this->sang6->TabStop = true;
			this->sang6->Text = L"Spirited";
			this->sang6->UseVisualStyleBackColor = true;
			// 
			// pleg6
			// 
			this->pleg6->AutoSize = true;
			this->pleg6->Location = System::Drawing::Point(18, 42);
			this->pleg6->Name = L"pleg6";
			this->pleg6->Size = System::Drawing::Size(65, 17);
			this->pleg6->TabIndex = 2;
			this->pleg6->TabStop = true;
			this->pleg6->Text = L"Satisfied";
			this->pleg6->UseVisualStyleBackColor = true;
			// 
			// kol6
			// 
			this->kol6->AutoSize = true;
			this->kol6->Location = System::Drawing::Point(109, 19);
			this->kol6->Name = L"kol6";
			this->kol6->Size = System::Drawing::Size(74, 17);
			this->kol6->TabIndex = 1;
			this->kol6->TabStop = true;
			this->kol6->Text = L"Self-reliant";
			this->kol6->UseVisualStyleBackColor = true;
			// 
			// mel6
			// 
			this->mel6->AutoSize = true;
			this->mel6->Location = System::Drawing::Point(18, 19);
			this->mel6->Name = L"mel6";
			this->mel6->Size = System::Drawing::Size(68, 17);
			this->mel6->TabIndex = 0;
			this->mel6->TabStop = true;
			this->mel6->Text = L"Sensitive";
			this->mel6->UseVisualStyleBackColor = true;
			// 
			// groupBox7
			// 
			this->groupBox7->BackColor = System::Drawing::Color::White;
			this->groupBox7->Controls->Add(this->groupBox6);
			this->groupBox7->Controls->Add(this->mel7);
			this->groupBox7->Controls->Add(this->sang7);
			this->groupBox7->Controls->Add(this->pleg7);
			this->groupBox7->Controls->Add(this->kol7);
			this->groupBox7->Location = System::Drawing::Point(47, 213);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(213, 72);
			this->groupBox7->TabIndex = 7;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"7 dari 25";
			// 
			// mel7
			// 
			this->mel7->AutoSize = true;
			this->mel7->Location = System::Drawing::Point(109, 42);
			this->mel7->Name = L"mel7";
			this->mel7->Size = System::Drawing::Size(61, 17);
			this->mel7->TabIndex = 3;
			this->mel7->TabStop = true;
			this->mel7->Text = L"Planner";
			this->mel7->UseVisualStyleBackColor = true;
			// 
			// sang7
			// 
			this->sang7->AutoSize = true;
			this->sang7->Location = System::Drawing::Point(18, 42);
			this->sang7->Name = L"sang7";
			this->sang7->Size = System::Drawing::Size(67, 17);
			this->sang7->TabIndex = 2;
			this->sang7->TabStop = true;
			this->sang7->Text = L"Promoter";
			this->sang7->UseVisualStyleBackColor = true;
			// 
			// pleg7
			// 
			this->pleg7->AutoSize = true;
			this->pleg7->Location = System::Drawing::Point(109, 19);
			this->pleg7->Name = L"pleg7";
			this->pleg7->Size = System::Drawing::Size(58, 17);
			this->pleg7->TabIndex = 1;
			this->pleg7->TabStop = true;
			this->pleg7->Text = L"Patient";
			this->pleg7->UseVisualStyleBackColor = true;
			// 
			// kol7
			// 
			this->kol7->AutoSize = true;
			this->kol7->Location = System::Drawing::Point(18, 19);
			this->kol7->Name = L"kol7";
			this->kol7->Size = System::Drawing::Size(62, 17);
			this->kol7->TabIndex = 0;
			this->kol7->TabStop = true;
			this->kol7->Text = L"Positive";
			this->kol7->UseVisualStyleBackColor = true;
			// 
			// groupBox8
			// 
			this->groupBox8->BackColor = System::Drawing::Color::White;
			this->groupBox8->Controls->Add(this->kol8);
			this->groupBox8->Controls->Add(this->mel8);
			this->groupBox8->Controls->Add(this->sang8);
			this->groupBox8->Controls->Add(this->pleg8);
			this->groupBox8->Location = System::Drawing::Point(0, 0);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(213, 72);
			this->groupBox8->TabIndex = 7;
			this->groupBox8->TabStop = false;
			this->groupBox8->Text = L"8 dari 25";
			// 
			// kol8
			// 
			this->kol8->AutoSize = true;
			this->kol8->Location = System::Drawing::Point(109, 42);
			this->kol8->Name = L"kol8";
			this->kol8->Size = System::Drawing::Size(47, 17);
			this->kol8->TabIndex = 3;
			this->kol8->TabStop = true;
			this->kol8->Text = L"Sure";
			this->kol8->UseVisualStyleBackColor = true;
			// 
			// mel8
			// 
			this->mel8->AutoSize = true;
			this->mel8->Location = System::Drawing::Point(18, 42);
			this->mel8->Name = L"mel8";
			this->mel8->Size = System::Drawing::Size(76, 17);
			this->mel8->TabIndex = 2;
			this->mel8->TabStop = true;
			this->mel8->Text = L"Scheduled";
			this->mel8->UseVisualStyleBackColor = true;
			// 
			// sang8
			// 
			this->sang8->AutoSize = true;
			this->sang8->Location = System::Drawing::Point(109, 19);
			this->sang8->Name = L"sang8";
			this->sang8->Size = System::Drawing::Size(82, 17);
			this->sang8->TabIndex = 1;
			this->sang8->TabStop = true;
			this->sang8->Text = L"Pontaneous";
			this->sang8->UseVisualStyleBackColor = true;
			// 
			// pleg8
			// 
			this->pleg8->AutoSize = true;
			this->pleg8->Location = System::Drawing::Point(18, 19);
			this->pleg8->Name = L"pleg8";
			this->pleg8->Size = System::Drawing::Size(43, 17);
			this->pleg8->TabIndex = 0;
			this->pleg8->TabStop = true;
			this->pleg8->Text = L"Shy";
			this->pleg8->UseVisualStyleBackColor = true;
			// 
			// groupBox9
			// 
			this->groupBox9->BackColor = System::Drawing::Color::White;
			this->groupBox9->Controls->Add(this->groupBox8);
			this->groupBox9->Controls->Add(this->mel9);
			this->groupBox9->Controls->Add(this->sang9);
			this->groupBox9->Controls->Add(this->kol9);
			this->groupBox9->Controls->Add(this->pleg9);
			this->groupBox9->Location = System::Drawing::Point(0, 0);
			this->groupBox9->Name = L"groupBox9";
			this->groupBox9->Size = System::Drawing::Size(213, 72);
			this->groupBox9->TabIndex = 7;
			this->groupBox9->TabStop = false;
			this->groupBox9->Text = L"9 dari 25";
			// 
			// mel9
			// 
			this->mel9->AutoSize = true;
			this->mel9->Location = System::Drawing::Point(109, 42);
			this->mel9->Name = L"mel9";
			this->mel9->Size = System::Drawing::Size(58, 17);
			this->mel9->TabIndex = 3;
			this->mel9->TabStop = true;
			this->mel9->Text = L"Orderly";
			this->mel9->UseVisualStyleBackColor = true;
			// 
			// sang9
			// 
			this->sang9->AutoSize = true;
			this->sang9->Location = System::Drawing::Point(18, 42);
			this->sang9->Name = L"sang9";
			this->sang9->Size = System::Drawing::Size(70, 17);
			this->sang9->TabIndex = 2;
			this->sang9->TabStop = true;
			this->sang9->Text = L"Optimistic";
			this->sang9->UseVisualStyleBackColor = true;
			// 
			// kol9
			// 
			this->kol9->AutoSize = true;
			this->kol9->Location = System::Drawing::Point(109, 19);
			this->kol9->Name = L"kol9";
			this->kol9->Size = System::Drawing::Size(77, 17);
			this->kol9->TabIndex = 1;
			this->kol9->TabStop = true;
			this->kol9->Text = L"Outspoken";
			this->kol9->UseVisualStyleBackColor = true;
			// 
			// pleg9
			// 
			this->pleg9->AutoSize = true;
			this->pleg9->Location = System::Drawing::Point(18, 19);
			this->pleg9->Name = L"pleg9";
			this->pleg9->Size = System::Drawing::Size(63, 17);
			this->pleg9->TabIndex = 0;
			this->pleg9->TabStop = true;
			this->pleg9->Text = L"Obliging";
			this->pleg9->UseVisualStyleBackColor = true;
			// 
			// groupBox10
			// 
			this->groupBox10->BackColor = System::Drawing::Color::White;
			this->groupBox10->Controls->Add(this->groupBox9);
			this->groupBox10->Controls->Add(this->sang10);
			this->groupBox10->Controls->Add(this->pleg10);
			this->groupBox10->Controls->Add(this->mel10);
			this->groupBox10->Controls->Add(this->kol10);
			this->groupBox10->Location = System::Drawing::Point(0, 0);
			this->groupBox10->Name = L"groupBox10";
			this->groupBox10->Size = System::Drawing::Size(213, 72);
			this->groupBox10->TabIndex = 7;
			this->groupBox10->TabStop = false;
			this->groupBox10->Text = L"10 dari 25";
			// 
			// sang10
			// 
			this->sang10->AutoSize = true;
			this->sang10->Location = System::Drawing::Point(109, 42);
			this->sang10->Name = L"sang10";
			this->sang10->Size = System::Drawing::Size(54, 17);
			this->sang10->TabIndex = 3;
			this->sang10->TabStop = true;
			this->sang10->Text = L"Funny";
			this->sang10->UseVisualStyleBackColor = true;
			// 
			// pleg10
			// 
			this->pleg10->AutoSize = true;
			this->pleg10->Location = System::Drawing::Point(18, 42);
			this->pleg10->Name = L"pleg10";
			this->pleg10->Size = System::Drawing::Size(61, 17);
			this->pleg10->TabIndex = 2;
			this->pleg10->TabStop = true;
			this->pleg10->Text = L"Friendly";
			this->pleg10->UseVisualStyleBackColor = true;
			// 
			// mel10
			// 
			this->mel10->AutoSize = true;
			this->mel10->Location = System::Drawing::Point(109, 19);
			this->mel10->Name = L"mel10";
			this->mel10->Size = System::Drawing::Size(59, 17);
			this->mel10->TabIndex = 1;
			this->mel10->TabStop = true;
			this->mel10->Text = L"Faithful";
			this->mel10->UseVisualStyleBackColor = true;
			// 
			// kol10
			// 
			this->kol10->AutoSize = true;
			this->kol10->Location = System::Drawing::Point(18, 19);
			this->kol10->Name = L"kol10";
			this->kol10->Size = System::Drawing::Size(63, 17);
			this->kol10->TabIndex = 0;
			this->kol10->TabStop = true;
			this->kol10->Text = L"Forceful";
			this->kol10->UseVisualStyleBackColor = true;
			// 
			// groupBox11
			// 
			this->groupBox11->BackColor = System::Drawing::Color::White;
			this->groupBox11->Controls->Add(this->groupBox10);
			this->groupBox11->Controls->Add(this->kol11);
			this->groupBox11->Controls->Add(this->sang11);
			this->groupBox11->Controls->Add(this->mel11);
			this->groupBox11->Controls->Add(this->pleg11);
			this->groupBox11->Location = System::Drawing::Point(0, 0);
			this->groupBox11->Name = L"groupBox11";
			this->groupBox11->Size = System::Drawing::Size(213, 72);
			this->groupBox11->TabIndex = 7;
			this->groupBox11->TabStop = false;
			this->groupBox11->Text = L"11 dari 25";
			// 
			// kol11
			// 
			this->kol11->AutoSize = true;
			this->kol11->Location = System::Drawing::Point(109, 42);
			this->kol11->Name = L"kol11";
			this->kol11->Size = System::Drawing::Size(56, 17);
			this->kol11->TabIndex = 3;
			this->kol11->TabStop = true;
			this->kol11->Text = L"Daring";
			this->kol11->UseVisualStyleBackColor = true;
			// 
			// sang11
			// 
			this->sang11->AutoSize = true;
			this->sang11->Location = System::Drawing::Point(18, 42);
			this->sang11->Name = L"sang11";
			this->sang11->Size = System::Drawing::Size(69, 17);
			this->sang11->TabIndex = 2;
			this->sang11->TabStop = true;
			this->sang11->Text = L"Delightful";
			this->sang11->UseVisualStyleBackColor = true;
			// 
			// mel11
			// 
			this->mel11->AutoSize = true;
			this->mel11->Location = System::Drawing::Point(109, 19);
			this->mel11->Name = L"mel11";
			this->mel11->Size = System::Drawing::Size(64, 17);
			this->mel11->TabIndex = 1;
			this->mel11->TabStop = true;
			this->mel11->Text = L"Detailed";
			this->mel11->UseVisualStyleBackColor = true;
			// 
			// pleg11
			// 
			this->pleg11->AutoSize = true;
			this->pleg11->Location = System::Drawing::Point(18, 19);
			this->pleg11->Name = L"pleg11";
			this->pleg11->Size = System::Drawing::Size(74, 17);
			this->pleg11->TabIndex = 0;
			this->pleg11->TabStop = true;
			this->pleg11->Text = L"Diplomatic";
			this->pleg11->UseVisualStyleBackColor = true;
			// 
			// groupBox12
			// 
			this->groupBox12->BackColor = System::Drawing::Color::White;
			this->groupBox12->Controls->Add(this->groupBox11);
			this->groupBox12->Controls->Add(this->pleg12);
			this->groupBox12->Controls->Add(this->kol12);
			this->groupBox12->Controls->Add(this->mel12);
			this->groupBox12->Controls->Add(this->sang12);
			this->groupBox12->Location = System::Drawing::Point(0, 0);
			this->groupBox12->Name = L"groupBox12";
			this->groupBox12->Size = System::Drawing::Size(213, 72);
			this->groupBox12->TabIndex = 7;
			this->groupBox12->TabStop = false;
			this->groupBox12->Text = L"12 dari 25";
			// 
			// pleg12
			// 
			this->pleg12->AutoSize = true;
			this->pleg12->Location = System::Drawing::Point(109, 42);
			this->pleg12->Name = L"pleg12";
			this->pleg12->Size = System::Drawing::Size(74, 17);
			this->pleg12->TabIndex = 3;
			this->pleg12->TabStop = true;
			this->pleg12->Text = L"Consistent";
			this->pleg12->UseVisualStyleBackColor = true;
			// 
			// kol12
			// 
			this->kol12->AutoSize = true;
			this->kol12->Location = System::Drawing::Point(18, 42);
			this->kol12->Name = L"kol12";
			this->kol12->Size = System::Drawing::Size(70, 17);
			this->kol12->TabIndex = 2;
			this->kol12->TabStop = true;
			this->kol12->Text = L"Confident";
			this->kol12->UseVisualStyleBackColor = true;
			// 
			// mel12
			// 
			this->mel12->AutoSize = true;
			this->mel12->Location = System::Drawing::Point(109, 19);
			this->mel12->Name = L"mel12";
			this->mel12->Size = System::Drawing::Size(64, 17);
			this->mel12->TabIndex = 1;
			this->mel12->TabStop = true;
			this->mel12->Text = L"Cultured";
			this->mel12->UseVisualStyleBackColor = true;
			// 
			// sang12
			// 
			this->sang12->AutoSize = true;
			this->sang12->Location = System::Drawing::Point(18, 19);
			this->sang12->Name = L"sang12";
			this->sang12->Size = System::Drawing::Size(64, 17);
			this->sang12->TabIndex = 0;
			this->sang12->TabStop = true;
			this->sang12->Text = L"Cheerful";
			this->sang12->UseVisualStyleBackColor = true;
			// 
			// groupBox13
			// 
			this->groupBox13->BackColor = System::Drawing::Color::White;
			this->groupBox13->Controls->Add(this->groupBox12);
			this->groupBox13->Controls->Add(this->sang13);
			this->groupBox13->Controls->Add(this->pleg13);
			this->groupBox13->Controls->Add(this->kol13);
			this->groupBox13->Controls->Add(this->mel13);
			this->groupBox13->Location = System::Drawing::Point(0, 0);
			this->groupBox13->Name = L"groupBox13";
			this->groupBox13->Size = System::Drawing::Size(213, 72);
			this->groupBox13->TabIndex = 7;
			this->groupBox13->TabStop = false;
			this->groupBox13->Text = L"13 dari 25";
			// 
			// sang13
			// 
			this->sang13->AutoSize = true;
			this->sang13->Location = System::Drawing::Point(109, 42);
			this->sang13->Name = L"sang13";
			this->sang13->Size = System::Drawing::Size(64, 17);
			this->sang13->TabIndex = 3;
			this->sang13->TabStop = true;
			this->sang13->Text = L"Inspiring";
			this->sang13->UseVisualStyleBackColor = true;
			// 
			// pleg13
			// 
			this->pleg13->AutoSize = true;
			this->pleg13->Location = System::Drawing::Point(18, 42);
			this->pleg13->Name = L"pleg13";
			this->pleg13->Size = System::Drawing::Size(77, 17);
			this->pleg13->TabIndex = 2;
			this->pleg13->TabStop = true;
			this->pleg13->Text = L"Inoffensive";
			this->pleg13->UseVisualStyleBackColor = true;
			// 
			// kol13
			// 
			this->kol13->AutoSize = true;
			this->kol13->Location = System::Drawing::Point(109, 19);
			this->kol13->Name = L"kol13";
			this->kol13->Size = System::Drawing::Size(85, 17);
			this->kol13->TabIndex = 1;
			this->kol13->TabStop = true;
			this->kol13->Text = L"Independent";
			this->kol13->UseVisualStyleBackColor = true;
			// 
			// mel13
			// 
			this->mel13->AutoSize = true;
			this->mel13->Location = System::Drawing::Point(18, 19);
			this->mel13->Name = L"mel13";
			this->mel13->Size = System::Drawing::Size(66, 17);
			this->mel13->TabIndex = 0;
			this->mel13->TabStop = true;
			this->mel13->Text = L"Idealistic";
			this->mel13->UseVisualStyleBackColor = true;
			// 
			// groupBox14
			// 
			this->groupBox14->BackColor = System::Drawing::Color::White;
			this->groupBox14->Controls->Add(this->groupBox13);
			this->groupBox14->Controls->Add(this->kol14);
			this->groupBox14->Controls->Add(this->sang14);
			this->groupBox14->Controls->Add(this->mel14);
			this->groupBox14->Controls->Add(this->pleg14);
			this->groupBox14->Location = System::Drawing::Point(47, 213);
			this->groupBox14->Name = L"groupBox14";
			this->groupBox14->Size = System::Drawing::Size(213, 72);
			this->groupBox14->TabIndex = 7;
			this->groupBox14->TabStop = false;
			this->groupBox14->Text = L"14 dari 25";
			// 
			// kol14
			// 
			this->kol14->AutoSize = true;
			this->kol14->Location = System::Drawing::Point(109, 42);
			this->kol14->Name = L"kol14";
			this->kol14->Size = System::Drawing::Size(66, 17);
			this->kol14->TabIndex = 3;
			this->kol14->TabStop = true;
			this->kol14->Text = L"Decisive";
			this->kol14->UseVisualStyleBackColor = true;
			// 
			// sang14
			// 
			this->sang14->AutoSize = true;
			this->sang14->Location = System::Drawing::Point(18, 42);
			this->sang14->Name = L"sang14";
			this->sang14->Size = System::Drawing::Size(93, 17);
			this->sang14->TabIndex = 2;
			this->sang14->TabStop = true;
			this->sang14->Text = L"Demonstrative";
			this->sang14->UseVisualStyleBackColor = true;
			// 
			// mel14
			// 
			this->mel14->AutoSize = true;
			this->mel14->Location = System::Drawing::Point(109, 19);
			this->mel14->Name = L"mel14";
			this->mel14->Size = System::Drawing::Size(51, 17);
			this->mel14->TabIndex = 1;
			this->mel14->TabStop = true;
			this->mel14->Text = L"Deep";
			this->mel14->UseVisualStyleBackColor = true;
			// 
			// pleg14
			// 
			this->pleg14->AutoSize = true;
			this->pleg14->Location = System::Drawing::Point(18, 19);
			this->pleg14->Name = L"pleg14";
			this->pleg14->Size = System::Drawing::Size(75, 17);
			this->pleg14->TabIndex = 0;
			this->pleg14->TabStop = true;
			this->pleg14->Text = L"Dry Humor";
			this->pleg14->UseVisualStyleBackColor = true;
			// 
			// groupBox15
			// 
			this->groupBox15->BackColor = System::Drawing::Color::White;
			this->groupBox15->Controls->Add(this->sang15);
			this->groupBox15->Controls->Add(this->kol15);
			this->groupBox15->Controls->Add(this->mel15);
			this->groupBox15->Controls->Add(this->pleg15);
			this->groupBox15->Location = System::Drawing::Point(47, 213);
			this->groupBox15->Name = L"groupBox15";
			this->groupBox15->Size = System::Drawing::Size(213, 72);
			this->groupBox15->TabIndex = 7;
			this->groupBox15->TabStop = false;
			this->groupBox15->Text = L"15 dari 25";
			// 
			// sang15
			// 
			this->sang15->AutoSize = true;
			this->sang15->Location = System::Drawing::Point(109, 42);
			this->sang15->Name = L"sang15";
			this->sang15->Size = System::Drawing::Size(81, 17);
			this->sang15->TabIndex = 3;
			this->sang15->TabStop = true;
			this->sang15->Text = L"Mixes easily";
			this->sang15->UseVisualStyleBackColor = true;
			// 
			// kol15
			// 
			this->kol15->AutoSize = true;
			this->kol15->Location = System::Drawing::Point(18, 42);
			this->kol15->Name = L"kol15";
			this->kol15->Size = System::Drawing::Size(55, 17);
			this->kol15->TabIndex = 2;
			this->kol15->TabStop = true;
			this->kol15->Text = L"Mover";
			this->kol15->UseVisualStyleBackColor = true;
			// 
			// mel15
			// 
			this->mel15->AutoSize = true;
			this->mel15->Location = System::Drawing::Point(109, 19);
			this->mel15->Name = L"mel15";
			this->mel15->Size = System::Drawing::Size(61, 17);
			this->mel15->TabIndex = 1;
			this->mel15->TabStop = true;
			this->mel15->Text = L"Musical";
			this->mel15->UseVisualStyleBackColor = true;
			// 
			// pleg15
			// 
			this->pleg15->AutoSize = true;
			this->pleg15->Location = System::Drawing::Point(18, 19);
			this->pleg15->Name = L"pleg15";
			this->pleg15->Size = System::Drawing::Size(66, 17);
			this->pleg15->TabIndex = 0;
			this->pleg15->TabStop = true;
			this->pleg15->Text = L"Mediator";
			this->pleg15->UseVisualStyleBackColor = true;
			// 
			// groupBox16
			// 
			this->groupBox16->BackColor = System::Drawing::Color::White;
			this->groupBox16->Controls->Add(this->kol16);
			this->groupBox16->Controls->Add(this->pleg16);
			this->groupBox16->Controls->Add(this->sang16);
			this->groupBox16->Controls->Add(this->mel16);
			this->groupBox16->Location = System::Drawing::Point(0, 0);
			this->groupBox16->Name = L"groupBox16";
			this->groupBox16->Size = System::Drawing::Size(213, 72);
			this->groupBox16->TabIndex = 7;
			this->groupBox16->TabStop = false;
			this->groupBox16->Text = L"16 dari 25";
			// 
			// kol16
			// 
			this->kol16->AutoSize = true;
			this->kol16->Location = System::Drawing::Point(109, 42);
			this->kol16->Name = L"kol16";
			this->kol16->Size = System::Drawing::Size(75, 17);
			this->kol16->TabIndex = 3;
			this->kol16->TabStop = true;
			this->kol16->Text = L"Tenacious";
			this->kol16->UseVisualStyleBackColor = true;
			// 
			// pleg16
			// 
			this->pleg16->AutoSize = true;
			this->pleg16->Location = System::Drawing::Point(18, 42);
			this->pleg16->Name = L"pleg16";
			this->pleg16->Size = System::Drawing::Size(64, 17);
			this->pleg16->TabIndex = 2;
			this->pleg16->TabStop = true;
			this->pleg16->Text = L"Tolerant";
			this->pleg16->UseVisualStyleBackColor = true;
			// 
			// sang16
			// 
			this->sang16->AutoSize = true;
			this->sang16->Location = System::Drawing::Point(109, 19);
			this->sang16->Name = L"sang16";
			this->sang16->Size = System::Drawing::Size(55, 17);
			this->sang16->TabIndex = 1;
			this->sang16->TabStop = true;
			this->sang16->Text = L"Talker";
			this->sang16->UseVisualStyleBackColor = true;
			// 
			// mel16
			// 
			this->mel16->AutoSize = true;
			this->mel16->Location = System::Drawing::Point(18, 19);
			this->mel16->Name = L"mel16";
			this->mel16->Size = System::Drawing::Size(76, 17);
			this->mel16->TabIndex = 0;
			this->mel16->TabStop = true;
			this->mel16->Text = L"Thoughtful";
			this->mel16->UseVisualStyleBackColor = true;
			// 
			// groupBox17
			// 
			this->groupBox17->BackColor = System::Drawing::Color::White;
			this->groupBox17->Controls->Add(this->groupBox16);
			this->groupBox17->Controls->Add(this->kol17);
			this->groupBox17->Controls->Add(this->pleg17);
			this->groupBox17->Controls->Add(this->mel17);
			this->groupBox17->Controls->Add(this->sang17);
			this->groupBox17->Location = System::Drawing::Point(0, 0);
			this->groupBox17->Name = L"groupBox17";
			this->groupBox17->Size = System::Drawing::Size(213, 72);
			this->groupBox17->TabIndex = 7;
			this->groupBox17->TabStop = false;
			this->groupBox17->Text = L"17 dari 25";
			// 
			// kol17
			// 
			this->kol17->AutoSize = true;
			this->kol17->Location = System::Drawing::Point(109, 42);
			this->kol17->Name = L"kol17";
			this->kol17->Size = System::Drawing::Size(58, 17);
			this->kol17->TabIndex = 3;
			this->kol17->TabStop = true;
			this->kol17->Text = L"Leader";
			this->kol17->UseVisualStyleBackColor = true;
			// 
			// pleg17
			// 
			this->pleg17->AutoSize = true;
			this->pleg17->Location = System::Drawing::Point(18, 42);
			this->pleg17->Name = L"pleg17";
			this->pleg17->Size = System::Drawing::Size(62, 17);
			this->pleg17->TabIndex = 2;
			this->pleg17->TabStop = true;
			this->pleg17->Text = L"Listener";
			this->pleg17->UseVisualStyleBackColor = true;
			// 
			// mel17
			// 
			this->mel17->AutoSize = true;
			this->mel17->Location = System::Drawing::Point(109, 19);
			this->mel17->Name = L"mel17";
			this->mel17->Size = System::Drawing::Size(50, 17);
			this->mel17->TabIndex = 1;
			this->mel17->TabStop = true;
			this->mel17->Text = L"Loyal";
			this->mel17->UseVisualStyleBackColor = true;
			// 
			// sang17
			// 
			this->sang17->AutoSize = true;
			this->sang17->Location = System::Drawing::Point(18, 19);
			this->sang17->Name = L"sang17";
			this->sang17->Size = System::Drawing::Size(52, 17);
			this->sang17->TabIndex = 0;
			this->sang17->TabStop = true;
			this->sang17->Text = L"Lively";
			this->sang17->UseVisualStyleBackColor = true;
			// 
			// groupBox18
			// 
			this->groupBox18->BackColor = System::Drawing::Color::White;
			this->groupBox18->Controls->Add(this->groupBox17);
			this->groupBox18->Controls->Add(this->sang18);
			this->groupBox18->Controls->Add(this->mel18);
			this->groupBox18->Controls->Add(this->pleg18);
			this->groupBox18->Controls->Add(this->kol18);
			this->groupBox18->Location = System::Drawing::Point(0, 0);
			this->groupBox18->Name = L"groupBox18";
			this->groupBox18->Size = System::Drawing::Size(213, 72);
			this->groupBox18->TabIndex = 7;
			this->groupBox18->TabStop = false;
			this->groupBox18->Text = L"18 dari 25";
			// 
			// sang18
			// 
			this->sang18->AutoSize = true;
			this->sang18->Location = System::Drawing::Point(109, 42);
			this->sang18->Name = L"sang18";
			this->sang18->Size = System::Drawing::Size(47, 17);
			this->sang18->TabIndex = 3;
			this->sang18->TabStop = true;
			this->sang18->Text = L"Cute";
			this->sang18->UseVisualStyleBackColor = true;
			// 
			// mel18
			// 
			this->mel18->AutoSize = true;
			this->mel18->Location = System::Drawing::Point(18, 42);
			this->mel18->Name = L"mel18";
			this->mel18->Size = System::Drawing::Size(82, 17);
			this->mel18->TabIndex = 2;
			this->mel18->TabStop = true;
			this->mel18->Text = L"Chart maker";
			this->mel18->UseVisualStyleBackColor = true;
			// 
			// pleg18
			// 
			this->pleg18->AutoSize = true;
			this->pleg18->Location = System::Drawing::Point(109, 19);
			this->pleg18->Name = L"pleg18";
			this->pleg18->Size = System::Drawing::Size(74, 17);
			this->pleg18->TabIndex = 1;
			this->pleg18->TabStop = true;
			this->pleg18->Text = L"Contented";
			this->pleg18->UseVisualStyleBackColor = true;
			// 
			// kol18
			// 
			this->kol18->AutoSize = true;
			this->kol18->Location = System::Drawing::Point(18, 19);
			this->kol18->Name = L"kol18";
			this->kol18->Size = System::Drawing::Size(49, 17);
			this->kol18->TabIndex = 0;
			this->kol18->TabStop = true;
			this->kol18->Text = L"Chief";
			this->kol18->UseVisualStyleBackColor = true;
			// 
			// groupBox19
			// 
			this->groupBox19->BackColor = System::Drawing::Color::White;
			this->groupBox19->Controls->Add(this->groupBox18);
			this->groupBox19->Controls->Add(this->kol19);
			this->groupBox19->Controls->Add(this->mel19);
			this->groupBox19->Controls->Add(this->sang19);
			this->groupBox19->Controls->Add(this->pleg19);
			this->groupBox19->Location = System::Drawing::Point(47, 213);
			this->groupBox19->Name = L"groupBox19";
			this->groupBox19->Size = System::Drawing::Size(213, 72);
			this->groupBox19->TabIndex = 7;
			this->groupBox19->TabStop = false;
			this->groupBox19->Text = L"19 dari 25";
			// 
			// kol19
			// 
			this->kol19->AutoSize = true;
			this->kol19->Location = System::Drawing::Point(109, 42);
			this->kol19->Name = L"kol19";
			this->kol19->Size = System::Drawing::Size(76, 17);
			this->kol19->TabIndex = 3;
			this->kol19->TabStop = true;
			this->kol19->Text = L"Productive";
			this->kol19->UseVisualStyleBackColor = true;
			// 
			// mel19
			// 
			this->mel19->AutoSize = true;
			this->mel19->Location = System::Drawing::Point(18, 42);
			this->mel19->Name = L"mel19";
			this->mel19->Size = System::Drawing::Size(83, 17);
			this->mel19->TabIndex = 2;
			this->mel19->TabStop = true;
			this->mel19->Text = L"Perfectionist";
			this->mel19->UseVisualStyleBackColor = true;
			// 
			// sang19
			// 
			this->sang19->AutoSize = true;
			this->sang19->Location = System::Drawing::Point(109, 19);
			this->sang19->Name = L"sang19";
			this->sang19->Size = System::Drawing::Size(61, 17);
			this->sang19->TabIndex = 1;
			this->sang19->TabStop = true;
			this->sang19->Text = L"Popular";
			this->sang19->UseVisualStyleBackColor = true;
			// 
			// pleg19
			// 
			this->pleg19->AutoSize = true;
			this->pleg19->Location = System::Drawing::Point(18, 19);
			this->pleg19->Name = L"pleg19";
			this->pleg19->Size = System::Drawing::Size(66, 17);
			this->pleg19->TabIndex = 0;
			this->pleg19->TabStop = true;
			this->pleg19->Text = L"Pleasant";
			this->pleg19->UseVisualStyleBackColor = true;
			// 
			// groupBox20
			// 
			this->groupBox20->BackColor = System::Drawing::Color::White;
			this->groupBox20->Controls->Add(this->mel20);
			this->groupBox20->Controls->Add(this->sang20);
			this->groupBox20->Controls->Add(this->kol20);
			this->groupBox20->Controls->Add(this->pleg20);
			this->groupBox20->Location = System::Drawing::Point(47, 213);
			this->groupBox20->Name = L"groupBox20";
			this->groupBox20->Size = System::Drawing::Size(213, 72);
			this->groupBox20->TabIndex = 7;
			this->groupBox20->TabStop = false;
			this->groupBox20->Text = L"20 dari 25";
			// 
			// mel20
			// 
			this->mel20->AutoSize = true;
			this->mel20->Location = System::Drawing::Point(109, 42);
			this->mel20->Name = L"mel20";
			this->mel20->Size = System::Drawing::Size(68, 17);
			this->mel20->TabIndex = 3;
			this->mel20->TabStop = true;
			this->mel20->Text = L"Behaved";
			this->mel20->UseVisualStyleBackColor = true;
			// 
			// sang20
			// 
			this->sang20->AutoSize = true;
			this->sang20->Location = System::Drawing::Point(18, 42);
			this->sang20->Name = L"sang20";
			this->sang20->Size = System::Drawing::Size(61, 17);
			this->sang20->TabIndex = 2;
			this->sang20->TabStop = true;
			this->sang20->Text = L"Bouncy";
			this->sang20->UseVisualStyleBackColor = true;
			// 
			// kol20
			// 
			this->kol20->AutoSize = true;
			this->kol20->Location = System::Drawing::Point(109, 19);
			this->kol20->Name = L"kol20";
			this->kol20->Size = System::Drawing::Size(46, 17);
			this->kol20->TabIndex = 1;
			this->kol20->TabStop = true;
			this->kol20->Text = L"Bold";
			this->kol20->UseVisualStyleBackColor = true;
			// 
			// pleg20
			// 
			this->pleg20->AutoSize = true;
			this->pleg20->Location = System::Drawing::Point(18, 19);
			this->pleg20->Name = L"pleg20";
			this->pleg20->Size = System::Drawing::Size(70, 17);
			this->pleg20->TabIndex = 0;
			this->pleg20->TabStop = true;
			this->pleg20->Text = L"Balanced";
			this->pleg20->UseVisualStyleBackColor = true;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(14, 350);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Personality";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(308, 200);
			this->chart1->TabIndex = 9;
			this->chart1->Text = L"chart1";
			// 
			// picturemel
			// 
			this->picturemel->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"picturemel.Image")));
			this->picturemel->Location = System::Drawing::Point(79, 92);
			this->picturemel->Name = L"picturemel";
			this->picturemel->Size = System::Drawing::Size(170, 200);
			this->picturemel->TabIndex = 10;
			this->picturemel->TabStop = false;
			// 
			// picturekol
			// 
			this->picturekol->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"picturekol.Image")));
			this->picturekol->Location = System::Drawing::Point(79, 92);
			this->picturekol->Name = L"picturekol";
			this->picturekol->Size = System::Drawing::Size(170, 200);
			this->picturekol->TabIndex = 10;
			this->picturekol->TabStop = false;
			// 
			// picturesang
			// 
			this->picturesang->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"picturesang.Image")));
			this->picturesang->Location = System::Drawing::Point(79, 92);
			this->picturesang->Name = L"picturesang";
			this->picturesang->Size = System::Drawing::Size(170, 200);
			this->picturesang->TabIndex = 10;
			this->picturesang->TabStop = false;
			// 
			// picturepleg
			// 
			this->picturepleg->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"picturepleg.Image")));
			this->picturepleg->Location = System::Drawing::Point(79, 92);
			this->picturepleg->Name = L"picturepleg";
			this->picturepleg->Size = System::Drawing::Size(170, 200);
			this->picturepleg->TabIndex = 10;
			this->picturepleg->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::White;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label1->Location = System::Drawing::Point(27, 64);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 15);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Your";
			// 
			// textBoxv
			// 
			this->textBoxv->Location = System::Drawing::Point(134, 307);
			this->textBoxv->Name = L"textBoxv";
			this->textBoxv->Size = System::Drawing::Size(58, 20);
			this->textBoxv->TabIndex = 12;
			// 
			// groupBox25
			// 
			this->groupBox25->BackColor = System::Drawing::Color::White;
			this->groupBox25->Controls->Add(this->groupBox24);
			this->groupBox25->Controls->Add(this->pleg25);
			this->groupBox25->Controls->Add(this->kol25);
			this->groupBox25->Controls->Add(this->mel25);
			this->groupBox25->Controls->Add(this->picmel21);
			this->groupBox25->Controls->Add(this->pictureBox4);
			this->groupBox25->Controls->Add(this->pictureBox3);
			this->groupBox25->Controls->Add(this->picsang21);
			this->groupBox25->Controls->Add(this->sang25);
			this->groupBox25->Location = System::Drawing::Point(57, 216);
			this->groupBox25->Name = L"groupBox25";
			this->groupBox25->Size = System::Drawing::Size(265, 264);
			this->groupBox25->TabIndex = 13;
			this->groupBox25->TabStop = false;
			this->groupBox25->Text = L"25 dari 25";
			// 
			// groupBox24
			// 
			this->groupBox24->BackColor = System::Drawing::Color::White;
			this->groupBox24->Controls->Add(this->groupBox23);
			this->groupBox24->Controls->Add(this->pleg24);
			this->groupBox24->Controls->Add(this->kol24);
			this->groupBox24->Controls->Add(this->sang24);
			this->groupBox24->Controls->Add(this->pictureBox5);
			this->groupBox24->Controls->Add(this->pictureBox6);
			this->groupBox24->Controls->Add(this->pictureBox7);
			this->groupBox24->Controls->Add(this->pictureBox8);
			this->groupBox24->Controls->Add(this->mel24);
			this->groupBox24->Location = System::Drawing::Point(0, 0);
			this->groupBox24->Name = L"groupBox24";
			this->groupBox24->Size = System::Drawing::Size(265, 264);
			this->groupBox24->TabIndex = 13;
			this->groupBox24->TabStop = false;
			this->groupBox24->Text = L"24 dari 25";
			// 
			// groupBox23
			// 
			this->groupBox23->BackColor = System::Drawing::Color::White;
			this->groupBox23->Controls->Add(this->groupBox22);
			this->groupBox23->Controls->Add(this->sang23);
			this->groupBox23->Controls->Add(this->mel23);
			this->groupBox23->Controls->Add(this->kol23);
			this->groupBox23->Controls->Add(this->pictureBox9);
			this->groupBox23->Controls->Add(this->pictureBox10);
			this->groupBox23->Controls->Add(this->pictureBox11);
			this->groupBox23->Controls->Add(this->pictureBox12);
			this->groupBox23->Controls->Add(this->pleg23);
			this->groupBox23->Location = System::Drawing::Point(0, 0);
			this->groupBox23->Name = L"groupBox23";
			this->groupBox23->Size = System::Drawing::Size(265, 264);
			this->groupBox23->TabIndex = 13;
			this->groupBox23->TabStop = false;
			this->groupBox23->Text = L"23 dari 25";
			// 
			// groupBox22
			// 
			this->groupBox22->BackColor = System::Drawing::Color::White;
			this->groupBox22->Controls->Add(this->groupBox21);
			this->groupBox22->Controls->Add(this->pleg22);
			this->groupBox22->Controls->Add(this->mel22);
			this->groupBox22->Controls->Add(this->sang22);
			this->groupBox22->Controls->Add(this->pictureBox13);
			this->groupBox22->Controls->Add(this->pictureBox14);
			this->groupBox22->Controls->Add(this->pictureBox15);
			this->groupBox22->Controls->Add(this->pictureBox16);
			this->groupBox22->Controls->Add(this->kol22);
			this->groupBox22->Location = System::Drawing::Point(0, 0);
			this->groupBox22->Name = L"groupBox22";
			this->groupBox22->Size = System::Drawing::Size(265, 264);
			this->groupBox22->TabIndex = 13;
			this->groupBox22->TabStop = false;
			this->groupBox22->Text = L"22 dari 25";
			// 
			// groupBox21
			// 
			this->groupBox21->BackColor = System::Drawing::Color::White;
			this->groupBox21->Controls->Add(this->kol21);
			this->groupBox21->Controls->Add(this->pleg21);
			this->groupBox21->Controls->Add(this->mel21);
			this->groupBox21->Controls->Add(this->pictureBox17);
			this->groupBox21->Controls->Add(this->pictureBox18);
			this->groupBox21->Controls->Add(this->pictureBox19);
			this->groupBox21->Controls->Add(this->pictureBox20);
			this->groupBox21->Controls->Add(this->sang21);
			this->groupBox21->Location = System::Drawing::Point(0, 0);
			this->groupBox21->Name = L"groupBox21";
			this->groupBox21->Size = System::Drawing::Size(265, 264);
			this->groupBox21->TabIndex = 13;
			this->groupBox21->TabStop = false;
			this->groupBox21->Text = L"21 dari 25";
			// 
			// kol21
			// 
			this->kol21->AutoSize = true;
			this->kol21->Location = System::Drawing::Point(135, 197);
			this->kol21->Name = L"kol21";
			this->kol21->Size = System::Drawing::Size(14, 13);
			this->kol21->TabIndex = 17;
			this->kol21->TabStop = true;
			this->kol21->UseVisualStyleBackColor = true;
			// 
			// pleg21
			// 
			this->pleg21->AutoSize = true;
			this->pleg21->Location = System::Drawing::Point(8, 197);
			this->pleg21->Name = L"pleg21";
			this->pleg21->Size = System::Drawing::Size(14, 13);
			this->pleg21->TabIndex = 17;
			this->pleg21->TabStop = true;
			this->pleg21->UseVisualStyleBackColor = true;
			// 
			// mel21
			// 
			this->mel21->AutoSize = true;
			this->mel21->Location = System::Drawing::Point(136, 68);
			this->mel21->Name = L"mel21";
			this->mel21->Size = System::Drawing::Size(14, 13);
			this->mel21->TabIndex = 16;
			this->mel21->TabStop = true;
			this->mel21->UseVisualStyleBackColor = true;
			// 
			// pictureBox17
			// 
			this->pictureBox17->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox17.Image")));
			this->pictureBox17->Location = System::Drawing::Point(156, 31);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(90, 90);
			this->pictureBox17->TabIndex = 15;
			this->pictureBox17->TabStop = false;
			// 
			// pictureBox18
			// 
			this->pictureBox18->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox18.Image")));
			this->pictureBox18->Location = System::Drawing::Point(154, 159);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(90, 90);
			this->pictureBox18->TabIndex = 15;
			this->pictureBox18->TabStop = false;
			// 
			// pictureBox19
			// 
			this->pictureBox19->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox19.Image")));
			this->pictureBox19->Location = System::Drawing::Point(28, 159);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(90, 90);
			this->pictureBox19->TabIndex = 15;
			this->pictureBox19->TabStop = false;
			// 
			// pictureBox20
			// 
			this->pictureBox20->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox20.Image")));
			this->pictureBox20->Location = System::Drawing::Point(28, 31);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(90, 90);
			this->pictureBox20->TabIndex = 15;
			this->pictureBox20->TabStop = false;
			// 
			// sang21
			// 
			this->sang21->AutoSize = true;
			this->sang21->BackColor = System::Drawing::Color::White;
			this->sang21->Location = System::Drawing::Point(8, 67);
			this->sang21->Name = L"sang21";
			this->sang21->Size = System::Drawing::Size(14, 13);
			this->sang21->TabIndex = 14;
			this->sang21->TabStop = true;
			this->sang21->UseVisualStyleBackColor = false;
			// 
			// pleg22
			// 
			this->pleg22->AutoSize = true;
			this->pleg22->Location = System::Drawing::Point(135, 197);
			this->pleg22->Name = L"pleg22";
			this->pleg22->Size = System::Drawing::Size(14, 13);
			this->pleg22->TabIndex = 17;
			this->pleg22->TabStop = true;
			this->pleg22->UseVisualStyleBackColor = true;
			// 
			// mel22
			// 
			this->mel22->AutoSize = true;
			this->mel22->Location = System::Drawing::Point(8, 197);
			this->mel22->Name = L"mel22";
			this->mel22->Size = System::Drawing::Size(14, 13);
			this->mel22->TabIndex = 17;
			this->mel22->TabStop = true;
			this->mel22->UseVisualStyleBackColor = true;
			// 
			// sang22
			// 
			this->sang22->AutoSize = true;
			this->sang22->Location = System::Drawing::Point(136, 68);
			this->sang22->Name = L"sang22";
			this->sang22->Size = System::Drawing::Size(14, 13);
			this->sang22->TabIndex = 16;
			this->sang22->TabStop = true;
			this->sang22->UseVisualStyleBackColor = true;
			// 
			// pictureBox13
			// 
			this->pictureBox13->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox13.Image")));
			this->pictureBox13->Location = System::Drawing::Point(156, 31);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(90, 90);
			this->pictureBox13->TabIndex = 15;
			this->pictureBox13->TabStop = false;
			// 
			// pictureBox14
			// 
			this->pictureBox14->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox14.Image")));
			this->pictureBox14->Location = System::Drawing::Point(154, 159);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(90, 90);
			this->pictureBox14->TabIndex = 15;
			this->pictureBox14->TabStop = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox15.Image")));
			this->pictureBox15->Location = System::Drawing::Point(28, 159);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(90, 90);
			this->pictureBox15->TabIndex = 15;
			this->pictureBox15->TabStop = false;
			// 
			// pictureBox16
			// 
			this->pictureBox16->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox16.Image")));
			this->pictureBox16->Location = System::Drawing::Point(28, 31);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(90, 90);
			this->pictureBox16->TabIndex = 15;
			this->pictureBox16->TabStop = false;
			// 
			// kol22
			// 
			this->kol22->AutoSize = true;
			this->kol22->BackColor = System::Drawing::Color::White;
			this->kol22->Location = System::Drawing::Point(8, 67);
			this->kol22->Name = L"kol22";
			this->kol22->Size = System::Drawing::Size(14, 13);
			this->kol22->TabIndex = 14;
			this->kol22->TabStop = true;
			this->kol22->UseVisualStyleBackColor = false;
			// 
			// sang23
			// 
			this->sang23->AutoSize = true;
			this->sang23->Location = System::Drawing::Point(135, 197);
			this->sang23->Name = L"sang23";
			this->sang23->Size = System::Drawing::Size(14, 13);
			this->sang23->TabIndex = 17;
			this->sang23->TabStop = true;
			this->sang23->UseVisualStyleBackColor = true;
			// 
			// mel23
			// 
			this->mel23->AutoSize = true;
			this->mel23->Location = System::Drawing::Point(8, 197);
			this->mel23->Name = L"mel23";
			this->mel23->Size = System::Drawing::Size(14, 13);
			this->mel23->TabIndex = 17;
			this->mel23->TabStop = true;
			this->mel23->UseVisualStyleBackColor = true;
			// 
			// kol23
			// 
			this->kol23->AutoSize = true;
			this->kol23->Location = System::Drawing::Point(136, 68);
			this->kol23->Name = L"kol23";
			this->kol23->Size = System::Drawing::Size(14, 13);
			this->kol23->TabIndex = 16;
			this->kol23->TabStop = true;
			this->kol23->UseVisualStyleBackColor = true;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(156, 31);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(90, 90);
			this->pictureBox9->TabIndex = 15;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(154, 159);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(90, 90);
			this->pictureBox10->TabIndex = 15;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(28, 159);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(90, 90);
			this->pictureBox11->TabIndex = 15;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox12.Image")));
			this->pictureBox12->Location = System::Drawing::Point(28, 31);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(90, 90);
			this->pictureBox12->TabIndex = 15;
			this->pictureBox12->TabStop = false;
			// 
			// pleg23
			// 
			this->pleg23->AutoSize = true;
			this->pleg23->BackColor = System::Drawing::Color::White;
			this->pleg23->Location = System::Drawing::Point(8, 67);
			this->pleg23->Name = L"pleg23";
			this->pleg23->Size = System::Drawing::Size(14, 13);
			this->pleg23->TabIndex = 14;
			this->pleg23->TabStop = true;
			this->pleg23->UseVisualStyleBackColor = false;
			// 
			// pleg24
			// 
			this->pleg24->AutoSize = true;
			this->pleg24->Location = System::Drawing::Point(135, 197);
			this->pleg24->Name = L"pleg24";
			this->pleg24->Size = System::Drawing::Size(14, 13);
			this->pleg24->TabIndex = 17;
			this->pleg24->TabStop = true;
			this->pleg24->UseVisualStyleBackColor = true;
			// 
			// kol24
			// 
			this->kol24->AutoSize = true;
			this->kol24->Location = System::Drawing::Point(8, 197);
			this->kol24->Name = L"kol24";
			this->kol24->Size = System::Drawing::Size(14, 13);
			this->kol24->TabIndex = 17;
			this->kol24->TabStop = true;
			this->kol24->UseVisualStyleBackColor = true;
			// 
			// sang24
			// 
			this->sang24->AutoSize = true;
			this->sang24->Location = System::Drawing::Point(136, 68);
			this->sang24->Name = L"sang24";
			this->sang24->Size = System::Drawing::Size(14, 13);
			this->sang24->TabIndex = 16;
			this->sang24->TabStop = true;
			this->sang24->UseVisualStyleBackColor = true;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(154, 31);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(90, 90);
			this->pictureBox5->TabIndex = 15;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(154, 159);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(90, 90);
			this->pictureBox6->TabIndex = 15;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(28, 159);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(90, 90);
			this->pictureBox7->TabIndex = 15;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(28, 31);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(90, 90);
			this->pictureBox8->TabIndex = 15;
			this->pictureBox8->TabStop = false;
			// 
			// mel24
			// 
			this->mel24->AutoSize = true;
			this->mel24->BackColor = System::Drawing::Color::White;
			this->mel24->Location = System::Drawing::Point(8, 67);
			this->mel24->Name = L"mel24";
			this->mel24->Size = System::Drawing::Size(14, 13);
			this->mel24->TabIndex = 14;
			this->mel24->TabStop = true;
			this->mel24->UseVisualStyleBackColor = false;
			// 
			// pleg25
			// 
			this->pleg25->AutoSize = true;
			this->pleg25->Location = System::Drawing::Point(135, 197);
			this->pleg25->Name = L"pleg25";
			this->pleg25->Size = System::Drawing::Size(14, 13);
			this->pleg25->TabIndex = 17;
			this->pleg25->TabStop = true;
			this->pleg25->UseVisualStyleBackColor = true;
			// 
			// kol25
			// 
			this->kol25->AutoSize = true;
			this->kol25->Location = System::Drawing::Point(8, 197);
			this->kol25->Name = L"kol25";
			this->kol25->Size = System::Drawing::Size(14, 13);
			this->kol25->TabIndex = 17;
			this->kol25->TabStop = true;
			this->kol25->UseVisualStyleBackColor = true;
			// 
			// mel25
			// 
			this->mel25->AutoSize = true;
			this->mel25->Location = System::Drawing::Point(136, 68);
			this->mel25->Name = L"mel25";
			this->mel25->Size = System::Drawing::Size(14, 13);
			this->mel25->TabIndex = 16;
			this->mel25->TabStop = true;
			this->mel25->UseVisualStyleBackColor = true;
			// 
			// picmel21
			// 
			this->picmel21->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"picmel21.Image")));
			this->picmel21->Location = System::Drawing::Point(154, 31);
			this->picmel21->Name = L"picmel21";
			this->picmel21->Size = System::Drawing::Size(90, 90);
			this->picmel21->TabIndex = 15;
			this->picmel21->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(154, 159);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(90, 90);
			this->pictureBox4->TabIndex = 15;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(28, 159);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(90, 90);
			this->pictureBox3->TabIndex = 15;
			this->pictureBox3->TabStop = false;
			// 
			// picsang21
			// 
			this->picsang21->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"picsang21.Image")));
			this->picsang21->Location = System::Drawing::Point(28, 31);
			this->picsang21->Name = L"picsang21";
			this->picsang21->Size = System::Drawing::Size(90, 90);
			this->picsang21->TabIndex = 15;
			this->picsang21->TabStop = false;
			// 
			// sang25
			// 
			this->sang25->AutoSize = true;
			this->sang25->BackColor = System::Drawing::Color::White;
			this->sang25->Location = System::Drawing::Point(8, 67);
			this->sang25->Name = L"sang25";
			this->sang25->Size = System::Drawing::Size(14, 13);
			this->sang25->TabIndex = 14;
			this->sang25->TabStop = true;
			this->sang25->UseVisualStyleBackColor = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(244, 486);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(78, 29);
			this->button2->TabIndex = 14;
			this->button2->Text = L"L&anjut";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(159, 486);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(74, 29);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Selesai";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::CornflowerBlue;
			this->ClientSize = System::Drawing::Size(334, 562);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->groupBox25);
			this->Controls->Add(this->textBoxv);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->picturepleg);
			this->Controls->Add(this->picturesang);
			this->Controls->Add(this->picturekol);
			this->Controls->Add(this->picturemel);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->nextButton);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->groupBox14);
			this->Controls->Add(this->groupBox15);
			this->Controls->Add(this->groupBox19);
			this->Controls->Add(this->groupBox20);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->progressBar2);
			this->Controls->Add(this->userBox);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox2);
			this->MaximumSize = System::Drawing::Size(350, 600);
			this->MinimumSize = System::Drawing::Size(350, 600);
			this->Name = L"Form1";
			this->Text = L"Personality++";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->groupBox9->ResumeLayout(false);
			this->groupBox9->PerformLayout();
			this->groupBox10->ResumeLayout(false);
			this->groupBox10->PerformLayout();
			this->groupBox11->ResumeLayout(false);
			this->groupBox11->PerformLayout();
			this->groupBox12->ResumeLayout(false);
			this->groupBox12->PerformLayout();
			this->groupBox13->ResumeLayout(false);
			this->groupBox13->PerformLayout();
			this->groupBox14->ResumeLayout(false);
			this->groupBox14->PerformLayout();
			this->groupBox15->ResumeLayout(false);
			this->groupBox15->PerformLayout();
			this->groupBox16->ResumeLayout(false);
			this->groupBox16->PerformLayout();
			this->groupBox17->ResumeLayout(false);
			this->groupBox17->PerformLayout();
			this->groupBox18->ResumeLayout(false);
			this->groupBox18->PerformLayout();
			this->groupBox19->ResumeLayout(false);
			this->groupBox19->PerformLayout();
			this->groupBox20->ResumeLayout(false);
			this->groupBox20->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picturemel))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picturekol))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picturesang))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picturepleg))->EndInit();
			this->groupBox25->ResumeLayout(false);
			this->groupBox25->PerformLayout();
			this->groupBox24->ResumeLayout(false);
			this->groupBox24->PerformLayout();
			this->groupBox23->ResumeLayout(false);
			this->groupBox23->PerformLayout();
			this->groupBox22->ResumeLayout(false);
			this->groupBox22->PerformLayout();
			this->groupBox21->ResumeLayout(false);
			this->groupBox21->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picmel21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->picsang21))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		System::String^ user; 
		int i; 
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 this->timer1->Start(); i=0;
				 button1->Enabled=false; richTextBox1->Visible=false;
				 pictureBox2->Visible=false; nextButton->Visible=false;
				 chart1->Visible=false; label1->Visible=false; textBoxv->Visible=false;
				 button3->Visible=false; button2->Visible=false;
			 groupBox1->Visible=false; groupBox2->Visible=false; groupBox3->Visible=false; groupBox4->Visible=false;
			 groupBox5->Visible=false; groupBox6->Visible=false; groupBox7->Visible=false; groupBox8->Visible=false;
			 groupBox9->Visible=false; groupBox10->Visible=false; groupBox11->Visible=false; groupBox12->Visible=false;
			 groupBox13->Visible=false; groupBox14->Visible=false; groupBox15->Visible=false; groupBox16->Visible=false;
			 groupBox17->Visible=false; groupBox18->Visible=false; groupBox19->Visible=false; groupBox20->Visible=false;
			 groupBox21->Visible=false; groupBox22->Visible=false; groupBox23->Visible=false; groupBox24->Visible=false;
			 groupBox25->Visible=false;

			 picturekol->Visible=false; picturemel->Visible=false; picturepleg->Visible=false; picturesang->Visible=false;
		 }

private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }

private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 this->progressBar2->Increment(10);
			 if (progressBar2->Value==100) {
				 timer1->Stop(); button1->Enabled=true;
			 }
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 user=userBox->Text;
			 pictureBox1->Visible=false; progressBar2->Visible=false; 
			 userBox->Visible=false; button1->Visible=false;
		
			 richTextBox1->Visible=true; pictureBox2->Visible=true; nextButton->Visible=true;
			 groupBox1->Visible=true; groupBox2->Visible=true; groupBox3->Visible=true; groupBox4->Visible=true;
			 groupBox5->Visible=true; groupBox6->Visible=true; groupBox7->Visible=true; groupBox8->Visible=true;
			 groupBox9->Visible=true; groupBox10->Visible=true; groupBox11->Visible=true; groupBox12->Visible=true;
			 groupBox13->Visible=true; groupBox14->Visible=true; groupBox15->Visible=true; groupBox16->Visible=true;
			 groupBox17->Visible=true; groupBox18->Visible=true; groupBox19->Visible=true; groupBox20->Visible=true;
			 
		 }

private: System::Void nextButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (mel1->Checked||sang1->Checked||kol1->Checked||pleg1->Checked) groupBox1->Visible=false;
			 if (mel2->Checked||sang2->Checked||kol2->Checked||pleg2->Checked) groupBox2->Visible=false;
			 if (mel3->Checked||sang3->Checked||kol3->Checked||pleg3->Checked) groupBox3->Visible=false;
			 if (mel4->Checked||sang4->Checked||kol4->Checked||pleg4->Checked) groupBox4->Visible=false;
			 if (mel5->Checked||sang5->Checked||kol5->Checked||pleg5->Checked) groupBox5->Visible=false;
			 if (mel6->Checked||sang6->Checked||kol6->Checked||pleg6->Checked) groupBox6->Visible=false;
			 if (mel7->Checked||sang7->Checked||kol7->Checked||pleg7->Checked) groupBox7->Visible=false;
			 if (mel8->Checked||sang8->Checked||kol8->Checked||pleg8->Checked) groupBox8->Visible=false;
			 if (mel9->Checked||sang9->Checked||kol9->Checked||pleg9->Checked) groupBox9->Visible=false;
			 if (mel10->Checked||sang10->Checked||kol10->Checked||pleg10->Checked) groupBox10->Visible=false;
			 if (mel11->Checked||sang11->Checked||kol11->Checked||pleg11->Checked) groupBox11->Visible=false;
			 if (mel12->Checked||sang12->Checked||kol12->Checked||pleg12->Checked) groupBox12->Visible=false;
			 if (mel13->Checked||sang13->Checked||kol13->Checked||pleg13->Checked) groupBox13->Visible=false;
			 if (mel14->Checked||sang14->Checked||kol14->Checked||pleg14->Checked) groupBox14->Visible=false;
			 if (mel15->Checked||sang15->Checked||kol15->Checked||pleg15->Checked) groupBox15->Visible=false;
			 if (mel16->Checked||sang16->Checked||kol16->Checked||pleg16->Checked) groupBox16->Visible=false;
			 if (mel17->Checked||sang17->Checked||kol17->Checked||pleg17->Checked) groupBox17->Visible=false;
			 if (mel18->Checked||sang18->Checked||kol18->Checked||pleg18->Checked) groupBox18->Visible=false;
			 if (mel19->Checked||sang19->Checked||kol19->Checked||pleg19->Checked) groupBox19->Visible=false;
			 if (mel20->Checked||sang20->Checked||kol20->Checked||pleg20->Checked){ groupBox20->Visible=false;
			 richTextBox1->Visible=false; nextButton->Visible=false; button2->Visible=true; button3->Visible=true;
			 button3->Enabled=false;
			 
			 groupBox21->Visible=true; groupBox22->Visible=true; groupBox23->Visible=true; groupBox24->Visible=true;
			 groupBox25->Visible=true;}
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if (mel21->Checked||sang21->Checked||kol21->Checked||pleg21->Checked) groupBox21->Visible=false;
			 if (mel22->Checked||sang22->Checked||kol22->Checked||pleg22->Checked) groupBox22->Visible=false;
			 if (mel23->Checked||sang23->Checked||kol23->Checked||pleg23->Checked) groupBox23->Visible=false;
			 if (mel24->Checked||sang24->Checked||kol24->Checked||pleg24->Checked) {groupBox24->Visible=false;button2->Enabled=false; button3->Enabled=true;}
			
			 
			
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 int sang=0, kol=0, mel=0, pleg=0;
			 if (mel25->Checked||sang25->Checked||kol25->Checked||pleg25->Checked) groupBox25->Visible=false;

			  if (mel1->Checked) mel++; else if (sang1->Checked) sang++; else if (kol1->Checked) kol++; else if (pleg1->Checked) pleg++;
			 if (mel2->Checked) mel++; else if (sang2->Checked) sang++; else if (kol2->Checked) kol++; else if (pleg2->Checked) pleg++;
			 if (mel3->Checked) mel++; else if (sang3->Checked) sang++; else if (kol3->Checked) kol++; else if (pleg3->Checked) pleg++;
			 if (mel4->Checked) mel++; else if (sang4->Checked) sang++; else if (kol4->Checked) kol++; else if (pleg4->Checked) pleg++;
			 if (mel5->Checked) mel++; else if (sang5->Checked) sang++; else if (kol5->Checked) kol++; else if (pleg5->Checked) pleg++;
			 if (mel6->Checked) mel++; else if (sang6->Checked) sang++; else if (kol6->Checked) kol++; else if (pleg6->Checked) pleg++;
			 if (mel7->Checked) mel++; else if (sang7->Checked) sang++; else if (kol7->Checked) kol++; else if (pleg7->Checked) pleg++;
			 if (mel8->Checked) mel++; else if (sang8->Checked) sang++; else if (kol8->Checked) kol++; else if (pleg8->Checked) pleg++;
			 if (mel9->Checked) mel++; else if (sang9->Checked) sang++; else if (kol9->Checked) kol++; else if (pleg9->Checked) pleg++;
			 if (mel10->Checked) mel++; else if (sang10->Checked) sang++; else if (kol10->Checked) kol++; else if (pleg10->Checked) pleg++;
			 if (mel11->Checked) mel++; else if (sang11->Checked) sang++; else if (kol11->Checked) kol++; else if (pleg11->Checked) pleg++;
			 if (mel12->Checked) mel++; else if (sang12->Checked) sang++; else if (kol12->Checked) kol++; else if (pleg12->Checked) pleg++;
			 if (mel13->Checked) mel++; else if (sang13->Checked) sang++; else if (kol13->Checked) kol++; else if (pleg13->Checked) pleg++;
			 if (mel14->Checked) mel++; else if (sang14->Checked) sang++; else if (kol14->Checked) kol++; else if (pleg14->Checked) pleg++;
			 if (mel15->Checked) mel++; else if (sang15->Checked) sang++; else if (kol15->Checked) kol++; else if (pleg15->Checked) pleg++;
			 if (mel16->Checked) mel++; else if (sang16->Checked) sang++; else if (kol16->Checked) kol++; else if (pleg16->Checked) pleg++;
			 if (mel17->Checked) mel++; else if (sang17->Checked) sang++; else if (kol17->Checked) kol++; else if (pleg17->Checked) pleg++;
			 if (mel18->Checked) mel++; else if (sang18->Checked) sang++; else if (kol18->Checked) kol++; else if (pleg18->Checked) pleg++;
			 if (mel19->Checked) mel++; else if (sang19->Checked) sang++; else if (kol19->Checked) kol++; else if (pleg19->Checked) pleg++;
			 if (mel20->Checked) mel++; else if (sang20->Checked) sang++; else if (kol20->Checked) kol++; else if (pleg20->Checked) pleg++;
			 if (mel21->Checked) mel++; else if (sang21->Checked) sang++; else if (kol21->Checked) kol++; else if (pleg21->Checked) pleg++;
			 if (mel22->Checked) mel++; else if (sang22->Checked) sang++; else if (kol22->Checked) kol++; else if (pleg22->Checked) pleg++;
			 if (mel23->Checked) mel++; else if (sang23->Checked) sang++; else if (kol23->Checked) kol++; else if (pleg23->Checked) pleg++;
			 if (mel24->Checked) mel++; else if (sang24->Checked) sang++; else if (kol24->Checked) kol++; else if (pleg24->Checked) pleg++;
			 if (mel25->Checked) mel++; else if (sang25->Checked) sang++; else if (kol25->Checked) kol++; else if (pleg25->Checked) pleg++;

			  chart1->Visible=true; pictureBox1->Visible=true; pictureBox2->Visible=false;
			  label1->Visible=true; textBoxv->Visible=true; button2->Visible=false; button3->Visible=false;

			  if (sang>kol && sang>mel && sang>pleg){ picturesang->Visible=true; textBoxv->Text="Sanguinis";
				 StreamWriter^ print = gcnew StreamWriter("demo.txt", true);
				 print->Write(user); print->Write(" Sanguinis\n"); print->Close();} 
				else if (kol>sang && kol>mel && kol>pleg){ picturekol->Visible=true; textBoxv->Text="Koleris";
				StreamWriter^ print = gcnew StreamWriter("demo.txt", true);
				 print->Write(user); print->Write(" Koleris\n"); print->Close();}
				else if (mel>kol && mel>sang && mel>pleg){ picturemel->Visible=true; textBoxv->Text="Melankolis";
				StreamWriter^ print = gcnew StreamWriter("demo.txt", true);
				 print->Write(user); print->Write(" Melankois\n"); print->Close();}
				else if (pleg>kol && pleg>mel && pleg>sang){ picturepleg->Visible=true; textBoxv->Text="Plegmatis";
				StreamWriter^ print = gcnew StreamWriter("demo.txt", true);
				 print->Write(user); print->Write(" plegmatis\n"); print->Close();}
			 textBoxv->ReadOnly=true;

			 this->chart1->Series["Personality"]->Points->AddXY("Sanguinis",sang);
			 this->chart1->Series["Personality"]->Points->AddXY("Koleris",kol);
			 this->chart1->Series["Personality"]->Points->AddXY("Melankolis",mel);
			 this->chart1->Series["Personality"]->Points->AddXY("Plegmatis",pleg);
		 }
			 


private: System::Void searchToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Cara Mengoperasikan:\n\n1.Pilih opsi yang mana lebih mendekati sifat/karaktermu.");
		 }

private: System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Diproduksi oleh FerCooporation\nFreeware Personality++ v1.0.0");
		 }
private: System::Void newToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Restart();
		 }
private: System::Void keToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void sanguinisToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			  MessageBox::Show("SANGUINIS\n\nKepribadian yang menarik, Suka bicara, suka berbicara, Menghidupkan pesta, Rasa humor yang hebat, Ingatan kuat untuk warna, Secara fisik memukau pendengar, Emosional dan demonstratif, Antusias dan ekspresif, Periang dan penuh semangat, Penuh rasa ingin tahu, Baik di panggung, Lugu dan polos, Hidup di masa sekarang, Mudah diubah, Berhati tulus, Selalu kekanak-kanakan");
		 }
private: System::Void kolerisToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			  MessageBox::Show("KOLERIS\n\nBerbakat pemimpin, Dinamis dan aktif, Sangat memerlukan perubahan, Harus memperbaiki kesalahan, Berkemauan kuat dan tegas, Tidak emosional bertindak, Tidak mudah patah semangat, Bebas dan mandiri, Mamancarkan keyakinan, Bisa menjalankan apa saja.");
		 }
private: System::Void melankolisToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			  MessageBox::Show("MELANKOLIS\n\nMendalam dan penuh pikiran, Analitis, Serius dan tekun, Cenderung jenius, Berbakat dan kreatif, Artistik atau musikal, Filosofis dan puitis, Menghargai keindahan, Perasa terhadap orang lain, Suka berkorban, Penuh kesadaran, Idealis.");
		 }
private: System::Void plegmatisToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		   	  MessageBox::Show("PLEGMATIS\n\nKepribadian rendah hati, Mudah bergaul dan santai,Diam, tenang, dan mampu, Sabar, baik keseimbangannya, Hidup konsisten, Tenang tetapi cerdas, Simpatik dan baik hati, Menyembunyikan emosi, Bahagia menerima kehidupan, Serba guna.");
		 }
};	
}

