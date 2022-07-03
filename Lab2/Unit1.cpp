//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <ctime>
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
int *A, *b;
int N=1001;
void __fastcall TForm1::FormCreate(TObject *Sender)
{
	randomize();
	StringGrid1->ColCount=N;
	for(int i=0; i<N;i++)
		StringGrid1->Cells[i][0] = IntToStr(random(21)-10);
}
//---------------------------------------------------------------------------
 int Poisk_Del_2(int *a, int x)
{
	int i = 0, j = N-1, m;
	while(i <= j) {
		m = i+(j-i)/2;
		if (a[m] < x){
		   j = m-1;
		}
		else if(a[m]>x) i = m+1;
		else return m;
	}
	return -1;
}
//---------------------------------------------------------------------------
int Poisk_Lin(int *a, int x)
{
	int i, j=0;
	for(i = 0; i < N; i++){
		if ( a[i] == x )
		{
			j=1;
			return i;

		}
	}
	if(j==0){
		return -1;
	}
}

//---------------------------------------------------------------------------

void sort(int *digitals){
 for (int i = 0; i < N-1; i++) {
	for (int j = 0; j < N-i-1; j++) {
	  if (digitals[j] < digitals[j + 1]) {
		int b = digitals[j];
		digitals[j] = digitals[j + 1];
		digitals[j + 1] = b;
	  }
    }
  }
}
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	int i,j;
	A = new int[N];
	int kod = RadioGroup1->ItemIndex;
	for(i=0; i<N;i++)
		A[i]=StrToInt(StringGrid1->Cells[i][0]);
	sort(A);
	for (i=0;i<N;i++)
		StringGrid1->Cells[i][0] = IntToStr(A[i]);
	int x= StrToInt(Edit1->Text);
	if(kod==0){
		clock_t t1;
		int res= Poisk_Del_2(A, x);
		t1=clock();
		if(res==-1)
			Label4->Caption = "Не найден";
		else
			Label4->Caption = "Индекс = "+ IntToStr(res)+" Время = "+float(t1)/CLOCKS_PER_SEC;
	}
	else{
		clock_t t1;
		int res = Poisk_Lin(A, x);
		t1=clock();
		if(res==-1)
			Label6->Caption = "Не найден";
		else
			Label6->Caption = "Индекс = "+ IntToStr(res)+" Время = "+float(t1)/CLOCKS_PER_SEC;
	}
	delete [] A;
   }

//---------------------------------------------------------------------------



