object Form1: TForm1
  Left = 0
  Top = 0
  Caption = #1052#1072#1090#1088#1080#1094#1072
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
    Width = 15
    Height = 13
    Caption = 'N='
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
    Width = 3
    Height = 13
  end
  object Label5: TLabel
    Left = 91
    Top = 21
    Width = 16
    Height = 13
    Caption = 'M='
  end
  object Label6: TLabel
    Left = 424
    Top = 232
    Width = 3
    Height = 13
  end
  object Button1: TButton
    Left = 248
    Top = 228
    Width = 75
    Height = 25
    Caption = #1042#1099#1095#1080#1089#1083#1080#1090#1100
    TabOrder = 0
    OnClick = Button1Click
  end
  object Edit1: TEdit
    Left = 44
    Top = 18
    Width = 24
    Height = 21
    TabOrder = 1
  end
  object StringGrid1: TStringGrid
    Left = 23
    Top = 75
    Width = 320
    Height = 78
    ColCount = 3
    DefaultColWidth = 40
    FixedCols = 0
    RowCount = 3
    FixedRows = 0
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing, goFixedRowDefAlign]
    TabOrder = 2
    RowHeights = (
      23
      24
      24)
  end
  object Edit2: TEdit
    Left = 112
    Top = 16
    Width = 24
    Height = 21
    TabOrder = 3
  end
  object StringGrid2: TStringGrid
    Left = 23
    Top = 172
    Width = 320
    Height = 29
    ColCount = 3
    DefaultColWidth = 40
    FixedCols = 0
    RowCount = 1
    FixedRows = 0
    TabOrder = 4
    RowHeights = (
      23)
  end
  object Button2: TButton
    Left = 213
    Top = 8
    Width = 130
    Height = 25
    Caption = #1048#1079#1084#1077#1085#1080#1090#1100' '#1088#1072#1079#1084#1077#1088#1085#1086#1089#1090#1100
    TabOrder = 5
    OnClick = Button2Click
  end
end
