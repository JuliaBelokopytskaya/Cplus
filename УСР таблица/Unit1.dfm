object Form1: TForm1
  Left = 0
  Top = 0
  Caption = #1058#1072#1073#1083#1080#1094#1072' '#1082#1074#1072#1076#1088#1072#1090#1086#1074' '#1080' '#1082#1091#1073#1086#1074
  ClientHeight = 299
  ClientWidth = 328
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
    Left = 79
    Top = 23
    Width = 92
    Height = 13
    Caption = #1050#1086#1083#1080#1095#1077#1089#1090#1074#1086' '#1095#1080#1089#1077#1083
  end
  object Edit1: TEdit
    Left = 215
    Top = 20
    Width = 24
    Height = 21
    TabOrder = 0
    OnChange = Edit1Change
  end
  object StringGrid1: TStringGrid
    Left = 63
    Top = 91
    Width = 216
    Height = 134
    ColCount = 3
    DefaultColWidth = 40
    FixedColor = clGray
    FixedCols = 0
    RowCount = 4
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBackground
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    GradientEndColor = clGray
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRangeSelect, goEditing, goFixedRowDefAlign]
    ParentFont = False
    TabOrder = 1
    ColWidths = (
      40
      40
      40)
    RowHeights = (
      23
      24
      24
      24)
  end
  object Button2: TButton
    Left = 109
    Top = 47
    Width = 130
    Height = 25
    Caption = #1042#1099#1074#1077#1089#1090#1080
    TabOrder = 2
    OnClick = Button2Click
  end
  object BitBtn1: TBitBtn
    Left = 232
    Top = 256
    Width = 75
    Height = 25
    Caption = 'Close'
    TabOrder = 3
    OnClick = BitBtn1Click
  end
end
