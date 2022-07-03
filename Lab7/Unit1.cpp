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
struct Tree{
	int info;
	Tree *left, *right;
}*root;

Tree* List(int inf) {
	 Tree *t = new Tree;
	 t -> info = inf;
	 t -> left = t -> right = NULL;
	 return t;
}
Tree* Min_Key(Tree *p) {
	while (p->left != NULL)
		p = p->left;
	return p;
}
Tree* Max_Key(Tree *p) {
	while (p->right != NULL)
		p = p->right;
	return p;
}
void Add_List(Tree*, int);
void View_Tree (Tree*, int);
void Del_Tree(Tree*); Tree* List(int);

void __fastcall TForm1::FormCreate(TObject *Sender)
{
   Memo1->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	if(root != NULL) Del_Tree(root);
	root = List (StrToInt(Edit1->Text));
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
	if( root == NULL ) ShowMessage(" Create TREE !");
	else {
		Memo1->Lines->Add("---------- View -----------");
		View_Tree(root, 0);
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	  if(root == NULL)
		root = List (StrToInt(Edit1->Text));
	  else
		Add_List (root, StrToInt(Edit1->Text));
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button5Click(TObject *Sender)
{
	Del_Tree(root);
	ShowMessage(" Tree Delete!");
	root = NULL;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button6Click(TObject *Sender)
{
      if(root!=NULL){
        Del_Tree(root);
        ShowMessage(" Tree Delete!");
     }
     Close();

}
//---------------------------------------------------------------------------
void View_Tree(Tree *p, int level ) {
	String str;
	if ( p ) {
		View_Tree (p -> right , level+1);
		for ( int i=0; i<level; i++) str = str + "    ";
			Form1->Memo1->Lines->Add(str + IntToStr(p->info));
		View_Tree(p -> left , level+1);
    }
 }
 void Del_Tree(Tree *t) {
	if ( t != NULL)  {
		Del_Tree ( t -> left);
		Del_Tree ( t -> right);
		delete t;
	}
 }
 void Add_List(Tree *root, int key){
	Tree *prev, *t;
	bool find = true;
	t = root;
	while ( t && find) {
		prev = t;
		if( key == t->info) {
			find = false;
			ShowMessage("Dublucate Key!");
	 	}
		else if ( key < t -> info )
			t = t -> left;
		else   t = t -> right;
	}
	if (find) {
		t = List(key);
		if ( key < prev -> info )
			prev -> left = t;
		else
			prev -> right = t;
	}
}


void __fastcall TForm1::Button4Click(TObject *Sender)
{
	Tree *p_min = Min_Key(root);
	Tree *p_max = Max_Key(root);
	int t= p_min->info;
	p_min->info= p_max->info;
	p_max->info = t;
    Memo1->Lines->Add("---------- View -----------");
	View_Tree(root, 0);
}
//---------------------------------------------------------------------------

