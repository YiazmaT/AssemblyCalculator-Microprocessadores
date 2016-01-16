#pragma once

#include "Memory.h"
#include "tabela.h"

namespace Calculadora {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for telaPrincipal
	/// </summary>
	public ref class telaPrincipal : public System::Windows::Forms::Form
	{

	public:
		telaPrincipal(void)
		{

			memoria = new Memory();
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~telaPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  btnClear;
	private: System::Windows::Forms::Button^  btnExecute;
	private: System::Windows::Forms::Button^  btn9;
	private: Memory *memoria;
	protected:

	

	private: System::Windows::Forms::Button^  btn8;

	private: System::Windows::Forms::Button^  btn7;
	private: System::Windows::Forms::Button^  btn6;


	private: System::Windows::Forms::Button^  btn5;


	private: System::Windows::Forms::Button^  btn3;


	private: System::Windows::Forms::Button^  btn2;

	private: System::Windows::Forms::Button^  btn1;
	private: System::Windows::Forms::Button^  btnDecimal;



	private: System::Windows::Forms::Button^  btn0;

	private: System::Windows::Forms::Button^  btnSignal;
	private: System::Windows::Forms::Button^  btnPow;


	private: System::Windows::Forms::Button^  btnSqrd;



	private: System::Windows::Forms::Button^  btnSqrt;

	private: System::Windows::Forms::Button^  btnCos;
	private: System::Windows::Forms::Button^  btnDiv;


	private: System::Windows::Forms::Button^  btnMul;

	private: System::Windows::Forms::Button^  btnSub;

	private: System::Windows::Forms::Button^  btnAdd;

	private: System::Windows::Forms::Button^  btnSin;
	private: System::Windows::Forms::Button^  btnFact;


	private: System::Windows::Forms::Button^  btnLog;



	private: System::Windows::Forms::Button^  btnExp;

	private: System::Windows::Forms::Button^  btnTan;

	private: System::Windows::Forms::Button^  btnCloseP;
	private: System::Windows::Forms::Button^  btnOpenP;

	private: System::Windows::Forms::RadioButton^  radioGraus;
	private: System::Windows::Forms::RadioButton^  radioRadiano;
	private: System::Windows::Forms::TextBox^  caixaTexto;
	private: System::Windows::Forms::Button^  btnPi;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  btnArcsin;
	private: System::Windows::Forms::Button^  btnArccos;
	private: System::Windows::Forms::Button^  btnArctg;
	private: System::Windows::Forms::Button^  btnBackspace;
	private: System::Windows::Forms::Button^  btn4;
	private: System::Windows::Forms::Button^  btnNRoot;
	private: System::Windows::Forms::Button^  btnLn;







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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(telaPrincipal::typeid));
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnExecute = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btnDecimal = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnSignal = (gcnew System::Windows::Forms::Button());
			this->btnPow = (gcnew System::Windows::Forms::Button());
			this->btnSqrd = (gcnew System::Windows::Forms::Button());
			this->btnSqrt = (gcnew System::Windows::Forms::Button());
			this->btnCos = (gcnew System::Windows::Forms::Button());
			this->btnDiv = (gcnew System::Windows::Forms::Button());
			this->btnMul = (gcnew System::Windows::Forms::Button());
			this->btnSub = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnSin = (gcnew System::Windows::Forms::Button());
			this->btnFact = (gcnew System::Windows::Forms::Button());
			this->btnLog = (gcnew System::Windows::Forms::Button());
			this->btnExp = (gcnew System::Windows::Forms::Button());
			this->btnTan = (gcnew System::Windows::Forms::Button());
			this->btnCloseP = (gcnew System::Windows::Forms::Button());
			this->btnOpenP = (gcnew System::Windows::Forms::Button());
			this->radioGraus = (gcnew System::Windows::Forms::RadioButton());
			this->radioRadiano = (gcnew System::Windows::Forms::RadioButton());
			this->caixaTexto = (gcnew System::Windows::Forms::TextBox());
			this->btnPi = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnArcsin = (gcnew System::Windows::Forms::Button());
			this->btnArccos = (gcnew System::Windows::Forms::Button());
			this->btnArctg = (gcnew System::Windows::Forms::Button());
			this->btnBackspace = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btnNRoot = (gcnew System::Windows::Forms::Button());
			this->btnLn = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnClear
			// 
			this->btnClear->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClear->Location = System::Drawing::Point(67, 68);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(49, 28);
			this->btnClear->TabIndex = 1;
			this->btnClear->Text = L"C";
			this->btnClear->UseVisualStyleBackColor = false;
			this->btnClear->Click += gcnew System::EventHandler(this, &telaPrincipal::btnClear_Click);
			// 
			// btnExecute
			// 
			this->btnExecute->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnExecute->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExecute->Location = System::Drawing::Point(122, 68);
			this->btnExecute->Name = L"btnExecute";
			this->btnExecute->Size = System::Drawing::Size(49, 28);
			this->btnExecute->TabIndex = 2;
			this->btnExecute->Text = L"=";
			this->btnExecute->UseVisualStyleBackColor = false;
			this->btnExecute->Click += gcnew System::EventHandler(this, &telaPrincipal::btnExecute_Click);
			// 
			// btn9
			// 
			this->btn9->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn9->Location = System::Drawing::Point(122, 97);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(49, 28);
			this->btn9->TabIndex = 5;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = false;
			this->btn9->Click += gcnew System::EventHandler(this, &telaPrincipal::btn9_Click);
			// 
			// btn8
			// 
			this->btn8->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn8->Location = System::Drawing::Point(67, 97);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(49, 28);
			this->btn8->TabIndex = 4;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = false;
			this->btn8->Click += gcnew System::EventHandler(this, &telaPrincipal::btn8_Click);
			// 
			// btn7
			// 
			this->btn7->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn7->Location = System::Drawing::Point(12, 97);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(49, 28);
			this->btn7->TabIndex = 3;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = false;
			this->btn7->Click += gcnew System::EventHandler(this, &telaPrincipal::btn7_Click);
			// 
			// btn6
			// 
			this->btn6->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn6->Location = System::Drawing::Point(122, 126);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(49, 28);
			this->btn6->TabIndex = 8;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = false;
			this->btn6->Click += gcnew System::EventHandler(this, &telaPrincipal::btn6_Click);
			// 
			// btn5
			// 
			this->btn5->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn5->Location = System::Drawing::Point(67, 126);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(49, 28);
			this->btn5->TabIndex = 7;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = false;
			this->btn5->Click += gcnew System::EventHandler(this, &telaPrincipal::btn5_Click);
			// 
			// btn3
			// 
			this->btn3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn3->Location = System::Drawing::Point(122, 155);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(49, 28);
			this->btn3->TabIndex = 11;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = false;
			this->btn3->Click += gcnew System::EventHandler(this, &telaPrincipal::btn3_Click);
			// 
			// btn2
			// 
			this->btn2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn2->Location = System::Drawing::Point(67, 155);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(49, 28);
			this->btn2->TabIndex = 10;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = false;
			this->btn2->Click += gcnew System::EventHandler(this, &telaPrincipal::btn2_Click);
			// 
			// btn1
			// 
			this->btn1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn1->Location = System::Drawing::Point(12, 155);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(49, 28);
			this->btn1->TabIndex = 9;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = false;
			this->btn1->Click += gcnew System::EventHandler(this, &telaPrincipal::btn1_Click);
			// 
			// btnDecimal
			// 
			this->btnDecimal->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnDecimal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDecimal->Location = System::Drawing::Point(122, 184);
			this->btnDecimal->Name = L"btnDecimal";
			this->btnDecimal->Size = System::Drawing::Size(49, 28);
			this->btnDecimal->TabIndex = 14;
			this->btnDecimal->Text = L".";
			this->btnDecimal->UseVisualStyleBackColor = false;
			this->btnDecimal->Click += gcnew System::EventHandler(this, &telaPrincipal::btnDecimal_Click);
			// 
			// btn0
			// 
			this->btn0->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn0->Location = System::Drawing::Point(67, 184);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(49, 28);
			this->btn0->TabIndex = 13;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = false;
			this->btn0->Click += gcnew System::EventHandler(this, &telaPrincipal::btn0_Click);
			// 
			// btnSignal
			// 
			this->btnSignal->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnSignal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSignal->Location = System::Drawing::Point(12, 184);
			this->btnSignal->Name = L"btnSignal";
			this->btnSignal->Size = System::Drawing::Size(49, 28);
			this->btnSignal->TabIndex = 12;
			this->btnSignal->Text = L"+/-";
			this->btnSignal->UseVisualStyleBackColor = false;
			this->btnSignal->Click += gcnew System::EventHandler(this, &telaPrincipal::btnSignal_Click);
			// 
			// btnPow
			// 
			this->btnPow->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnPow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPow->Location = System::Drawing::Point(247, 242);
			this->btnPow->Name = L"btnPow";
			this->btnPow->Size = System::Drawing::Size(49, 28);
			this->btnPow->TabIndex = 19;
			this->btnPow->Text = L"^";
			this->btnPow->UseVisualStyleBackColor = false;
			this->btnPow->Click += gcnew System::EventHandler(this, &telaPrincipal::btnPow_Click);
			// 
			// btnSqrd
			// 
			this->btnSqrd->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnSqrd->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSqrd.Image")));
			this->btnSqrd->Location = System::Drawing::Point(302, 185);
			this->btnSqrd->Name = L"btnSqrd";
			this->btnSqrd->Size = System::Drawing::Size(49, 28);
			this->btnSqrd->TabIndex = 18;
			this->btnSqrd->UseVisualStyleBackColor = false;
			this->btnSqrd->Click += gcnew System::EventHandler(this, &telaPrincipal::btnSqrd_Click);
			// 
			// btnSqrt
			// 
			this->btnSqrt->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnSqrt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSqrt->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSqrt.Image")));
			this->btnSqrt->Location = System::Drawing::Point(247, 156);
			this->btnSqrt->Name = L"btnSqrt";
			this->btnSqrt->Size = System::Drawing::Size(49, 28);
			this->btnSqrt->TabIndex = 16;
			this->btnSqrt->UseVisualStyleBackColor = false;
			this->btnSqrt->Click += gcnew System::EventHandler(this, &telaPrincipal::btnSqrt_Click);
			// 
			// btnCos
			// 
			this->btnCos->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnCos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCos->Location = System::Drawing::Point(247, 98);
			this->btnCos->Name = L"btnCos";
			this->btnCos->Size = System::Drawing::Size(49, 28);
			this->btnCos->TabIndex = 15;
			this->btnCos->Text = L"cos";
			this->btnCos->UseVisualStyleBackColor = false;
			this->btnCos->Click += gcnew System::EventHandler(this, &telaPrincipal::btnCos_Click);
			// 
			// btnDiv
			// 
			this->btnDiv->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnDiv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDiv->Location = System::Drawing::Point(192, 242);
			this->btnDiv->Name = L"btnDiv";
			this->btnDiv->Size = System::Drawing::Size(49, 28);
			this->btnDiv->TabIndex = 24;
			this->btnDiv->Text = L"/";
			this->btnDiv->UseVisualStyleBackColor = false;
			this->btnDiv->Click += gcnew System::EventHandler(this, &telaPrincipal::btnDiv_Click);
			// 
			// btnMul
			// 
			this->btnMul->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnMul->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMul->Location = System::Drawing::Point(192, 214);
			this->btnMul->Name = L"btnMul";
			this->btnMul->Size = System::Drawing::Size(49, 28);
			this->btnMul->TabIndex = 23;
			this->btnMul->Text = L"*";
			this->btnMul->UseVisualStyleBackColor = false;
			this->btnMul->Click += gcnew System::EventHandler(this, &telaPrincipal::btnMul_Click);
			// 
			// btnSub
			// 
			this->btnSub->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnSub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSub->Location = System::Drawing::Point(192, 185);
			this->btnSub->Name = L"btnSub";
			this->btnSub->Size = System::Drawing::Size(49, 28);
			this->btnSub->TabIndex = 22;
			this->btnSub->Text = L"-";
			this->btnSub->UseVisualStyleBackColor = false;
			this->btnSub->Click += gcnew System::EventHandler(this, &telaPrincipal::btnSub_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Location = System::Drawing::Point(192, 156);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(49, 28);
			this->btnAdd->TabIndex = 21;
			this->btnAdd->Text = L"+";
			this->btnAdd->UseVisualStyleBackColor = false;
			this->btnAdd->Click += gcnew System::EventHandler(this, &telaPrincipal::btnAdd_Click);
			// 
			// btnSin
			// 
			this->btnSin->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnSin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSin->Location = System::Drawing::Point(192, 97);
			this->btnSin->Name = L"btnSin";
			this->btnSin->Size = System::Drawing::Size(49, 28);
			this->btnSin->TabIndex = 20;
			this->btnSin->Text = L"sin";
			this->btnSin->UseVisualStyleBackColor = false;
			this->btnSin->Click += gcnew System::EventHandler(this, &telaPrincipal::btnSin_Click);
			// 
			// btnFact
			// 
			this->btnFact->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnFact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnFact->Location = System::Drawing::Point(302, 242);
			this->btnFact->Name = L"btnFact";
			this->btnFact->Size = System::Drawing::Size(49, 28);
			this->btnFact->TabIndex = 29;
			this->btnFact->Text = L"!";
			this->btnFact->UseVisualStyleBackColor = false;
			this->btnFact->Click += gcnew System::EventHandler(this, &telaPrincipal::btnFact_Click);
			// 
			// btnLog
			// 
			this->btnLog->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnLog->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLog->Location = System::Drawing::Point(302, 214);
			this->btnLog->Name = L"btnLog";
			this->btnLog->Size = System::Drawing::Size(49, 28);
			this->btnLog->TabIndex = 28;
			this->btnLog->Text = L"log (x)";
			this->btnLog->UseVisualStyleBackColor = false;
			this->btnLog->Click += gcnew System::EventHandler(this, &telaPrincipal::btnLog_Click);
			// 
			// btnExp
			// 
			this->btnExp->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnExp->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExp.Image")));
			this->btnExp->Location = System::Drawing::Point(302, 156);
			this->btnExp->Name = L"btnExp";
			this->btnExp->Size = System::Drawing::Size(49, 28);
			this->btnExp->TabIndex = 26;
			this->btnExp->UseVisualStyleBackColor = false;
			this->btnExp->Click += gcnew System::EventHandler(this, &telaPrincipal::btnExp_Click);
			// 
			// btnTan
			// 
			this->btnTan->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnTan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnTan->Location = System::Drawing::Point(302, 98);
			this->btnTan->Name = L"btnTan";
			this->btnTan->Size = System::Drawing::Size(49, 28);
			this->btnTan->TabIndex = 25;
			this->btnTan->Text = L"tan";
			this->btnTan->UseVisualStyleBackColor = false;
			this->btnTan->Click += gcnew System::EventHandler(this, &telaPrincipal::btnTan_Click);
			// 
			// btnCloseP
			// 
			this->btnCloseP->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnCloseP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCloseP->Location = System::Drawing::Point(302, 69);
			this->btnCloseP->Name = L"btnCloseP";
			this->btnCloseP->Size = System::Drawing::Size(49, 28);
			this->btnCloseP->TabIndex = 30;
			this->btnCloseP->Text = L")";
			this->btnCloseP->UseVisualStyleBackColor = false;
			this->btnCloseP->Click += gcnew System::EventHandler(this, &telaPrincipal::btnCloseP_Click);
			// 
			// btnOpenP
			// 
			this->btnOpenP->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnOpenP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOpenP->Location = System::Drawing::Point(247, 69);
			this->btnOpenP->Name = L"btnOpenP";
			this->btnOpenP->Size = System::Drawing::Size(49, 28);
			this->btnOpenP->TabIndex = 31;
			this->btnOpenP->Text = L"(";
			this->btnOpenP->UseVisualStyleBackColor = false;
			this->btnOpenP->Click += gcnew System::EventHandler(this, &telaPrincipal::btnOpenP_Click);
			// 
			// radioGraus
			// 
			this->radioGraus->AutoSize = true;
			this->radioGraus->Location = System::Drawing::Point(77, 19);
			this->radioGraus->Name = L"radioGraus";
			this->radioGraus->Size = System::Drawing::Size(53, 17);
			this->radioGraus->TabIndex = 33;
			this->radioGraus->Text = L"Graus";
			this->radioGraus->UseVisualStyleBackColor = true;
			// 
			// radioRadiano
			// 
			this->radioRadiano->AutoSize = true;
			this->radioRadiano->Checked = true;
			this->radioRadiano->Location = System::Drawing::Point(6, 19);
			this->radioRadiano->Name = L"radioRadiano";
			this->radioRadiano->Size = System::Drawing::Size(65, 17);
			this->radioRadiano->TabIndex = 34;
			this->radioRadiano->TabStop = true;
			this->radioRadiano->Text = L"Radiano";
			this->radioRadiano->UseVisualStyleBackColor = true;
			// 
			// caixaTexto
			// 
			this->caixaTexto->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->caixaTexto->Location = System::Drawing::Point(12, 22);
			this->caixaTexto->Name = L"caixaTexto";
			this->caixaTexto->ReadOnly = true;
			this->caixaTexto->Size = System::Drawing::Size(339, 20);
			this->caixaTexto->TabIndex = 35;
			this->caixaTexto->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btnPi
			// 
			this->btnPi->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnPi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPi->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPi.Image")));
			this->btnPi->Location = System::Drawing::Point(192, 68);
			this->btnPi->Name = L"btnPi";
			this->btnPi->Size = System::Drawing::Size(49, 28);
			this->btnPi->TabIndex = 36;
			this->btnPi->UseVisualStyleBackColor = false;
			this->btnPi->Click += gcnew System::EventHandler(this, &telaPrincipal::btnPi_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioRadiano);
			this->groupBox1->Controls->Add(this->radioGraus);
			this->groupBox1->Location = System::Drawing::Point(12, 218);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(159, 47);
			this->groupBox1->TabIndex = 37;
			this->groupBox1->TabStop = false;
			// 
			// btnArcsin
			// 
			this->btnArcsin->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnArcsin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnArcsin->Location = System::Drawing::Point(192, 127);
			this->btnArcsin->Name = L"btnArcsin";
			this->btnArcsin->Size = System::Drawing::Size(49, 28);
			this->btnArcsin->TabIndex = 38;
			this->btnArcsin->Text = L"arcsin";
			this->btnArcsin->UseVisualStyleBackColor = false;
			this->btnArcsin->Click += gcnew System::EventHandler(this, &telaPrincipal::btnArcsin_Click);
			// 
			// btnArccos
			// 
			this->btnArccos->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnArccos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnArccos->Location = System::Drawing::Point(247, 127);
			this->btnArccos->Name = L"btnArccos";
			this->btnArccos->Size = System::Drawing::Size(49, 28);
			this->btnArccos->TabIndex = 39;
			this->btnArccos->Text = L"arccos";
			this->btnArccos->UseVisualStyleBackColor = false;
			this->btnArccos->Click += gcnew System::EventHandler(this, &telaPrincipal::btnArccos_Click);
			// 
			// btnArctg
			// 
			this->btnArctg->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnArctg->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnArctg->Location = System::Drawing::Point(302, 127);
			this->btnArctg->Name = L"btnArctg";
			this->btnArctg->Size = System::Drawing::Size(49, 28);
			this->btnArctg->TabIndex = 40;
			this->btnArctg->Text = L"arctg";
			this->btnArctg->UseVisualStyleBackColor = false;
			this->btnArctg->Click += gcnew System::EventHandler(this, &telaPrincipal::btnArctg_Click);
			// 
			// btnBackspace
			// 
			this->btnBackspace->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnBackspace->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnBackspace.Image")));
			this->btnBackspace->Location = System::Drawing::Point(12, 68);
			this->btnBackspace->Name = L"btnBackspace";
			this->btnBackspace->Size = System::Drawing::Size(49, 28);
			this->btnBackspace->TabIndex = 41;
			this->btnBackspace->UseVisualStyleBackColor = false;
			this->btnBackspace->Click += gcnew System::EventHandler(this, &telaPrincipal::btnBackspace_Click_1);
			// 
			// btn4
			// 
			this->btn4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btn4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn4->Location = System::Drawing::Point(12, 126);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(49, 28);
			this->btn4->TabIndex = 42;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = false;
			// 
			// btnNRoot
			// 
			this->btnNRoot->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnNRoot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnNRoot->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnNRoot.Image")));
			this->btnNRoot->Location = System::Drawing::Point(247, 185);
			this->btnNRoot->Name = L"btnNRoot";
			this->btnNRoot->Size = System::Drawing::Size(49, 28);
			this->btnNRoot->TabIndex = 43;
			this->btnNRoot->UseVisualStyleBackColor = false;
			// 
			// btnLn
			// 
			this->btnLn->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnLn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLn->Location = System::Drawing::Point(247, 214);
			this->btnLn->Name = L"btnLn";
			this->btnLn->Size = System::Drawing::Size(49, 28);
			this->btnLn->TabIndex = 44;
			this->btnLn->Text = L"ln (x)";
			this->btnLn->UseVisualStyleBackColor = false;
			// 
			// telaPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(365, 285);
			this->Controls->Add(this->btnLn);
			this->Controls->Add(this->btnNRoot);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btnBackspace);
			this->Controls->Add(this->btnArctg);
			this->Controls->Add(this->btnArccos);
			this->Controls->Add(this->btnArcsin);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->btnPi);
			this->Controls->Add(this->caixaTexto);
			this->Controls->Add(this->btnOpenP);
			this->Controls->Add(this->btnCloseP);
			this->Controls->Add(this->btnFact);
			this->Controls->Add(this->btnLog);
			this->Controls->Add(this->btnExp);
			this->Controls->Add(this->btnTan);
			this->Controls->Add(this->btnDiv);
			this->Controls->Add(this->btnMul);
			this->Controls->Add(this->btnSub);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnSin);
			this->Controls->Add(this->btnPow);
			this->Controls->Add(this->btnSqrd);
			this->Controls->Add(this->btnSqrt);
			this->Controls->Add(this->btnCos);
			this->Controls->Add(this->btnDecimal);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btnSignal);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btnExecute);
			this->Controls->Add(this->btnClear);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"telaPrincipal";
			this->Text = L"Calculadora";
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &telaPrincipal::telaPrincipal_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void btnNRoot_Click(System::Object^  sender, System::EventArgs^  e) {
	memoria->novoOperador(_NROOT);
	caixaTexto->Text += "^(1/";
}
private: System::Void btn2_Click(System::Object^  sender, System::EventArgs^  e) {
	bool retorno = memoria->inserirNovoNumero('2');
	if (retorno == true) {
		caixaTexto->Text = caixaTexto->Text->Substring(0, caixaTexto->Text->Length - 1);
	}	
	caixaTexto->Text += "2";
}
private: System::Void btn1_Click(System::Object^  sender, System::EventArgs^  e) {
	bool retorno = memoria->inserirNovoNumero('1');
	if (retorno == true) {
		caixaTexto->Text = caixaTexto->Text->Substring(0, caixaTexto->Text->Length - 1);
	}
	caixaTexto->Text += "1";
}
private: System::Void btn3_Click(System::Object^  sender, System::EventArgs^  e) {
	bool retorno = memoria->inserirNovoNumero('3');
	if (retorno == true) {
		caixaTexto->Text = caixaTexto->Text->Substring(0, caixaTexto->Text->Length - 1);
	}
	caixaTexto->Text += "3";
}
private: System::Void btn4_Click(System::Object^  sender, System::EventArgs^  e) {
	bool retorno = memoria->inserirNovoNumero('4');
	if (retorno == true) {
		caixaTexto->Text = caixaTexto->Text->Substring(0, caixaTexto->Text->Length - 1);
	}
	caixaTexto->Text += "4";
}
private: System::Void btn5_Click(System::Object^  sender, System::EventArgs^  e) {
	bool retorno = memoria->inserirNovoNumero('5');
	if (retorno == true) {
		caixaTexto->Text = caixaTexto->Text->Substring(0, caixaTexto->Text->Length - 1);
	}
	caixaTexto->Text += "5";
}
private: System::Void btn6_Click(System::Object^  sender, System::EventArgs^  e) {
	bool retorno = memoria->inserirNovoNumero('6');
	if (retorno == true) {
		caixaTexto->Text = caixaTexto->Text->Substring(0, caixaTexto->Text->Length - 1);
	}
	caixaTexto->Text += "6";
}
private: System::Void btn7_Click(System::Object^  sender, System::EventArgs^  e) {
	bool retorno = memoria->inserirNovoNumero('7');
	if (retorno == true) {
		caixaTexto->Text = caixaTexto->Text->Substring(0, caixaTexto->Text->Length - 1);
	}
	caixaTexto->Text += "7";
}
private: System::Void btn8_Click(System::Object^  sender, System::EventArgs^  e) {
	bool retorno = memoria->inserirNovoNumero('8');
	if (retorno == true) {
		caixaTexto->Text = caixaTexto->Text->Substring(0, caixaTexto->Text->Length - 1);
	}
	caixaTexto->Text += "8";
}
private: System::Void btn9_Click(System::Object^  sender, System::EventArgs^  e) {
	bool retorno = memoria->inserirNovoNumero('9');
	if (retorno == true) {
		caixaTexto->Text = caixaTexto->Text->Substring(0, caixaTexto->Text->Length - 1);
	}
	caixaTexto->Text += "9";
	
}
private: System::Void btnClear_Click(System::Object^  sender, System::EventArgs^  e) {
	caixaTexto->Text = "";
	memoria->clearMemory();
}
private: System::Void btnExecute_Click(System::Object^  sender, System::EventArgs^  e) {
	caixaTexto->Text = memoria->CalcularExpressao();
}
private: System::Void btnSignal_Click(System::Object^  sender, System::EventArgs^  e) {
	int retorno = memoria->signal();
	System::String ^novaString("");
	if (retorno >= 0) {
		novaString = caixaTexto->Text->Substring(0, caixaTexto->Text->Length - retorno);
		novaString += "(-";
		novaString += caixaTexto->Text->Substring(caixaTexto->Text->Length - retorno);
	}
	else {
		novaString = caixaTexto->Text->Substring(0, caixaTexto->Text->Length + retorno);
		novaString += caixaTexto->Text->Substring(caixaTexto->Text->Length + retorno + 2);
	}
	caixaTexto->Text = novaString;
}
private: System::Void btn0_Click(System::Object^  sender, System::EventArgs^  e) {
	bool retorno = memoria->inserirNovoNumero('0');
	if (retorno == true) {
		caixaTexto->Text = caixaTexto->Text->Substring(0, caixaTexto->Text->Length - 1);
	}
	caixaTexto->Text += "0";
}
private: System::Void btnDecimal_Click(System::Object^  sender, System::EventArgs^  e) {
	int retorno = memoria->decimal();
	if (retorno == 1) {
		caixaTexto->Text += "0.";
	}
	if(retorno == 0){
		caixaTexto->Text += ".";
	}
}
private: System::Void btnDiv_Click(System::Object^  sender, System::EventArgs^  e) {
	memoria->novoOperador(_DIV);
	caixaTexto->Text += "/";
}
private: System::Void btnMul_Click(System::Object^  sender, System::EventArgs^  e) {
	memoria->novoOperador(_MUL);
	caixaTexto->Text += "*";
}
private: System::Void btnSub_Click(System::Object^  sender, System::EventArgs^  e) {
	memoria->novoOperador(_SUB);
	caixaTexto->Text += "-";
}
private: System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e) {
	memoria->novoOperador(_ADD);
	caixaTexto->Text += "+";
}
private: System::Void btnSin_Click(System::Object^  sender, System::EventArgs^  e) {
	memoria->novoOperador(_SIN);
	caixaTexto->Text += "sin(";
}
private: System::Void btnPi_Click(System::Object^  sender, System::EventArgs^  e) {
	memoria->novoOperador(_PI);
	caixaTexto->Text += "pi";
}
private: System::Void btnOpenP_Click(System::Object^  sender, System::EventArgs^  e) {
	memoria->novoOperador(_OP);
	caixaTexto->Text += "(";
}
private: System::Void btnCloseP_Click(System::Object^  sender, System::EventArgs^  e) {
	memoria->novoOperador(_CP);
	caixaTexto->Text += ")";
}
private: System::Void btnTan_Click(System::Object^  sender, System::EventArgs^  e) {
	memoria->novoOperador(_TG);
	caixaTexto->Text += "tg(";
}
private: System::Void btnCos_Click(System::Object^  sender, System::EventArgs^  e) {
	memoria->novoOperador(_COS);
	caixaTexto->Text += "cos(";
}
private: System::Void btnSqrt_Click(System::Object^  sender, System::EventArgs^  e) {
	memoria->novoOperador(_SQRT);
	caixaTexto->Text += "sqrt(";
}
private: System::Void btnExp_Click(System::Object^  sender, System::EventArgs^  e) {
	memoria->novoOperador(_EXP);
	caixaTexto->Text += "e^(";
}
private: System::Void btnLn_Click(System::Object^  sender, System::EventArgs^  e) {
	memoria->novoOperador(_LN);
	caixaTexto->Text += "ln(";
}
private: System::Void btnSqrd_Click(System::Object^  sender, System::EventArgs^  e) {
	memoria->novoOperador(_POW2);
	caixaTexto->Text += "^2";
}
private: System::Void btnLog_Click(System::Object^  sender, System::EventArgs^  e) {
	memoria->novoOperador(_LOG);
	caixaTexto->Text += "log(";
}
private: System::Void btnPow_Click(System::Object^  sender, System::EventArgs^  e) {
	memoria->novoOperador(_XPOWY);
	caixaTexto->Text += "^";
}          
private: System::Void btnFact_Click(System::Object^  sender, System::EventArgs^  e) {
	memoria->novoOperador(_FAT);
	caixaTexto->Text += "!";
}
private: System::Void telaPrincipal_Load(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void btnArccos_Click(System::Object^  sender, System::EventArgs^  e) {
	memoria->novoOperador(_ARCCOS);
	caixaTexto->Text += "arccos(";
}
private: System::Void btnArctg_Click(System::Object^  sender, System::EventArgs^  e) {
	memoria->novoOperador(_ARCTG);
	caixaTexto->Text += "arctg(";
}
private: System::Void btnArcsin_Click(System::Object^  sender, System::EventArgs^  e) {
	memoria->novoOperador(_ARCSIN);
	caixaTexto->Text += "arcsin(";
}
private: System::Void btnBackspace_Click_1(System::Object^  sender, System::EventArgs^  e) {
	int retorno = memoria->remover();
	if (caixaTexto->Text->Length == retorno)caixaTexto->Text = "";
	if (caixaTexto->Text->Length > 0) {
		caixaTexto->Text = caixaTexto->Text->Substring(0, caixaTexto->Text->Length - retorno);
	}
}
};
}
