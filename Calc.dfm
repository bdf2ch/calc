object CalcForm: TCalcForm
  Left = 0
  Top = 0
  BorderIcons = [biSystemMenu, biMinimize]
  Caption = 'Calc'
  ClientHeight = 239
  ClientWidth = 312
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object btn1: TShape
    Left = 8
    Top = 35
    Width = 50
    Height = 38
    Brush.Color = clBlack
    Visible = False
    OnMouseDown = btn1MouseDown
  end
  object btn1_label: TLabel
    Left = 26
    Top = 43
    Width = 10
    Height = 20
    Caption = '1'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = 20
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    Visible = False
    OnMouseDown = btn1MouseDown
  end
  object btn2: TShape
    Left = 67
    Top = 35
    Width = 50
    Height = 38
    Brush.Color = clBlack
    Visible = False
    OnMouseDown = btn2MouseDown
  end
  object btn2_label: TLabel
    Left = 85
    Top = 43
    Width = 10
    Height = 20
    Caption = '2'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = 20
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    Visible = False
    OnMouseDown = btn2MouseDown
  end
  object btn3: TShape
    Left = 127
    Top = 35
    Width = 50
    Height = 38
    Brush.Color = clBlack
    Visible = False
    OnMouseDown = btn3MouseDown
  end
  object btn3_label: TLabel
    Left = 145
    Top = 43
    Width = 10
    Height = 20
    Caption = '3'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = 20
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    Visible = False
    OnMouseDown = btn3MouseDown
  end
  object btn4: TShape
    Left = 8
    Top = 89
    Width = 50
    Height = 38
    Brush.Color = clBlack
    Visible = False
    OnMouseDown = btn4MouseDown
  end
  object btn4_label: TLabel
    Left = 26
    Top = 97
    Width = 10
    Height = 20
    Caption = '4'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = 20
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    Visible = False
    OnMouseDown = btn4MouseDown
  end
  object btn5: TShape
    Left = 67
    Top = 89
    Width = 50
    Height = 38
    Brush.Color = clBlack
    Visible = False
    OnMouseDown = btn5MouseDown
  end
  object btn5_label: TLabel
    Left = 85
    Top = 97
    Width = 10
    Height = 20
    Caption = '5'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = 20
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    Visible = False
    OnMouseDown = btn5MouseDown
  end
  object btn6: TShape
    Left = 127
    Top = 89
    Width = 50
    Height = 38
    Brush.Color = clBlack
    Visible = False
    OnMouseDown = btn6MouseDown
  end
  object btn6_label: TLabel
    Left = 145
    Top = 97
    Width = 10
    Height = 20
    Caption = '6'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = 20
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    Visible = False
    OnMouseDown = btn6MouseDown
  end
  object btn7: TShape
    Left = 8
    Top = 142
    Width = 50
    Height = 38
    Brush.Color = clBlack
    Visible = False
    OnMouseDown = btn7MouseDown
  end
  object btn7_label: TLabel
    Left = 26
    Top = 150
    Width = 10
    Height = 20
    Caption = '7'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = 20
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    Visible = False
    OnMouseDown = btn7MouseDown
  end
  object btn8: TShape
    Left = 67
    Top = 142
    Width = 50
    Height = 38
    Brush.Color = clBlack
    Visible = False
    OnMouseDown = btn8MouseDown
  end
  object btn8_label: TLabel
    Left = 85
    Top = 150
    Width = 10
    Height = 20
    Caption = '8'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = 20
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    Visible = False
    OnMouseDown = btn8MouseDown
  end
  object btn9: TShape
    Left = 127
    Top = 142
    Width = 50
    Height = 38
    Brush.Color = clBlack
    Visible = False
    OnMouseDown = btn9MouseDown
  end
  object btn9_label: TLabel
    Left = 145
    Top = 150
    Width = 10
    Height = 20
    Caption = '9'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = 20
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    Visible = False
    OnMouseDown = btn9MouseDown
  end
  object btn0: TShape
    Left = 8
    Top = 195
    Width = 50
    Height = 38
    Brush.Color = clBlack
    Visible = False
    OnMouseDown = btn0MouseDown
  end
  object btn0_label: TLabel
    Left = 26
    Top = 203
    Width = 10
    Height = 20
    Caption = '0'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWhite
    Font.Height = 20
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
    Visible = False
    OnMouseDown = btn0MouseDown
  end
  object display: TEdit
    Left = 8
    Top = 8
    Width = 297
    Height = 21
    TabOrder = 0
  end
  object Button_plus: TButton
    Left = 200
    Top = 33
    Width = 49
    Height = 40
    Caption = '+'
    TabOrder = 1
  end
  object Button_minus: TButton
    Left = 255
    Top = 33
    Width = 50
    Height = 40
    Caption = '-'
    TabOrder = 2
  end
  object Button_multiply: TButton
    Left = 200
    Top = 87
    Width = 49
    Height = 40
    Caption = '*'
    TabOrder = 3
  end
  object Button_divide: TButton
    Left = 255
    Top = 87
    Width = 49
    Height = 40
    Caption = '/'
    TabOrder = 4
  end
  object Button_equals: TButton
    Left = 200
    Top = 140
    Width = 49
    Height = 40
    Caption = '='
    TabOrder = 5
  end
  object Button_mod: TButton
    Left = 255
    Top = 140
    Width = 49
    Height = 40
    Caption = '%'
    TabOrder = 6
  end
  object ThemeSelector: TComboBox
    Left = 200
    Top = 195
    Width = 104
    Height = 21
    Style = csDropDownList
    ItemIndex = 0
    TabOrder = 7
    Text = #1063#1077#1088#1085#1072#1103' '#1090#1077#1084#1072
    OnChange = ThemeSelectorChange
    Items.Strings = (
      #1063#1077#1088#1085#1072#1103' '#1090#1077#1084#1072
      #1057#1080#1085#1103#1103' '#1090#1077#1084#1072
      #1046#1077#1083#1090#1072#1103' '#1090#1077#1084#1072
      #1054#1088#1072#1085#1078#1077#1074#1072#1103' '#1090#1077#1084#1072
      #1060#1080#1086#1083#1077#1090#1086#1074#1072#1103' '#1090#1077#1084#1072)
  end
  object Timer1: TTimer
    Enabled = False
    Interval = 250
    OnTimer = Timer1Timer
    Left = 72
    Top = 192
  end
end
