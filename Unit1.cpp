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
     if(fileName != "")
     {
       Content->Lines->SaveToFile(fileName);// if not empty(file had been saved already)
     }
     else
     {
          Form1->Saveas1Click(MainMenu1);
     }

}
//---------------------------------------------------------------------------


void __fastcall TForm1::New1Click(TObject *Sender)
{
    if(Application->MessageBox("Do you really want to create new file?", "Confirm",
        MB_YESNOCANCEL | MB_ICONQUESTION) == IDYES)
        {
        Content->Lines->Clear();
        fileName = ""; //we must clear file name if user want to create new file
        }           //to avoid overwritting

        //read condition above this way:
        //if someone click YES in message box: clear memeo content and change
        //file name to none
        //otherwise do nothing

}
//---------------------------------------------------------------------------

void __fastcall TForm1::ContentKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{

    if( Shift.Contains(ssCtrl))
    {
        if(Key == 's' || Key == 'S')
         {
           Form1->SavectrlS1Click(MainMenu1); // MainMenu because it is onClic of this component

         }
        if(  Key == 'O' || Key == 'o')
         {
           Form1->OpenctrlO1Click(MainMenu1);
         }
         if(  Key == 'N' || Key == 'n')
         {
           Form1->New1Click(MainMenu1);
         }

    }


}
//---------------------------------------------------------------------------





void __fastcall TForm1::Close1Click(TObject *Sender)
{
       if(Application->MessageBox("Do you really want to close the application?", "Confirm",
        MB_YESNOCANCEL | MB_ICONQUESTION) == IDYES)
        {
           
            Application->Terminate();
        }

}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
       if(Application->MessageBox("Do you really want to close the application?", "Confirm",
        MB_YESNO | MB_ICONQUESTION) == IDNO )
        {
            Action = caNone;
        }

}







//---------------------------------------------------------------------------


void __fastcall TForm1::CutctrlX1Click(TObject *Sender)
{
        Content->CutToClipboard();        
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CopyctrlC1Click(TObject *Sender)
{
       Content->CopyToClipboard();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::PastectrlV1Click(TObject *Sender)
{
        Content->PasteFromClipboard();        
}
//---------------------------------------------------------------------------







void __fastcall TForm1::WordWrap1Click(TObject *Sender)
{
    if(WordWrap1->Checked == true)
    {
        WordWrap1->Checked = false; // it's need to be chaned on click
        Content->WordWrap = false;//word wrap Not working
        Content->ScrollBars = ssBoth;     //vertical and horizontal to be working

    }
    else
    {
       WordWrap1->Checked = true;              // it's need to be chaned on click
       Content->WordWrap = true;             //word wrap  working
       Content->ScrollBars = ssVertical;     //vertical  to be working  only

    }

}
//---------------------------------------------------------------------------


void __fastcall TForm1::Font1Click(TObject *Sender)
{
     if(FontDialog1->Execute())
     {
       Content->Font->Name = FontDialog1->Font->Name; // to get name of font
       Content->Font->Color = FontDialog1->Font->Color;
       Content->Font->Size = FontDialog1->Font->Size;
       Content->Font->Style = FontDialog1->Font->Style;
     }
}
//---------------------------------------------------------------------------

