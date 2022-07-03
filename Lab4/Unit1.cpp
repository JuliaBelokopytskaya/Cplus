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
float **A, *b;
int N;
int M;
void __fastcall TForm1::FormCreate(TObject *Sender)
{
		N=3;
		M=3;
		Edit1->Text=N;
		Edit2->Text=M;
		StringGrid1->RowCount=N+1;
		StringGrid1->ColCount=M+1;
		StringGrid2->ColCount=N+1;
		for (int i=1; i<=N; i++){
			StringGrid1->Cells[i][0]="j="+IntToStr(i);
			StringGrid1->Cells[0][i]="i="+IntToStr(i);
        }
		StringGrid1->Cells[0][0] = "������� A";
		StringGrid2->Cells[0][0] = "������ B";

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	float s=0;
	int i,j;
	A = new float*[N];
	b = new float[N];
	for(i=0; i<N;i++)
		A[i] = new float[M];
	for(i=0; i<N;i++) {
		for(j=0; j<M;j++)
			A[i][j]=StrToFloat(StringGrid1->Cells[j+1][i+1]);

	}
	for(i=0; i<N;i++) {
		for(j=0; j<M;j++){
			s+=A[i][j];
		}
		b[i]=s/M;

		s=0;
	}
	for (i=0;i<N;i++)
		StringGrid2->Cells[i+1][0] = FloatToStr(b[i]);
	for (i=0;i<N;i++)
		delete[] A[i];
	delete [] A;
   }
//---------------------------------------------------------------------------
   void __fastcall TForm1::Button2Click(TObject *Sender)
{
	int i;
		N=StrToInt(Edit1->Text);
		M=StrToInt(Edit2->Text);
		StringGrid1->RowCount = N+1;
		StringGrid1->ColCount = M+1;
		StringGrid2->ColCount = N+1;
		for(i=1; i<=N;i++){
			StringGrid1->Cells[0][i]="i="+IntToStr(i);
		}
		for(i=1; i<=M;i++){
			StringGrid1->Cells[i][0]="j="+IntToStr(i);
		}
   }
//---------------------------------------------------------------------------

