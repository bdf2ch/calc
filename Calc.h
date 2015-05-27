//---------------------------------------------------------------------------

#ifndef CalcH
#define CalcH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TCalcForm : public TForm
{
__published:	// IDE-managed Components
	TEdit *display;
	TButton *Button_1;
	TButton *Button_2;
	TButton *Button_3;
	TButton *Button_plus;
	TButton *Button_minus;
	TButton *Button_4;
	TButton *Button_5;
	TButton *Button_6;
	TButton *Button_7;
	TButton *Button_8;
	TButton *Button_9;
	TButton *Button_0;
	TButton *Button_multiply;
	TButton *Button_divide;
	TButton *Button_equals;
	TButton *Button_mod;
	TTimer *Timer1;
	TComboBox *ComboBox1;
	void __fastcall FormShow(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall Button_1Click(TObject *Sender);
	void __fastcall Button_2Click(TObject *Sender);
	void __fastcall Button_3Click(TObject *Sender);
	void __fastcall Button_4Click(TObject *Sender);
	void __fastcall Button_5Click(TObject *Sender);
	void __fastcall Button_6Click(TObject *Sender);
	void __fastcall Button_7Click(TObject *Sender);
	void __fastcall Button_8Click(TObject *Sender);
	void __fastcall Button_9Click(TObject *Sender);
	void __fastcall Button_0Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TCalcForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TCalcForm *CalcForm;
//---------------------------------------------------------------------------
#endif
