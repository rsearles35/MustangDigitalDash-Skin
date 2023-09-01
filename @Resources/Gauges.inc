
; this file contains the 3 small gauges located in the center of the screen

[Variables]
Gauge1CenterX=(660*#ScaleX#)
Gauge1CenterY=(265*#ScaleY#)
GaugeRadius=(100*#ScaleY#)
Gauge2CenterX=(960*#ScaleX#)
Gauge2CenterY=(265*#ScaleY#)
Gauge3CenterX=(1260*#ScaleX#)
Gauge3CenterY=(265*#ScaleY#)

; Gauge #1

[Gauge1BorderOutsideRadius]
Meter=Roundline
UpdateDivider=-1
X=#Gauge1CenterX#
Y=#Gauge1CenterY#
StartAngle=(Rad(135))
RotationAngle=(Rad(270))
LineStart=(#GaugeRadius# - 3)
LineLength=(#GaugeRadius# + 3)
LineColor=#GaugeShadowColor#
Solid=1
AntiAlias=1

[Gauge1BorderOutsideRadius2]
Meter=Roundline
UpdateDivider=-1
X=#Gauge1CenterX#
Y=#Gauge1CenterY#
StartAngle=(Rad(135))
RotationAngle=(Rad(270))
LineStart=(#GaugeRadius# - 1)
LineLength=(#GaugeRadius# + 1)
LineColor=255,255,255
Solid=1
AntiAlias=1

[MeterIconCpu]
Meter=Image
UpdateDivider=-1
ImageName=#@#Images\#CPUImage#
W=(80*#ScaleY#)
H=(80*#ScaleY#)
X=(#Gauge1CenterX#-(40*#ScaleY#))
Y=(#Gauge1CenterY#-(40*#ScaleY#))

[MeterCPUTempRadialFill]
Meter=Roundline
MeasureName=CPU0Temp
X=#Gauge1CenterX#
Y=#Gauge1CenterY#
StartAngle=(Rad(135))
RotationAngle=(Rad(270))
LineColor=#GaugeRadialFillColor#
StartAngle=(Rad(135))
RotationAngle=(Rad(270))
LineStart=(#GaugeRadius#-5)
LineLength=(#GaugeRadius#-30)
Solid=1
AntiAlias=1

[Gauge1Ticks]
Meter=Shape
UpdateDivider=-1
; major ticks
Shape=Line (#Gauge1CenterX# + Sin(Rad(45))*(#GaugeRadius#-10*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(45))*(#GaugeRadius#-10*#ScaleY#)),(#Gauge1CenterX# + Sin(Rad(45))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(45))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThick | Stroke Color #TickColorOrange#
Shape2=Line (#Gauge1CenterX# + Sin(Rad(99))*(#GaugeRadius#-10*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(99))*(#GaugeRadius#-10*#ScaleY#)),(#Gauge1CenterX# + Sin(Rad(99))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(99))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThick | Stroke Color #TickColorOrange#
Shape3=Line (#Gauge1CenterX# + Sin(Rad(153))*(#GaugeRadius#-10*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(153))*(#GaugeRadius#-10*#ScaleY#)),(#Gauge1CenterX# + Sin(Rad(153))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(153))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThick
Shape4=Line (#Gauge1CenterX# + Sin(Rad(207))*(#GaugeRadius#-10*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(207))*(#GaugeRadius#-10*#ScaleY#)),(#Gauge1CenterX# + Sin(Rad(207))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(207))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThick
Shape5=Line (#Gauge1CenterX# + Sin(Rad(261))*(#GaugeRadius#-10*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(261))*(#GaugeRadius#-10*#ScaleY#)),(#Gauge1CenterX# + Sin(Rad(261))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(261))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThick
Shape6=Line (#Gauge1CenterX# + Sin(Rad(315))*(#GaugeRadius#-10*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(315))*(#GaugeRadius#-10*#ScaleY#)),(#Gauge1CenterX# + Sin(Rad(315))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(315))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThick
; minor ticks
Shape7=Line (#Gauge1CenterX# + Sin(Rad(54))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(54))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge1CenterX# + Sin(Rad(54))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(54))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin | Stroke Color #TickColorRed#
Shape8=Line (#Gauge1CenterX# + Sin(Rad(63))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(63))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge1CenterX# + Sin(Rad(63))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(63))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin | Stroke Color #TickColorRed#
Shape9=Line (#Gauge1CenterX# + Sin(Rad(72))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(72))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge1CenterX# + Sin(Rad(72))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(72))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin | Stroke Color #TickColorRed#
Shape10=Line (#Gauge1CenterX# + Sin(Rad(81))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(81))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge1CenterX# + Sin(Rad(81))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(81))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin | Stroke Color #TickColorRed#
Shape11=Line (#Gauge1CenterX# + Sin(Rad(90))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(90))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge1CenterX# + Sin(Rad(90))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(90))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin | Stroke Color #TickColorRed#
Shape12=Line (#Gauge1CenterX# + Sin(Rad(108))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(108))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge1CenterX# + Sin(Rad(108))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(108))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape13=Line (#Gauge1CenterX# + Sin(Rad(117))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(117))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge1CenterX# + Sin(Rad(117))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(117))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape14=Line (#Gauge1CenterX# + Sin(Rad(126))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(126))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge1CenterX# + Sin(Rad(126))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(126))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape15=Line (#Gauge1CenterX# + Sin(Rad(135))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(135))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge1CenterX# + Sin(Rad(135))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(135))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape16=Line (#Gauge1CenterX# + Sin(Rad(144))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(144))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge1CenterX# + Sin(Rad(144))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(144))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape17=Line (#Gauge1CenterX# + Sin(Rad(162))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(162))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge1CenterX# + Sin(Rad(162))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(162))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape18=Line (#Gauge1CenterX# + Sin(Rad(171))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(171))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge1CenterX# + Sin(Rad(171))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(171))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape19=Line (#Gauge1CenterX# + Sin(Rad(180))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(180))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge1CenterX# + Sin(Rad(180))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(180))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape20=Line (#Gauge1CenterX# + Sin(Rad(189))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(189))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge1CenterX# + Sin(Rad(189))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(189))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape21=Line (#Gauge1CenterX# + Sin(Rad(198))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(198))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge1CenterX# + Sin(Rad(198))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(198))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape22=Line (#Gauge1CenterX# + Sin(Rad(216))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(216))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge1CenterX# + Sin(Rad(216))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(216))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape23=Line (#Gauge1CenterX# + Sin(Rad(225))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(225))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge1CenterX# + Sin(Rad(225))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(225))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape24=Line (#Gauge1CenterX# + Sin(Rad(234))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(234))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge1CenterX# + Sin(Rad(234))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(234))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape25=Line (#Gauge1CenterX# + Sin(Rad(243))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(243))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge1CenterX# + Sin(Rad(243))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(243))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape26=Line (#Gauge1CenterX# + Sin(Rad(252))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(252))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge1CenterX# + Sin(Rad(252))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(252))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape27=Line (#Gauge1CenterX# + Sin(Rad(270))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(270))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge1CenterX# + Sin(Rad(270))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(270))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape28=Line (#Gauge1CenterX# + Sin(Rad(279))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(279))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge1CenterX# + Sin(Rad(279))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(279))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape29=Line (#Gauge1CenterX# + Sin(Rad(288))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(288))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge1CenterX# + Sin(Rad(288))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(288))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape30=Line (#Gauge1CenterX# + Sin(Rad(297))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(297))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge1CenterX# + Sin(Rad(297))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(297))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape31=Line (#Gauge1CenterX# + Sin(Rad(306))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(306))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge1CenterX# + Sin(Rad(306))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge1CenterY# + Cos(Rad(306))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
; line styles
GaugeTickLineThin= StrokeWidth 2 | Stroke Color 255,255,255 | Fill Color 255,255,255 
GaugeTickLineThick= StrokeWidth 4 | Stroke Color 255,255,255 | Fill Color 255,255,255 

[MeterStringCPU0Temp]
Meter=String
MeasureName=CPU0Temp
MeterStyle=GaugeFontStyle
X=(#Gauge1CenterX#)
Y=(#Gauge1CenterY#+50*#ScaleY#)
FontSize=(16*#ScaleY#)
Text="%1 [\x00B0]C"

[MeterStringCPU0Temp0]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle
X=(#Gauge1CenterX#-60*#ScaleX#)
Y=(#Gauge1CenterY#+70*#ScaleY#)
FontSize=(18*#ScaleY#)
Text=0

[MeterStringCPU0Temp100]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle
X=(#Gauge1CenterX#+60*#ScaleX#)
Y=(#Gauge1CenterY#+70*#ScaleY#)
FontSize=(18*#ScaleY#)
Text=100

; Gauge #2

[Gauge2BorderOutsideRadius]
Meter=Roundline
UpdateDivider=-1
X=#Gauge2CenterX#
Y=#Gauge2CenterY#
StartAngle=(Rad(135))
RotationAngle=(Rad(270))
LineStart=(#GaugeRadius# - 3)
LineLength=(#GaugeRadius# + 3)
LineColor=#GaugeShadowColor#
Solid=1
AntiAlias=1

[Gauge2BorderOutsideRadius2]
Meter=Roundline
UpdateDivider=-1
X=#Gauge2CenterX#
Y=#Gauge2CenterY#
StartAngle=(Rad(135))
RotationAngle=(Rad(270))
LineStart=(#GaugeRadius# - 1)
LineLength=(#GaugeRadius# + 1)
LineColor=255,255,255
Solid=1
AntiAlias=1

[MeterIconWaterTemp]
Meter=Image
UpdateDivider=-1
ImageName=#@#Images\#MiscImage#
W=(70*#ScaleY#)
H=(70*#ScaleY#)
X=(#Gauge2CenterX#-35*#ScaleY#)
Y=(#Gauge2CenterY#-35*#ScaleY#)

[MeterWaterTempRadialFill]
Meter=Roundline
MeasureName=WaterTemp
X=#Gauge2CenterX#
Y=#Gauge2CenterY#
StartAngle=(Rad(135))
RotationAngle=(Rad(270))
LineColor=#GaugeRadialFillColor#
StartAngle=(Rad(135))
RotationAngle=(Rad(270))
LineStart=(#GaugeRadius#-5)
LineLength=(#GaugeRadius#-30)
Solid=1
AntiAlias=1

[Gauge2Ticks]
Meter=Shape
UpdateDivider=-1
; major ticks
Shape=Line (#Gauge2CenterX# + Sin(Rad(45))*(#GaugeRadius#-10*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(45))*(#GaugeRadius#-10*#ScaleY#)),(#Gauge2CenterX# + Sin(Rad(45))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(45))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThick | Stroke Color #TickColorOrange#
Shape2=Line (#Gauge2CenterX# + Sin(Rad(99))*(#GaugeRadius#-10*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(99))*(#GaugeRadius#-10*#ScaleY#)),(#Gauge2CenterX# + Sin(Rad(99))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(99))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThick | Stroke Color #TickColorOrange#
Shape3=Line (#Gauge2CenterX# + Sin(Rad(153))*(#GaugeRadius#-10*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(153))*(#GaugeRadius#-10*#ScaleY#)),(#Gauge2CenterX# + Sin(Rad(153))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(153))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThick
Shape4=Line (#Gauge2CenterX# + Sin(Rad(207))*(#GaugeRadius#-10*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(207))*(#GaugeRadius#-10*#ScaleY#)),(#Gauge2CenterX# + Sin(Rad(207))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(207))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThick
Shape5=Line (#Gauge2CenterX# + Sin(Rad(261))*(#GaugeRadius#-10*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(261))*(#GaugeRadius#-10*#ScaleY#)),(#Gauge2CenterX# + Sin(Rad(261))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(261))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThick
Shape6=Line (#Gauge2CenterX# + Sin(Rad(315))*(#GaugeRadius#-10*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(315))*(#GaugeRadius#-10*#ScaleY#)),(#Gauge2CenterX# + Sin(Rad(315))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(315))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThick
; minor ticks
Shape7=Line (#Gauge2CenterX# + Sin(Rad(54))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(54))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge2CenterX# + Sin(Rad(54))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(54))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin | Stroke Color #TickColorRed#
Shape8=Line (#Gauge2CenterX# + Sin(Rad(63))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(63))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge2CenterX# + Sin(Rad(63))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(63))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin | Stroke Color #TickColorRed#
Shape9=Line (#Gauge2CenterX# + Sin(Rad(72))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(72))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge2CenterX# + Sin(Rad(72))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(72))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin | Stroke Color #TickColorRed#
Shape10=Line (#Gauge2CenterX# + Sin(Rad(81))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(81))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge2CenterX# + Sin(Rad(81))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(81))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin | Stroke Color #TickColorRed#
Shape11=Line (#Gauge2CenterX# + Sin(Rad(90))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(90))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge2CenterX# + Sin(Rad(90))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(90))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin | Stroke Color #TickColorRed#
Shape12=Line (#Gauge2CenterX# + Sin(Rad(108))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(108))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge2CenterX# + Sin(Rad(108))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(108))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape13=Line (#Gauge2CenterX# + Sin(Rad(117))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(117))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge2CenterX# + Sin(Rad(117))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(117))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape14=Line (#Gauge2CenterX# + Sin(Rad(126))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(126))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge2CenterX# + Sin(Rad(126))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(126))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape15=Line (#Gauge2CenterX# + Sin(Rad(135))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(135))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge2CenterX# + Sin(Rad(135))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(135))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape16=Line (#Gauge2CenterX# + Sin(Rad(144))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(144))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge2CenterX# + Sin(Rad(144))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(144))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape17=Line (#Gauge2CenterX# + Sin(Rad(162))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(162))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge2CenterX# + Sin(Rad(162))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(162))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape18=Line (#Gauge2CenterX# + Sin(Rad(171))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(171))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge2CenterX# + Sin(Rad(171))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(171))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape19=Line (#Gauge2CenterX# + Sin(Rad(180))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(180))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge2CenterX# + Sin(Rad(180))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(180))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape20=Line (#Gauge2CenterX# + Sin(Rad(189))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(189))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge2CenterX# + Sin(Rad(189))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(189))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape21=Line (#Gauge2CenterX# + Sin(Rad(198))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(198))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge2CenterX# + Sin(Rad(198))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(198))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape22=Line (#Gauge2CenterX# + Sin(Rad(216))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(216))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge2CenterX# + Sin(Rad(216))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(216))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape23=Line (#Gauge2CenterX# + Sin(Rad(225))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(225))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge2CenterX# + Sin(Rad(225))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(225))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape24=Line (#Gauge2CenterX# + Sin(Rad(234))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(234))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge2CenterX# + Sin(Rad(234))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(234))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape25=Line (#Gauge2CenterX# + Sin(Rad(243))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(243))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge2CenterX# + Sin(Rad(243))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(243))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape26=Line (#Gauge2CenterX# + Sin(Rad(252))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(252))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge2CenterX# + Sin(Rad(252))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(252))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape27=Line (#Gauge2CenterX# + Sin(Rad(270))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(270))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge2CenterX# + Sin(Rad(270))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(270))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape28=Line (#Gauge2CenterX# + Sin(Rad(279))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(279))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge2CenterX# + Sin(Rad(279))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(279))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape29=Line (#Gauge2CenterX# + Sin(Rad(288))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(288))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge2CenterX# + Sin(Rad(288))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(288))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape30=Line (#Gauge2CenterX# + Sin(Rad(297))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(297))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge2CenterX# + Sin(Rad(297))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(297))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape31=Line (#Gauge2CenterX# + Sin(Rad(306))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(306))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge2CenterX# + Sin(Rad(306))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge2CenterY# + Cos(Rad(306))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
GaugeTickLineThin= StrokeWidth 2 | Stroke Color 255,255,255 | Fill Color 255,255,255 
GaugeTickLineThick= StrokeWidth 4 | Stroke Color 255,255,255 | Fill Color 255,255,255 

[MeterStringWaterTemp]
Meter=String
MeasureName=WaterTemp
MeterStyle=GaugeFontStyle
X=(#Gauge2CenterX#)
Y=(#Gauge2CenterY#+50*#ScaleY#)
FontSize=(16*#ScaleY#)
Text="%1 [\x00B0]C"

[MeterStringWaterTemp0]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle
X=(#Gauge2CenterX#-60*#ScaleX#)
Y=(#Gauge2CenterY#+70*#ScaleY#)
FontSize=(18*#ScaleY#)
Text=0

[MeterStringWaterTemp100]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle
X=(#Gauge2CenterX#+60*#ScaleX#)
Y=(#Gauge2CenterY#+70*#ScaleY#)
FontSize=(18*#ScaleY#)
Text=100

; Gauge #3

[Gauge3BorderOutsideRadius]
Meter=Roundline
UpdateDivider=-1
X=#Gauge3CenterX#
Y=#Gauge3CenterY#
StartAngle=(Rad(135))
RotationAngle=(Rad(270))
LineStart=(#GaugeRadius# - 3)
LineLength=(#GaugeRadius# + 3)
LineColor=#GaugeShadowColor#
Solid=1
AntiAlias=1

[Gauge3BorderOutsideRadius2]
Meter=Roundline
UpdateDivider=-1
X=#Gauge3CenterX#
Y=#Gauge3CenterY#
StartAngle=(Rad(135))
RotationAngle=(Rad(270))
LineStart=(#GaugeRadius# - 1)
LineLength=(#GaugeRadius# + 1)
LineColor=255,255,255
Solid=1
AntiAlias=1

[MeterIconGpu]
Meter=Image
UpdateDivider=-1
ImageName=#@#Images\#GPUImage#
W=(80*#ScaleY#)
H=(80*#ScaleY#)
X=(#Gauge3CenterX#-40*#ScaleY#)
Y=(#Gauge3CenterY#-40*#ScaleY#)

[MeterGPU0TempRadialFill]
Meter=Roundline
MeasureName=GPU0Temp
X=#Gauge3CenterX#
Y=#Gauge3CenterY#
StartAngle=(Rad(135))
RotationAngle=(Rad(270))
LineColor=#GaugeRadialFillColor#
StartAngle=(Rad(135))
RotationAngle=(Rad(270))
LineStart=(#GaugeRadius#-5)
LineLength=(#GaugeRadius#-30)
Solid=1
AntiAlias=1

[Gauge3Ticks]
Meter=Shape
UpdateDivider=-1
; major ticks
Shape=Line (#Gauge3CenterX# + Sin(Rad(45))*(#GaugeRadius#-10*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(45))*(#GaugeRadius#-10*#ScaleY#)),(#Gauge3CenterX# + Sin(Rad(45))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(45))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThick | Stroke Color #TickColorOrange#
Shape2=Line (#Gauge3CenterX# + Sin(Rad(99))*(#GaugeRadius#-10*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(99))*(#GaugeRadius#-10*#ScaleY#)),(#Gauge3CenterX# + Sin(Rad(99))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(99))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThick | Stroke Color #TickColorOrange#
Shape3=Line (#Gauge3CenterX# + Sin(Rad(153))*(#GaugeRadius#-10*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(153))*(#GaugeRadius#-10*#ScaleY#)),(#Gauge3CenterX# + Sin(Rad(153))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(153))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThick
Shape4=Line (#Gauge3CenterX# + Sin(Rad(207))*(#GaugeRadius#-10*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(207))*(#GaugeRadius#-10*#ScaleY#)),(#Gauge3CenterX# + Sin(Rad(207))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(207))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThick
Shape5=Line (#Gauge3CenterX# + Sin(Rad(261))*(#GaugeRadius#-10*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(261))*(#GaugeRadius#-10*#ScaleY#)),(#Gauge3CenterX# + Sin(Rad(261))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(261))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThick
Shape6=Line (#Gauge3CenterX# + Sin(Rad(315))*(#GaugeRadius#-10*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(315))*(#GaugeRadius#-10*#ScaleY#)),(#Gauge3CenterX# + Sin(Rad(315))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(315))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThick
; minor ticks
Shape7=Line (#Gauge3CenterX# + Sin(Rad(54))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(54))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge3CenterX# + Sin(Rad(54))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(54))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin | Stroke Color #TickColorRed#
Shape8=Line (#Gauge3CenterX# + Sin(Rad(63))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(63))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge3CenterX# + Sin(Rad(63))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(63))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin | Stroke Color #TickColorRed#
Shape9=Line (#Gauge3CenterX# + Sin(Rad(72))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(72))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge3CenterX# + Sin(Rad(72))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(72))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin | Stroke Color #TickColorRed#
Shape10=Line (#Gauge3CenterX# + Sin(Rad(81))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(81))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge3CenterX# + Sin(Rad(81))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(81))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin | Stroke Color #TickColorRed#
Shape11=Line (#Gauge3CenterX# + Sin(Rad(90))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(90))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge3CenterX# + Sin(Rad(90))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(90))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin | Stroke Color #TickColorRed#
Shape12=Line (#Gauge3CenterX# + Sin(Rad(108))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(108))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge3CenterX# + Sin(Rad(108))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(108))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape13=Line (#Gauge3CenterX# + Sin(Rad(117))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(117))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge3CenterX# + Sin(Rad(117))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(117))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape14=Line (#Gauge3CenterX# + Sin(Rad(126))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(126))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge3CenterX# + Sin(Rad(126))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(126))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape15=Line (#Gauge3CenterX# + Sin(Rad(135))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(135))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge3CenterX# + Sin(Rad(135))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(135))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape16=Line (#Gauge3CenterX# + Sin(Rad(144))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(144))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge3CenterX# + Sin(Rad(144))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(144))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape17=Line (#Gauge3CenterX# + Sin(Rad(162))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(162))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge3CenterX# + Sin(Rad(162))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(162))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape18=Line (#Gauge3CenterX# + Sin(Rad(171))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(171))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge3CenterX# + Sin(Rad(171))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(171))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape19=Line (#Gauge3CenterX# + Sin(Rad(180))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(180))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge3CenterX# + Sin(Rad(180))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(180))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape20=Line (#Gauge3CenterX# + Sin(Rad(189))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(189))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge3CenterX# + Sin(Rad(189))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(189))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape21=Line (#Gauge3CenterX# + Sin(Rad(198))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(198))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge3CenterX# + Sin(Rad(198))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(198))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape22=Line (#Gauge3CenterX# + Sin(Rad(216))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(216))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge3CenterX# + Sin(Rad(216))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(216))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape23=Line (#Gauge3CenterX# + Sin(Rad(225))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(225))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge3CenterX# + Sin(Rad(225))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(225))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape24=Line (#Gauge3CenterX# + Sin(Rad(234))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(234))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge3CenterX# + Sin(Rad(234))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(234))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape25=Line (#Gauge3CenterX# + Sin(Rad(243))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(243))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge3CenterX# + Sin(Rad(243))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(243))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape26=Line (#Gauge3CenterX# + Sin(Rad(252))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(252))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge3CenterX# + Sin(Rad(252))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(252))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape27=Line (#Gauge3CenterX# + Sin(Rad(270))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(270))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge3CenterX# + Sin(Rad(270))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(270))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape28=Line (#Gauge3CenterX# + Sin(Rad(279))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(279))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge3CenterX# + Sin(Rad(279))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(279))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape29=Line (#Gauge3CenterX# + Sin(Rad(288))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(288))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge3CenterX# + Sin(Rad(288))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(288))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape30=Line (#Gauge3CenterX# + Sin(Rad(297))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(297))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge3CenterX# + Sin(Rad(297))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(297))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape31=Line (#Gauge3CenterX# + Sin(Rad(306))*(#GaugeRadius#-20*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(306))*(#GaugeRadius#-20*#ScaleY#)),(#Gauge3CenterX# + Sin(Rad(306))*(#GaugeRadius#-30*#ScaleX#)),(#Gauge3CenterY# + Cos(Rad(306))*(#GaugeRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
GaugeTickLineThin= StrokeWidth 2 | Stroke Color 255,255,255 | Fill Color 255,255,255 
GaugeTickLineThick= StrokeWidth 4 | Stroke Color 255,255,255 | Fill Color 255,255,255 

[MeterStringGPUTemp]
Meter=String
MeasureName=GPU0Temp
MeterStyle=GaugeFontStyle
X=(#Gauge3CenterX#)
Y=(#Gauge3CenterY#+50*#ScaleY#)
FontSize=(16*#ScaleY#)
Text="%1 [\x00B0]C"

[MeterStringGPUTemp0]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle
X=(#Gauge3CenterX#-60*#ScaleX#)
Y=(#Gauge3CenterY#+70*#ScaleY#)
FontSize=(18*#ScaleY#)
Text=0

[MeterStringGPUTemp100]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle
X=(#Gauge3CenterX#+60*#ScaleX#)
Y=(#Gauge3CenterY#+70*#ScaleY#)
FontSize=(18*#ScaleY#)
Text=100
