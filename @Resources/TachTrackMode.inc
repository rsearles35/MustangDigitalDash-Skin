
; The tach will host the CPU Usage in Track Mode
; screen is 1920 x 480
; 240 side margins, 1920 - 240 = 1680
; 20 padding top
; 140 tall

[Variables]
TachStartX=240
TachStartY=20
TachEndX=1680
TachEndY=160
TachNumbersY=56

[MeterTachBorderLines]
Meter=Shape
UpdateDivider=-1
;line shadows
Shape=Line #TachStartX#,#TachStartY#,#TachEndX#,#TachStartY# | Extend GaugeOutlineShadowModifiers, StrokeRoundBoth
Shape2=Line (#TachStartX# - 80),#TachEndY#,(#TachEndX# + 80),#TachEndY# | Extend GaugeOutlineShadowModifiers, StrokeRoundBoth
;lines
Shape3=Line #TachStartX#,#TachStartY#,#TachEndX#,#TachStartY# | Extend GaugeOutlineLineModifiers, StrokeRoundBoth
Shape4=Line (#TachStartX# - 80),#TachEndY#,(#TachEndX# + 80),#TachEndY# | Extend GaugeOutlineLineModifiers, StrokeRoundBoth
; line styles
GaugeOutlineLineModifiers= StrokeWidth #GaugeLineWidth# | Stroke Color #GaugeLineColor# | Fill Color #GaugeLineFillColor# | StrokeEndCap Round
GaugeOutlineShadowModifiers= StrokeWidth #GaugeShadowLineWidth# | Stroke Color #GaugeShadowColor# | Fill Color #GaugeLineFillColor# | StrokeEndCap Round
StrokeRoundBoth=StrokeStartCap Round | StrokeEndCap Round

[MeterFPSNeedle]
Meter=BAR
MeasureName=FPS
X=#TachStartX#
Y=(#TachStartY# + 8)
W=(#TachEndX# - #TachStartX#)
H=(#TachEndY# - #TachStartY# - 16)
BarColor=255,255,255
SolidColor=0,0,0,0
BarOrientation=Horizontal

[MeasureFPSFill]
Measure=Calc
Formula=(FPS - 0.3)
MinValue=0
MaxValue=100

[MeterFPSFill]
MeasureName=MeasureFPSFill
Meter=BAR
X=#TachStartX#
Y=(#TachStartY# + 8)
W=(#TachEndX# - #TachStartX#)
H=(#TachEndY# - #TachStartY# - 16)
BarColor=#GaugeRadialFillColor#
SolidColor=0,0,0,0
BarOrientation=Horizontal

[MeterTachTicks]
Meter=Shape
UpdateDivider=-1
; linear major ticks
Shape=Line (#TachStartX#),(#TachStartY# + 8),(#TachStartX#),(#TachStartY# + 30) | Extend GaugeTickLineThick
Shape2=Line (#TachStartX#),(#TachEndY# - 8),(#TachStartX#),(#TachEndY# - 30) | Extend GaugeTickLineThick
Shape3=Line (#TachStartX# + 144),(#TachStartY# + 8),(#TachStartX# + 144),(#TachStartY# + 35) | Extend GaugeTickLineThick
Shape4=Line (#TachStartX# + 144),(#TachEndY# - 8),(#TachStartX# + 144),(#TachEndY# - 35) | Extend GaugeTickLineThick
Shape5=Line (#TachStartX# + 288),(#TachStartY# + 8),(#TachStartX# + 288),(#TachStartY# + 25) | Extend GaugeTickLineThick
Shape6=Line (#TachStartX# + 288),(#TachEndY# - 8),(#TachStartX# + 288),(#TachEndY# - 25) | Extend GaugeTickLineThick
Shape7=Line (#TachStartX# + 432),(#TachStartY# + 8),(#TachStartX# + 432),(#TachStartY# + 25) | Extend GaugeTickLineThick
Shape8=Line (#TachStartX# + 432),(#TachEndY# - 8),(#TachStartX# + 432),(#TachEndY# - 25) | Extend GaugeTickLineThick
Shape9=Line (#TachStartX# + 576),(#TachStartY# + 8),(#TachStartX# + 576),(#TachStartY# + 25) | Extend GaugeTickLineThick
Shape10=Line (#TachStartX# + 576),(#TachEndY# - 8),(#TachStartX# + 576),(#TachEndY# - 25) | Extend GaugeTickLineThick
Shape11=Line (#TachStartX# + 720),(#TachStartY# + 8),(#TachStartX# + 720),(#TachStartY# + 25) | Extend GaugeTickLineThick
Shape12=Line (#TachStartX# + 720),(#TachEndY# - 8),(#TachStartX# + 720),(#TachEndY# - 25) | Extend GaugeTickLineThick
Shape13=Line (#TachEndX# - 576),(#TachStartY# + 8),(#TachEndX# - 576),(#TachStartY# + 25) | Extend GaugeTickLineThick
Shape14=Line (#TachEndX# - 576),(#TachEndY# - 8),(#TachEndX# - 576),(#TachEndY# - 25) | Extend GaugeTickLineThick
Shape15=Line (#TachEndX# - 432),(#TachStartY# + 8),(#TachEndX# - 432),(#TachStartY# + 25) | Extend GaugeTickLineThick
Shape16=Line (#TachEndX# - 432),(#TachEndY# - 8),(#TachEndX# - 432),(#TachEndY# - 25) | Extend GaugeTickLineThick
Shape17=Line (#TachEndX# - 288),(#TachStartY# + 8),(#TachEndX# - 288),(#TachStartY# + 25) | Extend GaugeTickLineThick
Shape18=Line (#TachEndX# - 288),(#TachEndY# - 8),(#TachEndX# - 288),(#TachEndY# - 25) | Extend GaugeTickLineThick
Shape19=Line (#TachEndX# - 144),(#TachStartY# + 8),(#TachEndX# - 144),(#TachStartY# + 25) | Extend GaugeTickLineThick
Shape20=Line (#TachEndX# - 144),(#TachEndY# - 8),(#TachEndX# - 144),(#TachEndY# - 25) | Extend GaugeTickLineThick
Shape21=Line (#TachEndX#),(#TachStartY# + 8),(#TachEndX#),(#TachStartY# + 25) | Extend GaugeTickLineThick | Stroke Color #TickColorOrange#
Shape22=Line (#TachEndX#),(#TachEndY# - 8),(#TachEndX#),(#TachEndY# - 25) | Extend GaugeTickLineThick | Stroke Color #TickColorOrange#
; linear minor ticks
Shape23=Line (#TachStartX# + 72),(#TachStartY# + 8),(#TachStartX# + 72),(#TachStartY# + 20) | Extend GaugeTickLineThin
Shape24=Line (#TachStartX# + 72),(#TachEndY# - 8),(#TachStartX# + 72),(#TachEndY# - 20) | Extend GaugeTickLineThin
Shape25=Line (#TachStartX# + 216),(#TachStartY# + 8),(#TachStartX# + 216),(#TachStartY# + 20) | Extend GaugeTickLineThin
Shape26=Line (#TachStartX# + 216),(#TachEndY# - 8),(#TachStartX# + 216),(#TachEndY# - 20) | Extend GaugeTickLineThin
Shape27=Line (#TachStartX# + 360),(#TachStartY# + 8),(#TachStartX# + 360),(#TachStartY# + 20) | Extend GaugeTickLineThin
Shape28=Line (#TachStartX# + 360),(#TachEndY# - 8),(#TachStartX# + 360),(#TachEndY# - 20) | Extend GaugeTickLineThin
Shape29=Line (#TachStartX# + 504),(#TachStartY# + 8),(#TachStartX# + 504),(#TachStartY# + 20) | Extend GaugeTickLineThin
Shape30=Line (#TachStartX# + 504),(#TachEndY# - 8),(#TachStartX# + 504),(#TachEndY# - 20) | Extend GaugeTickLineThin
Shape31=Line (#TachStartX# + 648),(#TachStartY# + 8),(#TachStartX# + 648),(#TachStartY# + 20) | Extend GaugeTickLineThin
Shape32=Line (#TachStartX# + 648),(#TachEndY# - 8),(#TachStartX# + 648),(#TachEndY# - 20) | Extend GaugeTickLineThin
Shape33=Line (#TachEndX# - 648),(#TachStartY# + 8),(#TachEndX# - 648),(#TachStartY# + 20) | Extend GaugeTickLineThin
Shape34=Line (#TachEndX# - 648),(#TachEndY# - 8),(#TachEndX# - 648),(#TachEndY# - 20) | Extend GaugeTickLineThin
Shape35=Line (#TachEndX# - 504),(#TachStartY# + 8),(#TachEndX# - 504),(#TachStartY# + 20) | Extend GaugeTickLineThin
Shape36=Line (#TachEndX# - 504),(#TachEndY# - 8),(#TachEndX# - 504),(#TachEndY# - 20) | Extend GaugeTickLineThin
Shape37=Line (#TachEndX# - 360),(#TachStartY# + 8),(#TachEndX# - 360),(#TachStartY# + 20) | Extend GaugeTickLineThin
Shape38=Line (#TachEndX# - 360),(#TachEndY# - 8),(#TachEndX# - 360),(#TachEndY# - 20) | Extend GaugeTickLineThin
Shape39=Line (#TachEndX# - 216),(#TachStartY# + 8),(#TachEndX# - 216),(#TachStartY# + 20) | Extend GaugeTickLineThin
Shape40=Line (#TachEndX# - 216),(#TachEndY# - 8),(#TachEndX# - 216),(#TachEndY# - 20) | Extend GaugeTickLineThin
Shape41=Line (#TachEndX# - 72),(#TachStartY# + 8),(#TachEndX# - 72),(#TachStartY# + 20) | Extend GaugeTickLineThin | Stroke Color #TickColorOrange#
Shape42=Line (#TachEndX# - 72),(#TachEndY# - 8),(#TachEndX# - 72),(#TachEndY# - 20) | Extend GaugeTickLineThin | Stroke Color #TickColorOrange#
; redlines
Shape43=Line (#TachEndX# - 14),(#TachStartY# + 8),(#TachEndX# - 14),(#TachEndY# - 8) | Extend GaugeTickLineThin | Stroke Color #TickColorRed#
Shape44=Line (#TachEndX# - 29),(#TachStartY# + 8),(#TachEndX# - 29),(#TachEndY# - 8) | Extend GaugeTickLineThin | Stroke Color #TickColorRed#
Shape45=Line (#TachEndX# - 43),(#TachStartY# + 8),(#TachEndX# - 43),(#TachEndY# - 8) | Extend GaugeTickLineThin | Stroke Color #TickColorRed#
Shape46=Line (#TachEndX# - 58),(#TachStartY# + 8),(#TachEndX# - 58),(#TachEndY# - 8) | Extend GaugeTickLineThin | Stroke Color #TickColorRed#
Shape47=Line (#TachEndX# - 72),(#TachStartY# + 25),(#TachEndX# - 72),(#TachEndY# - 25) | Extend GaugeTickLineThin | Stroke Color #TickColorRed#
Shape48=Line (#TachEndX# - 86),(#TachStartY# + 8),(#TachEndX# - 86),(#TachEndY# - 8) | Extend GaugeTickLineThin | Stroke Color #TickColorRed#
; line styles
GaugeTickLineThin= StrokeWidth 2 | Stroke Color 255,255,255 | Fill Color 255,255,255 
GaugeTickLineThick= StrokeWidth 4 | Stroke Color 255,255,255 | Fill Color 255,255,255 

[MeterTach0]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleTachTrack
X=#TachStartX#
Y=#TachNumbersY#
Text=0

[MeterTach1]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleTachTrack
X=(#TachStartX# + 144)
Y=#TachNumbersY#
Text=1

[MeterTach2]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleTachTrack
X=(#TachStartX# + 288)
Y=#TachNumbersY#
Text=2

[MeterTach3]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleTachTrack
X=(#TachStartX# + 432)
Y=#TachNumbersY#
Text=3

[MeterTach4]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleTachTrack
X=(#TachStartX# + 576)
Y=#TachNumbersY#
Text=4

[MeterTach5]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleTachTrack
X=(#TachStartX# + 720)
Y=#TachNumbersY#
Text=5

[MeterTach6]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleTachTrack
X=(#TachEndX# - 576)
Y=#TachNumbersY#
Text=6

[MeterTach7]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleTachTrack
X=(#TachEndX# - 432)
Y=#TachNumbersY#
Text=7

[MeterTach8]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleTachTrack
X=(#TachEndX# - 288)
Y=#TachNumbersY#
Text=8

[MeterTach9]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleTachTrack
X=(#TachEndX# - 144)
Y=#TachNumbersY#
Text=9

[MeterTach10]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleTachTrack
X=(#TachEndX#)
Y=#TachNumbersY#
Text=10

[MeterStringFPS]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle
X=(#TachStartX# - 40)
Y=(#TachEndY# - 20)
FontSize=10
Text=FPS x 10