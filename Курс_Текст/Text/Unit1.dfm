object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Text'
  ClientHeight = 350
  ClientWidth = 635
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Button1: TButton
    Left = 32
    Top = 32
    Width = 185
    Height = 25
    Caption = #1063#1090#1077#1085#1080#1077' '#1076#1072#1085#1085#1099#1093' '#1080#1079' '#1092#1072#1081#1083#1072
    TabOrder = 0
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 368
    Top = 32
    Width = 185
    Height = 25
    Caption = #1042#1099#1074#1086#1076' '#1088#1077#1079#1091#1083#1100#1090#1072#1090#1072' '#1087#1086#1080#1089#1082#1072
    TabOrder = 1
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 240
    Top = 224
    Width = 97
    Height = 25
    Caption = #1047#1072#1087#1080#1089#1100' '#1074' '#1092#1072#1081#1083
    TabOrder = 2
    OnClick = Button3Click
  end
  object Memo1: TMemo
    Left = 32
    Top = 80
    Width = 185
    Height = 89
    Lines.Strings = (
      'Memo1')
    TabOrder = 3
  end
  object Memo2: TMemo
    Left = 368
    Top = 80
    Width = 185
    Height = 89
    Lines.Strings = (
      'Memo2')
    TabOrder = 4
  end
  object Button4: TButton
    Left = 424
    Top = 208
    Width = 75
    Height = 25
    Caption = #1054#1073' '#1072#1074#1090#1086#1088#1077
    TabOrder = 5
    OnClick = Button4Click
  end
  object Memo3: TMemo
    Left = 368
    Top = 248
    Width = 185
    Height = 49
    Lines.Strings = (
      'Memo3')
    TabOrder = 6
  end
  object OpenDialog1: TOpenDialog
    Filter = #1060#1072#1081#1083#1099' '#1076#1072#1085#1085#1099#1093'|*.txt|'#1042#1089#1077' '#1092#1072#1081#1083#1099'|*.*'
    Left = 40
    Top = 200
  end
  object SaveDialog1: TSaveDialog
    DefaultExt = '.txt'
    Filter = #1060#1072#1081#1083#1099' '#1076#1072#1085#1085#1099#1093'|*.txt|'#1042#1089#1077' '#1092#1072#1081#1083#1099'|*.*'
    Left = 40
    Top = 256
  end
end
