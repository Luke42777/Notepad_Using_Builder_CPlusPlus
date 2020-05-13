//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TMainMenu *MainMenu1;
        TMenuItem *File1;
        TMenuItem *New1;
        TMenuItem *N1;
        TMenuItem *OpenctrlO1;
        TMenuItem *SavectrlS1;
        TMenuItem *Saveas1;
        TMenuItem *Edit1;
        TMenuItem *CutctrlX1;
        TMenuItem *CopyctrlC1;
        TMenuItem *PastectrlV1;
        TMenuItem *Format1;
        TMenuItem *WordWrap1;
        TMenuItem *Font1;
        TMenuItem *Help1;
        TMenuItem *Info1;
        TMenuItem *Appinfo1;
        TMenuItem *VisitappGitHubpage1;
        TMemo *Content;
        TOpenDialog *OpenDialog1;
        TSaveDialog *SaveDialog1;
        TMenuItem *Close1;
        TFontDialog *FontDialog1;
        void __fastcall OpenctrlO1Click(TObject *Sender);
        void __fastcall Saveas1Click(TObject *Sender);
        void __fastcall SavectrlS1Click(TObject *Sender);
        void __fastcall New1Click(TObject *Sender);
        void __fastcall ContentKeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall Close1Click(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall CutctrlX1Click(TObject *Sender);
        void __fastcall CopyctrlC1Click(TObject *Sender);
        void __fastcall PastectrlV1Click(TObject *Sender);
        void __fastcall WordWrap1Click(TObject *Sender);
        void __fastcall Font1Click(TObject *Sender);
        void __fastcall Appinfo1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
