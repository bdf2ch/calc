//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Calc.h"
#include <vector>
#include <algorithm>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TCalcForm *CalcForm;
std::vector<TShape*> buttons;
std::vector<TLabel*> labels;

//---------------------------------------------------------------------------
__fastcall TCalcForm::TCalcForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
/* обработка события показа формы */
void __fastcall TCalcForm::FormShow(TObject *Sender)
{
	buttons.insert(buttons.end(), CalcForm -> btn0);
	buttons.insert(buttons.end(), CalcForm -> btn1);
	buttons.insert(buttons.end(), CalcForm -> btn2);
	buttons.insert(buttons.end(), CalcForm -> btn3);
	buttons.insert(buttons.end(), CalcForm -> btn4);
	buttons.insert(buttons.end(), CalcForm -> btn5);
	buttons.insert(buttons.end(), CalcForm -> btn6);
	buttons.insert(buttons.end(), CalcForm -> btn7);
	buttons.insert(buttons.end(), CalcForm -> btn8);
	buttons.insert(buttons.end(), CalcForm -> btn9);

	labels.insert(labels.end(), CalcForm -> btn0_label);
	labels.insert(labels.end(), CalcForm -> btn1_label);
	labels.insert(labels.end(), CalcForm -> btn2_label);
	labels.insert(labels.end(), CalcForm -> btn3_label);
	labels.insert(labels.end(), CalcForm -> btn4_label);
	labels.insert(labels.end(), CalcForm -> btn5_label);
	labels.insert(labels.end(), CalcForm -> btn6_label);
	labels.insert(labels.end(), CalcForm -> btn7_label);
	labels.insert(labels.end(), CalcForm -> btn8_label);
	labels.insert(labels.end(), CalcForm -> btn9_label);

	for (int i = 0; i < buttons.size(); i++) {
		buttons[i] -> Brush -> Color = clBlack;
		buttons[i] -> Cursor = crHandPoint;
		labels[i] -> Font -> Color = clWhite;
		labels[i] -> Cursor = crHandPoint;
	}

	Timer1 -> Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TCalcForm::Timer1Timer(TObject *Sender)
{
	int counter = 0;
	int x = random(10);

	if (buttons[x] -> Visible == false) {
		buttons[x] -> Visible = true;
		labels[x] -> Visible = true;
		counter++;

		if (counter == 10) {
			CalcForm -> Timer1 -> Enabled = false;
		}
	}
}
//---------------------------------------------------------------------------

/* Обработчик изменения темы оформления */
void __fastcall TCalcForm::ThemeSelectorChange(TObject *Sender)
{
	TColor *bg_color = new TColor;
	TColor *font_color = new TColor;

	switch (CalcForm -> ThemeSelector -> ItemIndex) {
		case 0:
			bg_color = (TColor*)clBlack;
			font_color = (TColor*)clWhite;
			break;
		case 1:
			bg_color = (TColor*)clBlue;
			font_color = (TColor*)clWhite;
			break;
		case 2:
			bg_color = (TColor*)clYellow;
			font_color = (TColor*)clBlue;
			break;
		case 3:
			bg_color = (TColor*)RGB(247, 174, 74);
			font_color = (TColor*)clBlack;
			break;
		case 4:
			bg_color = (TColor*)RGB(216, 140, 230);
			font_color = (TColor*)clWhite;
			break;
	}

	for (int i = 0; i < buttons.size(); i++) {
		buttons[i] -> Brush -> Color = (TColor)bg_color;
		labels[i] -> Font -> Color = (TColor)font_color;
	}

	//CalcForm->Button_1->co
}
//---------------------------------------------------------------------------

void __fastcall TCalcForm::btn1MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
		  int X, int Y)
{
	CalcForm -> display -> Text = "1";	
}
//---------------------------------------------------------------------------

void __fastcall TCalcForm::btn2MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	CalcForm -> display -> Text = "2";		
}
//---------------------------------------------------------------------------

void __fastcall TCalcForm::btn3MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	CalcForm -> display -> Text = "3";		
}
//---------------------------------------------------------------------------

void __fastcall TCalcForm::btn4MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	CalcForm -> display -> Text = "4";		
}
//---------------------------------------------------------------------------

void __fastcall TCalcForm::btn5MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	CalcForm -> display -> Text = "5";		
}
//---------------------------------------------------------------------------

void __fastcall TCalcForm::btn6MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	CalcForm -> display -> Text = "6";		
}
//---------------------------------------------------------------------------

void __fastcall TCalcForm::btn7MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	CalcForm -> display -> Text = "7";		
}
//---------------------------------------------------------------------------

void __fastcall TCalcForm::btn8MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	CalcForm -> display -> Text = "8";		
}
//---------------------------------------------------------------------------

void __fastcall TCalcForm::btn9MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	CalcForm -> display -> Text = "9";		
}
//---------------------------------------------------------------------------

void __fastcall TCalcForm::btn0MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
	CalcForm -> display -> Text = "0";		
}
//---------------------------------------------------------------------------

