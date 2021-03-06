//---------------------------------------------------------------------------
#include<math.h>
double x,a,b,h,n;
double fact(int N)
{
	if (N == 0)
		return 1;
	else
		return N * fact(N - 1);
}
double FunS(double x,double n)
{
		double s=0;
		for(int i=0; i<=n; i++)
        {
			s += pow(x,2*i+1)/fact(2*i+1);
        }
        return s;
}
double FunY(double x)
{
 return (exp(x)-exp(-x))/2;
}

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
void __fastcall TForm1::Button4Click(TObject *Sender)
{
	Chart1->Series[0]->Clear();
	a=StrToFloat(Edit1->Text);
	b=StrToFloat(Edit2->Text);
	h=StrToFloat(Edit3->Text);
	n=(b-a)/h;
	for (x=a;x<=b;x+=h){
		Chart1->Series[0]->AddXY(x,FunS(x,n));
	}


 //---------------------------------------------------------------------------
	int xmax, ymax, xt, yt, y0, x0;
	double hx,hy,x;
	Image1->Canvas->Pen->Color=clBlack;
	xmax = Image1->Width;
	ymax = Image1->Height;
	Image1->Canvas->Rectangle(0,0,xmax, ymax);
	y0=ymax/2; x0=xmax/2;
	Image1->Canvas->MoveTo(0,y0);
	Image1->Canvas->LineTo(xmax,y0);
	Image1->Canvas->MoveTo(x0,0);
	Image1->Canvas->LineTo(x0,ymax);
	Image1->Canvas->Pen->Color=clRed;
	Image1->Canvas->Pen->Width=2;
	hx=(b-a)/xmax; hy=(FunY(b)-FunY(a))/ymax;
	Image1->Canvas->MoveTo(ceil(x0+a/hx),ceil(y0-FunY(a)/hy));
	for(x=a; x<=b; x+=h)
		Image1->Canvas->LineTo(ceil(x0+x/hx),ceil(y0-FunY(x)/hy));
}


//---------------------------------------------------------------------------

