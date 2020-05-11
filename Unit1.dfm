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
    TabOrder = 0
  end
  object MainMenu1: TMainMenu
    Left = 816
    Top = 24
    object File1: TMenuItem
      Caption = 'File'
      object New1: TMenuItem
        Caption = 'New'
      end
      object N1: TMenuItem
        Caption = '-'
      end
      object OpenctrlO1: TMenuItem
        Caption = 'Open ctrl+O'
        OnClick = OpenctrlO1Click
      end
      object SavectrlS1: TMenuItem
        Caption = 'Save ctrl+S'
      end
      object Saveas1: TMenuItem
        Caption = 'Save as '
        OnClick = Saveas1Click
      end
    end
    object Edit1: TMenuItem
      Caption = 'Edit'
      object CutctrlX1: TMenuItem
        Caption = 'Cut ctrl+X'
      end
      object CopyctrlC1: TMenuItem
        Caption = 'Copy ctrl+C'
      end
      object PastectrlV1: TMenuItem
        Caption = 'Paste ctrl+V'
      end
    end
    object Format1: TMenuItem
      Caption = 'Format'
      object WordWrap1: TMenuItem
        Caption = 'Word Wrap'
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
    Left = 504
    Top = 88
  end
end
