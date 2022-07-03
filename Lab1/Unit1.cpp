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
 //---------------------------------------------------------------------------
int  *A;
int N=4;
void __fastcall TForm1::FormCreate(TObject *Sender)
{
	Edit1->Text=IntToStr(N);
	StringGrid1->ColCount=N;
}
int max(int *A){
	int n,m,s,max_m,max_s;
	max_m = 0;
	max_s = 0;
	n = N;
	for(int i=0; i<N;i++){
		n=A[i];
		while (n != 0) {
			m = n;
			s = 0;
			while (n > 0) {
				s += n%10;
				n = n/10;
			}
			if (s > max_s) {
				max_s = s;
				max_m = m;
			}

		}
	}
	return max_m;

}
void __fastcall TForm1::Button1Click(TObject *Sender)
{
   A = new int[N];
   for (int i=0;i<N;i++){
	  A[i]=StrToInt(StringGrid1->Cells[i][0]);
   }
   Label4->Caption = IntToStr(max(A));
   delete[]A;

}

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	N=StrToInt(Edit1->Text);
	StringGrid1->ColCount=N;
}
//---------------------------------------------------------------------------

