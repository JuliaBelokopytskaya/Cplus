object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Queue'
  ClientHeight = 299
  ClientWidth = 635
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 24
    Top = 24
    Width = 87
    Height = 13
    Caption = #1042#1074#1077#1076#1080#1090#1077' '#1101#1083#1077#1084#1077#1085#1090
  end
  object Label2: TLabel
    Left = 464
    Top = 92
    Width = 99
    Height = 13
    Caption = #1042#1099#1073#1086#1088' '#1090#1086#1095#1082#1080' '#1074#1093#1086#1076#1072
  end
  object Edit1: TEdit
    Left = 216
    Top = 21
    Width = 49
    Height = 21
    TabOrder = 0
  end
  object Button1: TButton
    Left = 304
    Top = 64
    Width = 75
    Height = 25
    Caption = #1057#1086#1079#1076#1072#1090#1100
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 304
    Top = 111
    Width = 75
    Height = 25
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100
    TabOrder = 2
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 304
    Top = 150
    Width = 75
    Height = 25
    Caption = #1055#1088#1086#1089#1084#1086#1090#1088#1077#1090#1100
    TabOrder = 3
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 304
    Top = 189
    Width = 75
    Height = 25
    Caption = #1054#1095#1080#1089#1090#1080#1090#1100
    TabOrder = 4
    OnClick = Button4Click
  end
  object Button5: TButton
    Left = 304
    Top = 266
    Width = 75
    Height = 25
    Caption = #1042#1099#1093#1086#1076
    TabOrder = 5
    OnClick = Button5Click
  end
  object Button6: TButton
    Left = 304
    Top = 228
    Width = 75
    Height = 25
    Caption = #1060#1080#1083#1100#1090#1088#1072#1094#1080#1103
    TabOrder = 6
    OnClick = Button6Click
  end
  object Memo1: TMemo
    Left = 24
    Top = 66
    Width = 185
    Height = 225
    Lines.Strings = (
      'Memo1')
    TabOrder = 7
  end
  object RadioGroup1: TRadioGroup
    Left = 464
    Top = 111
    Width = 105
    Height = 103
    Items.Strings = (
      #1053#1072#1095#1072#1083#1086
      #1050#1086#1085#1077#1094)
    TabOrder = 8
  end
end
