//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
AnsiString fileName = "";  // variable to store file name for \"Save "\ option
                           //empty at the beginning
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
        try{
                Content->Lines->LoadFromFile(OpenDialog1->FileName);
                fileName =   OpenDialog1->FileName;
           }
        catch(...)
           {
             ShowMessage("Opening file failure.Make sure file does exist");
           }

     }
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Saveas1Click(TObject *Sender)
{
         if(SaveDialog1->Execute()) //if there is file name and user clicks open
     {
        try{
                Content->Lines->SaveToFile(SaveDialog1->FileName);
                 fileName =   SaveDialog1->FileName;
           }
        catch(...)
           {
             ShowMessage("Saving file failure");
           }

     }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::SavectrlS1Click(TObject *Sender)
{
     if(!(fileName == ""))
     {
         try{
                Content->Lines->SaveToFile(fileName);
           }
        catch(...)
           {
             ShowMessage("Saving file failure");
           }
     }
     else
     {
        ShowMessage("Save as file first");
     }

}
//---------------------------------------------------------------------------

