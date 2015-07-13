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
std::vector<TButton*> buttons;

//---------------------------------------------------------------------------
__fastcall TCalcForm::TCalcForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
/* обработка события показа формы */
void __fastcall TCalcForm::FormShow(TObject *Sender)
{
	buttons.insert(buttons.end(), CalcForm -> Button_0);
	buttons.insert(buttons.end(), CalcForm -> Button_1);
	buttons.insert(buttons.end(), CalcForm -> Button_2);
	buttons.insert(buttons.end(), CalcForm -> Button_3);
	buttons.insert(buttons.end(), CalcForm -> Button_4);
	buttons.insert(buttons.end(), CalcForm -> Button_5);
	buttons.insert(buttons.end(), CalcForm -> Button_6);
	buttons.insert(buttons.end(), CalcForm -> Button_7);
	buttons.insert(buttons.end(), CalcForm -> Button_8);
	buttons.insert(buttons.end(), CalcForm -> Button_9);

	Timer1 -> Enabled = true;
}
//---------------------------------------------------------------------------
void __fastcall TCalcForm::Timer1Timer(TObject *Sender)
{
	int counter = 0;
	int x = random(10);

	if (buttons[x] -> Visible == false) {
		buttons[x] -> Visible = true;
		counter++;

		if (counter == 10) {
			CalcForm -> Timer1 -> Enabled = false;
		}
	}
}
//---------------------------------------------------------------------------

void __fastcall TCalcForm::Button_1Click(TObject *Sender)
{
	CalcForm -> display -> Text = "1";
}
//---------------------------------------------------------------------------

void __fastcall TCalcForm::Button_2Click(TObject *Sender)
{
	CalcForm -> display -> Text = "2";
}
//---------------------------------------------------------------------------

void __fastcall TCalcForm::Button_3Click(TObject *Sender)
{
	CalcForm -> display -> Text = "3";
}
//---------------------------------------------------------------------------

void __fastcall TCalcForm::Button_4Click(TObject *Sender)
{
	CalcForm -> display -> Text = "4";
}
//---------------------------------------------------------------------------

void __fastcall TCalcForm::Button_5Click(TObject *Sender)
{
	CalcForm -> display -> Text = "5";
}
//---------------------------------------------------------------------------

void __fastcall TCalcForm::Button_6Click(TObject *Sender)
{
	CalcForm -> display -> Text = "6";
}
//---------------------------------------------------------------------------

void __fastcall TCalcForm::Button_7Click(TObject *Sender)
{
	CalcForm -> display -> Text = "7";
}
//---------------------------------------------------------------------------

void __fastcall TCalcForm::Button_8Click(TObject *Sender)
{
	CalcForm -> display -> Text = "8";
}
//---------------------------------------------------------------------------

void __fastcall TCalcForm::Button_9Click(TObject *Sender)
{
	CalcForm -> display -> Text = "9";
}
//---------------------------------------------------------------------------

void __fastcall TCalcForm::Button_0Click(TObject *Sender)
{
	CalcForm -> display -> Text = "0";
}
//---------------------------------------------------------------------------

