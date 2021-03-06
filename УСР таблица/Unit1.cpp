//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <cmath>
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
int f(int n)
{
    if(n == 0) return 0;
    if(n == 1 || n == 2) return 1;

    return f(n-1)+f(n-2);
}
 //---------------------------------------------------------------------------
int N;
void __fastcall TForm1::FormCreate(TObject *Sender)
{
		N=3;
		Edit1->Text=N;
		StringGrid1->RowCount=N+1;
		StringGrid1->ColCount=3;
		StringGrid1->Cells[0][0]="x";
		StringGrid1->Cells[1][0]="x^2";
		StringGrid1->Cells[2][0]="x^3";

}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
   void __fastcall TForm1::Button2Click(TObject *Sender)
{

		for(int i=1; i<=N;i++){
			StringGrid1->Cells[0][i]= IntToStr(f(i));
			StringGrid1->Cells[1][i]=FloatToStr(pow(f(i),2));
			StringGrid1->Cells[2][i]=FloatToStr(pow(f(i),3));
		}

   }
//---------------------------------------------------------------------------

void __fastcall TForm1::Edit1Change(TObject *Sender)
{
	N= StrToInt(Edit1->Text);
    StringGrid1->RowCount=N+1;
	StringGrid1->ColCount=3;
	StringGrid1->Cells[0][0]="x";
	StringGrid1->Cells[1][0]="x^2";
	StringGrid1->Cells[2][0]="x^3";
}
//---------------------------------------------------------------------------


void __fastcall TForm1::BitBtn1Click(TObject *Sender)
{
	this->Close();

}
//---------------------------------------------------------------------------

