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

void __fastcall TForm1::OpenctrlO1Click(TObject *Sender)
{
     if(OpenDialog1->Execute()) //if there is file name and user clicks open
     {
        Content->Lines->LoadFromFile(OpenDialog1->FileName);
     }
}
//---------------------------------------------------------------------------

