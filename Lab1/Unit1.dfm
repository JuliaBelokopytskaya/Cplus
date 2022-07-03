object Form1: TForm1
  Left = 0
  Top = 0
  Caption = #1052#1072#1082#1089#1080#1084#1091#1084
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
    Left = 23
    Top = 23
    Width = 44
    Height = 13
    Caption = #1056#1072#1079#1084#1077#1088' n'
  end
  object Label2: TLabel
    Left = 23
    Top = 56
    Width = 83
    Height = 13
    Caption = #1048#1089#1093#1086#1076#1085#1099#1077' '#1095#1080#1089#1083#1072
    Color = clWindow
    ParentColor = False
  end
  object Label3: TLabel
    Left = 160
    Top = 153
    Width = 53
    Height = 13
    Caption = #1056#1077#1079#1091#1083#1100#1090#1072#1090
  end
  object Label4: TLabel
    Left = 320
    Top = 153
    Width = 201
    Height = 13
  end
  object Button1: TButton
    Left = 255
    Top = 228
    Width = 75
    Height = 25
    Caption = #1042#1099#1095#1080#1089#1083#1080#1090#1100
    TabOrder = 0
    OnClick = Button1Click
  end
  object Edit1: TEdit
    Left = 113
    Top = 20
    Width = 121
    Height = 21
    TabOrder = 1
  end
  object StringGrid1: TStringGrid
    Left = 23
    Top = 75
    Width = 320
    Height = 30
    ColCount = 2
    DefaultColWidth = 40
    FixedCols = 0
    RowCount = 1
    FixedRows = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing, goFixedRowDefAlign]
    TabOrder = 2
    RowHeights = (
      23)
  end
  object Button2: TButton
    Left = 288
    Top = 16
    Width = 121
    Height = 25
    Caption = #1048#1079#1084#1077#1085#1080#1090#1100' '#1088#1072#1079#1084#1077#1088
    TabOrder = 3
    OnClick = Button2Click
  end
end
