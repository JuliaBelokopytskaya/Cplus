//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::RadioButton1Click(TObject *Sender)
{
	Label2->Caption = "";
}


void __fastcall TForm1::RadioButton2Click(TObject *Sender)
{
	Label3->Caption = "";
}

 //---------------------------------------------------------------------------

float solve_rec(int n){
	if (n == 1)
		return 0.5;
	else
	  return 1/(1+solve_rec(n-1));
}
float solve(int n){
	float s = 0.5;
	for(int j=1;j<n;j++){
		s = 1/(1+s);
	}
	return s;
}
void __fastcall TForm1::Button1Click(TObject *Sender)
{
    float n;

	n = StrToFloat(Edit1->Text);

	if ( RadioButton1->Checked )
	{
		Label2->Caption = FloatToStrF(solve_rec(n),ffGeneral,6,2);
	}
	if ( RadioButton2->Checked )
	{

	   Label3->Caption = FloatToStrF(solve(n),ffGeneral,6,2);
	}
}
//---------------------------------------------------------------------------

