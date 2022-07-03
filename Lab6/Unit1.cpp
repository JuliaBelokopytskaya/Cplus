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
  randomize();
}
//---------------------------------------------------------------------------

struct Queque {
	int info;
	Queque * next, *prev;
	}*start,*finish, *t;
//----------------------------------------------------------------------------
void Create_Queque(Queque**, Queque**, int);
void Add_Queque(int, Queque**, Queque**, int);
void View_Queque(int, Queque*);
void Del_All(Queque**);
Queque*  Del_Odd(Queque*);

//---------------------------------------------------------------------------
void Create_Queque(Queque **b, Queque **e, int in) {
	t = new Queque;
	t -> info = in;
	t -> next = t -> prev = NULL;
	*b = *e = t;
}
//------------------------------------------------------------------
void Add_Queque(int kod, Queque **b, Queque **e, int in) {
	t = new Queque;
	t -> info = in;
	if(kod == 0){
		t -> prev = NULL;
		t -> next = *b;
		(*b) -> prev = t;
		*b = t;
	}
	else {
		t -> next = NULL;
		t -> prev = *e;
		(*e) -> next = t;
		*e = t;
	}
}
//------------------------------------------------------------------
void View_Queque(int kod, Queque *t) {
	while(t != NULL) {
		Form1->Memo1->Lines->Add(t->info);
		if(kod == 0) t = t->next;
		else t = t->prev;
	}
}
//-----------------------------------------------------------
void Del_All(Queque **p) {
	while(*p != NULL) {
		t = *p;
		*p = (*p) -> next;
		delete t;
	}
}
//-----------------------------------------------------------
Queque* Del_Odd(Queque *p)
{
	Queque *r=NULL;
	if(p==NULL)
		return NULL;
	if(p->next!=NULL)
		r=Del_Odd(p->next);
	if(p->info % 2 == 0 && p->info > 0)
	{
		delete p;
        return r;
    }
    else
	{
		p->next=r;
		return p;
	}
  }
//-----------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	int i, in = StrToInt(Edit1->Text);
	if(start != NULL){
		ShowMessage("Освободите память!");
		return;
	}
	Create_Queque(&start, &finish, in);
	Memo1->Lines->Add("Создали ");
}
//-----------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	int i, in = StrToInt(Edit1->Text);
	int kod = RadioGroup1->ItemIndex;

	String Str[2] = {"в начало ", "в конец "};
	Add_Queque(kod, &start, &finish, in);
	if(kod == 0) t = start;
	else t = finish;
	Memo1->Lines->Add("Добавили ");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
	if(!start){
		ShowMessage("Стек Пуст!");
		Memo1->Lines->Add("Стек Пуст!");
		return;
	}
	if(RadioGroup1->ItemIndex == 0) {
		t = start;
		Form1->Memo1->Lines->Add("-- С начала --");
	}
	else {
		t = finish;
		Form1->Memo1->Lines->Add("--- С конца --");
	}
	View_Queque(RadioGroup1->ItemIndex, t);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
	if (start != NULL) Del_All(&start);
	ShowMessage("Память освобождена!");
	Memo1->Lines->Add("Память освобождена!");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
	start = Del_Odd(start);
	Memo1->Lines->Add("--- Элементы ---");
	View_Queque(0, start);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button5Click(TObject *Sender)
{
	if(start != NULL) Del_All(&start);
	Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
	Memo1->Clear();
}
//---------------------------------------------------------------------------



