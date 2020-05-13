object Form1: TForm1
  Left = 192
  Top = 125
  Width = 924
  Height = 480
  Caption = 'Notepad'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object Content: TMemo
    Left = 0
    Top = 0
    Width = 908
    Height = 421
    Align = alClient
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'Times New Roman'
    Font.Style = []
    Lines.Strings = (
      '')
    ParentFont = False
    ScrollBars = ssVertical
    TabOrder = 0
    OnKeyDown = ContentKeyDown
  end
  object MainMenu1: TMainMenu
    Left = 816
    Top = 24
    object File1: TMenuItem
      Caption = 'File'
      object New1: TMenuItem
        Caption = 'New       Ctrl+N'
        OnClick = New1Click
      end
      object N1: TMenuItem
        Caption = '-'
      end
      object OpenctrlO1: TMenuItem
        Caption = 'Open     Ctrl+O'
        OnClick = OpenctrlO1Click
      end
      object SavectrlS1: TMenuItem
        Caption = 'Save       Ctrl+S'
        OnClick = SavectrlS1Click
      end
      object Saveas1: TMenuItem
        Caption = 'Save as '
        OnClick = Saveas1Click
      end
      object Close1: TMenuItem
        Caption = 'Close'
        OnClick = Close1Click
      end
    end
    object Edit1: TMenuItem
      Caption = 'Edit'
      object CutctrlX1: TMenuItem
        Caption = 'Cut     Ctrl+X'
        OnClick = CutctrlX1Click
      end
      object CopyctrlC1: TMenuItem
        Caption = 'Copy  Ctrl+C'
        OnClick = CopyctrlC1Click
      end
      object PastectrlV1: TMenuItem
        Caption = 'Paste  Ctrl+V'
        OnClick = PastectrlV1Click
      end
    end
    object Format1: TMenuItem
      Caption = 'Format'
      object WordWrap1: TMenuItem
        Caption = 'Word Wrap'
        Checked = True
        OnClick = WordWrap1Click
      end
      object Font1: TMenuItem
        Caption = 'Font'
      end
    end
    object Help1: TMenuItem
      Caption = 'Help'
      object Info1: TMenuItem
        Caption = 'Info'
        object Appinfo1: TMenuItem
          Caption = 'App info'
        end
        object VisitappGitHubpage1: TMenuItem
          Caption = 'Visit app GitHub page'
        end
      end
    end
  end
  object OpenDialog1: TOpenDialog
    Filter = 'Text files[TXT}|*txt|All files|**'
    Left = 664
    Top = 88
  end
  object SaveDialog1: TSaveDialog
    Filter = 'Text file[TXT]|*.txt|All files|*.*'
    Options = [ofOverwritePrompt, ofHideReadOnly, ofEnableSizing]
    Left = 504
    Top = 88
  end
end
