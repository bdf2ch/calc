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
	TButton *Button_plus;
	TButton *Button_minus;
	TButton *Button_multiply;
	TButton *Button_divide;
	TButton *Button_equals;
	TButton *Button_mod;
	TTimer *Timer1;
	TComboBox *ThemeSelector;
	TShape *btn1;
	TLabel *btn1_label;
	TShape *btn2;
	TLabel *btn2_label;
	TShape *btn3;
	TLabel *btn3_label;
	TShape *btn4;
	TLabel *btn4_label;
	TShape *btn5;
	TLabel *btn5_label;
	TShape *btn6;
	TLabel *btn6_label;
	TShape *btn7;
	TLabel *btn7_label;
	TShape *btn8;
	TLabel *btn8_label;
	TShape *btn9;
	TLabel *btn9_label;
	TShape *btn0;
	TLabel *btn0_label;
	void __fastcall FormShow(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall ThemeSelectorChange(TObject *Sender);
	void __fastcall btn1MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall btn2MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall btn3MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall btn4MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall btn5MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall btn6MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall btn7MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
		  int X, int Y);
	void __fastcall btn8MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall btn9MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y);
	void __fastcall btn0MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
		  int X, int Y);

private:	// User declarations
public:		// User declarations
	__fastcall TCalcForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TCalcForm *CalcForm;
//---------------------------------------------------------------------------
#endif
