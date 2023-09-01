
; The tach will host the CPU Usage in Sport+ Mode
; screen is 1920 x 480
; Gauge height will be 440 (480 less 20 padding top & bottom
; diameter = 440, radius = 220
; Center X = 20 + 240 = 260
; Center Y = 480/2 = 240

[Variables]
TachCenterX=(260*#ScaleX#)
TachCenterY=(240*#ScaleY#)
; TachOuterRadius=220
; TachInnerRadius=100
TachOuterRadius=((#ResolutionY# / 2) - (20 * #ScaleY#))
TachInnerRadius=((#ResolutionY# / 4) - (20 * #ScaleY#))

[TachBorderOutsideRadius]
Meter=Roundline
UpdateDivider=-1
X=#TachCenterX#
Y=#TachCenterY#
StartAngle=(Rad(110))
RotationAngle=(Rad(160))
LineStart=(#TachOuterRadius# - (#GaugeShadowLineWidth# / 2))
LineLength=(#TachOuterRadius# + (#GaugeShadowLineWidth# / 2))
LineColor=#GaugeShadowColor#
Solid=1
AntiAlias=1

[TachBorderOutsideRadius2]
Meter=Roundline
UpdateDivider=-1
X=#TachCenterX#
Y=#TachCenterY#
StartAngle=(Rad(110))
RotationAngle=(Rad(160))
LineStart=(#TachOuterRadius# - (#GaugeLineWidth# / 2))
LineLength=(#TachOuterRadius# + (#GaugeLineWidth# / 2))
LineColor=#GaugeLineColor#
Solid=1
AntiAlias=1


[TachBorderInsideRadius]
Meter=Roundline
UpdateDivider=-1
X=#TachCenterX#
Y=#TachCenterY#
StartAngle=(Rad(110))
RotationAngle=(Rad(160))
LineStart=(#TachInnerRadius# - (#GaugeShadowLineWidth# / 2))
LineLength=(#TachInnerRadius# + (#GaugeShadowLineWidth# / 2))
LineColor=#GaugeShadowColor#
Solid=1
AntiAlias=1

[TachBorderInsideRadius2]
Meter=Roundline
UpdateDivider=-1
X=#TachCenterX#
Y=#TachCenterY#
StartAngle=(Rad(110))
RotationAngle=(Rad(160))
LineStart=(#TachInnerRadius# - (#GaugeLineWidth# / 2))
LineLength=(#TachInnerRadius# + (#GaugeLineWidth# / 2))
LineColor=#GaugeLineColor#
Solid=1
AntiAlias=1

[MeterTachBorderLines]
Meter=Shape
UpdateDivider=-1
;line shadows
Shape=Line #TachCenterX#,(20*#ScaleY#),(1500*#ScaleX#),(20*#ScaleY#) | Extend GaugeOutlineShadowModifiers
Shape2=Line #TachCenterX#,(140*#ScaleY#),(1400*#ScaleX#),(140*#ScaleY#) | Extend GaugeOutlineShadowModifiers
;lines
Shape3=Line #TachCenterX#,(20*#ScaleY#),(1500*#ScaleX#),(20*#ScaleY#) | Extend GaugeOutlineLineModifiers
Shape4=Line #TachCenterX#,(140*#ScaleY#),(1400*#ScaleX#),(140*#ScaleY#) | Extend GaugeOutlineLineModifiers
; line styles
GaugeOutlineLineModifiers= StrokeWidth #GaugeLineWidth# | Stroke Color #GaugeLineColor# | Fill Color #GaugeLineFillColor# | StrokeEndCap Round
GaugeOutlineShadowModifiers= StrokeWidth #GaugeShadowLineWidth# | Stroke Color #GaugeShadowColor# | Fill Color #GaugeLineFillColor# | StrokeEndCap Round

[MeterCPURadialNeedle]
Meter=ROUNDLINE
MeasureName=CPU0UsageRadial
X=#TachCenterX#
Y=#TachCenterY#
LineColor=255, 255, 255
LineWidth=(8*#ScaleY#)
AntiAlias=1
StartAngle=(Rad(110))
RotationAngle=(Rad(160))
LineStart=(#TachInnerRadius# + 10)
LineLength=(#TachOuterRadius# - 15)

[MeterCPURadialFill]
Meter=Roundline
MeasureName=CPU0UsageRadial
X=#TachCenterX#
Y=#TachCenterY#
LineColor=#GaugeRadialFillColor#
StartAngle=(Rad(110))
RotationAngle=(Rad(160))
LineStart=(#TachInnerRadius# + 10)
LineLength=(#TachOuterRadius# - 15)
Solid=1
AntiAlias=1

[MeterCPULinearNeedle]
Meter=BAR
MeasureName=CPU0UsageLinear
X=#TachCenterX#
Y=(#TachCenterY# - #TachOuterRadius# + 15)
W=1080
H=(#TachOuterRadius# - #TachInnerRadius# - 25)
BarColor=255,255,255
SolidColor=0,0,0,0
BarOrientation=Horizontal

[MeasureCPULinearFill]
Measure=Calc
Formula=(CPU0UsageLinear - 0.3)
MinValue=40
MaxValue=100

[MeterCPULinearFill]
MeasureName=MeasureCPULinearFill
Meter=BAR
X=#TachCenterX#
Y=(#TachCenterY# - #TachOuterRadius# + 15)
W=1080
H=(#TachOuterRadius# - #TachInnerRadius# - 25)
BarColor=#GaugeRadialFillColor#
SolidColor=0,0,0,0
BarOrientation=Horizontal

[MeterTachTicks]
Meter=Shape
UpdateDivider=-1
; inner radial major ticks
; Shape=Line (#SpeedoCenterX# + Sin(Rad(315))*(#SpeedoInnerRadius#+(10*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(315))*(#SpeedoInnerRadius#+(10*#ScaleY#))),(#SpeedoCenterX# + Sin(Rad(315))*(#SpeedoInnerRadius#+(30*#ScaleX#))),(#SpeedoCenterY# + Cos(Rad(315))*(#SpeedoInnerRadius#+(30*#ScaleY#))) | Extend GaugeTickLineThick
Shape=Line (#TachCenterX# + Sin(Rad(340))*(#TachInnerRadius#+(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(340))*(#TachInnerRadius#+(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(340))*(#TachInnerRadius#+(30*#ScaleX#))),(#TachCenterY# + Cos(Rad(340))*(#TachInnerRadius#+(30*#ScaleY#))) | Extend GaugeTickLineThick
Shape2=Line (#TachCenterX# + Sin(Rad(300))*(#TachInnerRadius#+(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(300))*(#TachInnerRadius#+(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(300))*(#TachInnerRadius#+(30*#ScaleX#))),(#TachCenterY# + Cos(Rad(300))*(#TachInnerRadius#+(30*#ScaleY#))) | Extend GaugeTickLineThick
Shape3=Line (#TachCenterX# + Sin(Rad(260))*(#TachInnerRadius#+(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(260))*(#TachInnerRadius#+(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(260))*(#TachInnerRadius#+(30*#ScaleX#))),(#TachCenterY# + Cos(Rad(260))*(#TachInnerRadius#+(30*#ScaleY#))) | Extend GaugeTickLineThick
Shape4=Line (#TachCenterX# + Sin(Rad(220))*(#TachInnerRadius#+(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(220))*(#TachInnerRadius#+(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(220))*(#TachInnerRadius#+(30*#ScaleX#))),(#TachCenterY# + Cos(Rad(220))*(#TachInnerRadius#+(30*#ScaleY#))) | Extend GaugeTickLineThick
Shape5=Line (#TachCenterX# + Sin(Rad(180))*(#TachInnerRadius#+(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(180))*(#TachInnerRadius#+(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(180))*(#TachInnerRadius#+(30*#ScaleX#))),(#TachCenterY# + Cos(Rad(180))*(#TachInnerRadius#+(30*#ScaleY#))) | Extend GaugeTickLineThick
; inner radial minor ticks
Shape6=Line (#TachCenterX# + Sin(Rad(320))*(#TachInnerRadius#+(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(320))*(#TachInnerRadius#+(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(320))*(#TachInnerRadius#+(20*#ScaleX#))),(#TachCenterY# + Cos(Rad(320))*(#TachInnerRadius#+(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape7=Line (#TachCenterX# + Sin(Rad(280))*(#TachInnerRadius#+(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(280))*(#TachInnerRadius#+(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(280))*(#TachInnerRadius#+(20*#ScaleX#))),(#TachCenterY# + Cos(Rad(280))*(#TachInnerRadius#+(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape8=Line (#TachCenterX# + Sin(Rad(240))*(#TachInnerRadius#+(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(240))*(#TachInnerRadius#+(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(240))*(#TachInnerRadius#+(20*#ScaleX#))),(#TachCenterY# + Cos(Rad(240))*(#TachInnerRadius#+(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape9=Line (#TachCenterX# + Sin(Rad(200))*(#TachInnerRadius#+(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(200))*(#TachInnerRadius#+(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(200))*(#TachInnerRadius#+(20*#ScaleX#))),(#TachCenterY# + Cos(Rad(200))*(#TachInnerRadius#+(20*#ScaleY#))) | Extend GaugeTickLineThin
; outer radial major ticks
Shape10=Line (#TachCenterX# + Sin(Rad(340))*(#TachOuterRadius#-(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(340))*(#TachOuterRadius#-(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(340))*(#TachOuterRadius#-(30*#ScaleX#))),(#TachCenterY# + Cos(Rad(340))*(#TachOuterRadius#-(30*#ScaleY#))) | Extend GaugeTickLineThick
Shape11=Line (#TachCenterX# + Sin(Rad(320))*(#TachOuterRadius#-(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(320))*(#TachOuterRadius#-(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(320))*(#TachOuterRadius#-(30*#ScaleX#))),(#TachCenterY# + Cos(Rad(320))*(#TachOuterRadius#-(30*#ScaleY#))) | Extend GaugeTickLineThick
Shape12=Line (#TachCenterX# + Sin(Rad(300))*(#TachOuterRadius#-(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(300))*(#TachOuterRadius#-(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(300))*(#TachOuterRadius#-(30*#ScaleX#))),(#TachCenterY# + Cos(Rad(300))*(#TachOuterRadius#-(30*#ScaleY#))) | Extend GaugeTickLineThick
Shape13=Line (#TachCenterX# + Sin(Rad(280))*(#TachOuterRadius#-(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(280))*(#TachOuterRadius#-(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(280))*(#TachOuterRadius#-(30*#ScaleX#))),(#TachCenterY# + Cos(Rad(280))*(#TachOuterRadius#-(30*#ScaleY#))) | Extend GaugeTickLineThick
Shape14=Line (#TachCenterX# + Sin(Rad(260))*(#TachOuterRadius#-(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(260))*(#TachOuterRadius#-(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(260))*(#TachOuterRadius#-(30*#ScaleX#))),(#TachCenterY# + Cos(Rad(260))*(#TachOuterRadius#-(30*#ScaleY#))) | Extend GaugeTickLineThick
Shape15=Line (#TachCenterX# + Sin(Rad(240))*(#TachOuterRadius#-(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(240))*(#TachOuterRadius#-(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(240))*(#TachOuterRadius#-(30*#ScaleX#))),(#TachCenterY# + Cos(Rad(240))*(#TachOuterRadius#-(30*#ScaleY#))) | Extend GaugeTickLineThick
Shape16=Line (#TachCenterX# + Sin(Rad(220))*(#TachOuterRadius#-(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(220))*(#TachOuterRadius#-(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(220))*(#TachOuterRadius#-(30*#ScaleX#))),(#TachCenterY# + Cos(Rad(220))*(#TachOuterRadius#-(30*#ScaleY#))) | Extend GaugeTickLineThick
Shape17=Line (#TachCenterX# + Sin(Rad(200))*(#TachOuterRadius#-(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(200))*(#TachOuterRadius#-(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(200))*(#TachOuterRadius#-(30*#ScaleX#))),(#TachCenterY# + Cos(Rad(200))*(#TachOuterRadius#-(30*#ScaleY#))) | Extend GaugeTickLineThick
Shape18=Line (#TachCenterX# + Sin(Rad(180))*(#TachOuterRadius#-(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(180))*(#TachOuterRadius#-(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(180))*(#TachOuterRadius#-(30*#ScaleX#))),(#TachCenterY# + Cos(Rad(180))*(#TachOuterRadius#-(30*#ScaleY#))) | Extend GaugeTickLineThick
; outer radial minor ticks
; 0
Shape19=Line (#TachCenterX# + Sin(Rad(336))*(#TachOuterRadius#-(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(336))*(#TachOuterRadius#-(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(336))*(#TachOuterRadius#-(20*#ScaleX#))),(#TachCenterY# + Cos(Rad(336))*(#TachOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape20=Line (#TachCenterX# + Sin(Rad(332))*(#TachOuterRadius#-(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(332))*(#TachOuterRadius#-(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(332))*(#TachOuterRadius#-(20*#ScaleX#))),(#TachCenterY# + Cos(Rad(332))*(#TachOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape21=Line (#TachCenterX# + Sin(Rad(328))*(#TachOuterRadius#-(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(328))*(#TachOuterRadius#-(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(328))*(#TachOuterRadius#-(20*#ScaleX#))),(#TachCenterY# + Cos(Rad(328))*(#TachOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape22=Line (#TachCenterX# + Sin(Rad(324))*(#TachOuterRadius#-(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(324))*(#TachOuterRadius#-(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(324))*(#TachOuterRadius#-(20*#ScaleX#))),(#TachCenterY# + Cos(Rad(324))*(#TachOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
; .5
Shape23=Line (#TachCenterX# + Sin(Rad(316))*(#TachOuterRadius#-(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(316))*(#TachOuterRadius#-(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(316))*(#TachOuterRadius#-(20*#ScaleX#))),(#TachCenterY# + Cos(Rad(316))*(#TachOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape24=Line (#TachCenterX# + Sin(Rad(312))*(#TachOuterRadius#-(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(312))*(#TachOuterRadius#-(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(312))*(#TachOuterRadius#-(20*#ScaleX#))),(#TachCenterY# + Cos(Rad(312))*(#TachOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape25=Line (#TachCenterX# + Sin(Rad(308))*(#TachOuterRadius#-(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(308))*(#TachOuterRadius#-(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(308))*(#TachOuterRadius#-(20*#ScaleX#))),(#TachCenterY# + Cos(Rad(308))*(#TachOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape26=Line (#TachCenterX# + Sin(Rad(304))*(#TachOuterRadius#-(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(304))*(#TachOuterRadius#-(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(304))*(#TachOuterRadius#-(20*#ScaleX#))),(#TachCenterY# + Cos(Rad(304))*(#TachOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
; 1
Shape27=Line (#TachCenterX# + Sin(Rad(296))*(#TachOuterRadius#-(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(296))*(#TachOuterRadius#-(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(296))*(#TachOuterRadius#-(20*#ScaleX#))),(#TachCenterY# + Cos(Rad(296))*(#TachOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape28=Line (#TachCenterX# + Sin(Rad(292))*(#TachOuterRadius#-(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(292))*(#TachOuterRadius#-(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(292))*(#TachOuterRadius#-(20*#ScaleX#))),(#TachCenterY# + Cos(Rad(292))*(#TachOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape29=Line (#TachCenterX# + Sin(Rad(288))*(#TachOuterRadius#-(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(288))*(#TachOuterRadius#-(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(288))*(#TachOuterRadius#-(20*#ScaleX#))),(#TachCenterY# + Cos(Rad(288))*(#TachOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape30=Line (#TachCenterX# + Sin(Rad(284))*(#TachOuterRadius#-(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(284))*(#TachOuterRadius#-(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(284))*(#TachOuterRadius#-(20*#ScaleX#))),(#TachCenterY# + Cos(Rad(284))*(#TachOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
; 1.5
Shape31=Line (#TachCenterX# + Sin(Rad(276))*(#TachOuterRadius#-(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(276))*(#TachOuterRadius#-(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(276))*(#TachOuterRadius#-(20*#ScaleX#))),(#TachCenterY# + Cos(Rad(276))*(#TachOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape32=Line (#TachCenterX# + Sin(Rad(272))*(#TachOuterRadius#-(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(272))*(#TachOuterRadius#-(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(272))*(#TachOuterRadius#-(20*#ScaleX#))),(#TachCenterY# + Cos(Rad(272))*(#TachOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape33=Line (#TachCenterX# + Sin(Rad(268))*(#TachOuterRadius#-(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(268))*(#TachOuterRadius#-(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(268))*(#TachOuterRadius#-(20*#ScaleX#))),(#TachCenterY# + Cos(Rad(268))*(#TachOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape34=Line (#TachCenterX# + Sin(Rad(264))*(#TachOuterRadius#-(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(264))*(#TachOuterRadius#-(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(264))*(#TachOuterRadius#-(20*#ScaleX#))),(#TachCenterY# + Cos(Rad(264))*(#TachOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
; 2
Shape35=Line (#TachCenterX# + Sin(Rad(256))*(#TachOuterRadius#-(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(256))*(#TachOuterRadius#-(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(256))*(#TachOuterRadius#-(20*#ScaleX#))),(#TachCenterY# + Cos(Rad(256))*(#TachOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape36=Line (#TachCenterX# + Sin(Rad(252))*(#TachOuterRadius#-(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(252))*(#TachOuterRadius#-(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(252))*(#TachOuterRadius#-(20*#ScaleX#))),(#TachCenterY# + Cos(Rad(252))*(#TachOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape37=Line (#TachCenterX# + Sin(Rad(248))*(#TachOuterRadius#-(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(248))*(#TachOuterRadius#-(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(248))*(#TachOuterRadius#-(20*#ScaleX#))),(#TachCenterY# + Cos(Rad(248))*(#TachOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape38=Line (#TachCenterX# + Sin(Rad(244))*(#TachOuterRadius#-(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(244))*(#TachOuterRadius#-(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(244))*(#TachOuterRadius#-(20*#ScaleX#))),(#TachCenterY# + Cos(Rad(244))*(#TachOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
; 2.5
Shape39=Line (#TachCenterX# + Sin(Rad(236))*(#TachOuterRadius#-(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(236))*(#TachOuterRadius#-(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(236))*(#TachOuterRadius#-(20*#ScaleX#))),(#TachCenterY# + Cos(Rad(236))*(#TachOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape40=Line (#TachCenterX# + Sin(Rad(232))*(#TachOuterRadius#-(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(232))*(#TachOuterRadius#-(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(232))*(#TachOuterRadius#-(20*#ScaleX#))),(#TachCenterY# + Cos(Rad(232))*(#TachOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape41=Line (#TachCenterX# + Sin(Rad(228))*(#TachOuterRadius#-(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(228))*(#TachOuterRadius#-(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(228))*(#TachOuterRadius#-(20*#ScaleX#))),(#TachCenterY# + Cos(Rad(228))*(#TachOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape42=Line (#TachCenterX# + Sin(Rad(224))*(#TachOuterRadius#-(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(224))*(#TachOuterRadius#-(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(224))*(#TachOuterRadius#-(20*#ScaleX#))),(#TachCenterY# + Cos(Rad(224))*(#TachOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
; 3
Shape43=Line (#TachCenterX# + Sin(Rad(216))*(#TachOuterRadius#-(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(216))*(#TachOuterRadius#-(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(216))*(#TachOuterRadius#-(20*#ScaleX#))),(#TachCenterY# + Cos(Rad(216))*(#TachOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape44=Line (#TachCenterX# + Sin(Rad(212))*(#TachOuterRadius#-(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(212))*(#TachOuterRadius#-(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(212))*(#TachOuterRadius#-(20*#ScaleX#))),(#TachCenterY# + Cos(Rad(212))*(#TachOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape45=Line (#TachCenterX# + Sin(Rad(208))*(#TachOuterRadius#-(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(208))*(#TachOuterRadius#-(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(208))*(#TachOuterRadius#-(20*#ScaleX#))),(#TachCenterY# + Cos(Rad(208))*(#TachOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape46=Line (#TachCenterX# + Sin(Rad(204))*(#TachOuterRadius#-(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(204))*(#TachOuterRadius#-(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(204))*(#TachOuterRadius#-(20*#ScaleX#))),(#TachCenterY# + Cos(Rad(204))*(#TachOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
; 3.5
Shape47=Line (#TachCenterX# + Sin(Rad(196))*(#TachOuterRadius#-(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(196))*(#TachOuterRadius#-(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(196))*(#TachOuterRadius#-(20*#ScaleX#))),(#TachCenterY# + Cos(Rad(196))*(#TachOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape48=Line (#TachCenterX# + Sin(Rad(192))*(#TachOuterRadius#-(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(192))*(#TachOuterRadius#-(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(192))*(#TachOuterRadius#-(20*#ScaleX#))),(#TachCenterY# + Cos(Rad(192))*(#TachOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape49=Line (#TachCenterX# + Sin(Rad(188))*(#TachOuterRadius#-(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(188))*(#TachOuterRadius#-(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(188))*(#TachOuterRadius#-(20*#ScaleX#))),(#TachCenterY# + Cos(Rad(188))*(#TachOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
Shape50=Line (#TachCenterX# + Sin(Rad(184))*(#TachOuterRadius#-(10*#ScaleX#))),(#TachCenterY# + Cos(Rad(184))*(#TachOuterRadius#-(10*#ScaleY#))),(#TachCenterX# + Sin(Rad(184))*(#TachOuterRadius#-(20*#ScaleX#))),(#TachCenterY# + Cos(Rad(184))*(#TachOuterRadius#-(20*#ScaleY#))) | Extend GaugeTickLineThin
; linear major ticks
Shape51=Line (#TachCenterX# + 90*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 90*#ScaleX#),(50*#ScaleY#) | Extend GaugeTickLineThick
Shape52=Line (#TachCenterX# + 180*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 180*#ScaleX#),(50*#ScaleY#) | Extend GaugeTickLineThick
Shape53=Line (#TachCenterX# + 90*#ScaleX#),(120*#ScaleY#),(#TachCenterX# + 90*#ScaleX#),(130*#ScaleY#) | Extend GaugeTickLineThin
Shape54=Line (#TachCenterX# + 180*#ScaleX#),(110*#ScaleY#),(#TachCenterX# + 180*#ScaleX#),(130*#ScaleY#) | Extend GaugeTickLineThick
Shape55=Line (#TachCenterX# + 270*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 270*#ScaleX#),(50*#ScaleY#) | Extend GaugeTickLineThick
Shape56=Line (#TachCenterX# + 360*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 360*#ScaleX#),(50*#ScaleY#) | Extend GaugeTickLineThick
Shape57=Line (#TachCenterX# + 270*#ScaleX#),(120*#ScaleY#),(#TachCenterX# + 270*#ScaleX#),(130*#ScaleY#) | Extend GaugeTickLineThin
Shape58=Line (#TachCenterX# + 360*#ScaleX#),(110*#ScaleY#),(#TachCenterX# + 360*#ScaleX#),(130*#ScaleY#) | Extend GaugeTickLineThick
Shape59=Line (#TachCenterX# + 450*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 450*#ScaleX#),(50*#ScaleY#) | Extend GaugeTickLineThick
Shape60=Line (#TachCenterX# + 540*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 540*#ScaleX#),(50*#ScaleY#) | Extend GaugeTickLineThick
Shape61=Line (#TachCenterX# + 450*#ScaleX#),(120*#ScaleY#),(#TachCenterX# + 450*#ScaleX#),(130*#ScaleY#) | Extend GaugeTickLineThin
Shape62=Line (#TachCenterX# + 540*#ScaleX#),(110*#ScaleY#),(#TachCenterX# + 540*#ScaleX#),(130*#ScaleY#) | Extend GaugeTickLineThick
Shape63=Line (#TachCenterX# + 630*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 630*#ScaleX#),(50*#ScaleY#) | Extend GaugeTickLineThick
Shape64=Line (#TachCenterX# + 720*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 720*#ScaleX#),(50*#ScaleY#) | Extend GaugeTickLineThick
Shape65=Line (#TachCenterX# + 630*#ScaleX#),(120*#ScaleY#),(#TachCenterX# + 630*#ScaleX#),(130*#ScaleY#) | Extend GaugeTickLineThin
Shape66=Line (#TachCenterX# + 720*#ScaleX#),(110*#ScaleY#),(#TachCenterX# + 720*#ScaleX#),(130*#ScaleY#) | Extend GaugeTickLineThick
Shape67=Line (#TachCenterX# + 810*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 810*#ScaleX#),(50*#ScaleY#) | Extend GaugeTickLineThick
Shape68=Line (#TachCenterX# + 900*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 900*#ScaleX#),(50*#ScaleY#) | Extend GaugeTickLineThick
Shape69=Line (#TachCenterX# + 810*#ScaleX#),(120*#ScaleY#),(#TachCenterX# + 810*#ScaleX#),(130*#ScaleY#) | Extend GaugeTickLineThin
Shape70=Line (#TachCenterX# + 900*#ScaleX#),(110*#ScaleY#),(#TachCenterX# + 900*#ScaleX#),(130*#ScaleY#) | Extend GaugeTickLineThick
Shape71=Line (#TachCenterX# + 990*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 990*#ScaleX#),(50*#ScaleY#) | Extend GaugeTickLineThick | Stroke Color #TickColorOrange#
Shape72=Line (#TachCenterX# + 1080*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 1080*#ScaleX#),(50*#ScaleY#) | Extend GaugeTickLineThick | Stroke Color #TickColorOrange#
Shape73=Line (#TachCenterX# + 990*#ScaleX#),(120*#ScaleY#),(#TachCenterX# + 990*#ScaleX#),(130*#ScaleY#) | Extend GaugeTickLineThin | Stroke Color #TickColorOrange#
Shape74=Line (#TachCenterX# + 1080*#ScaleX#),(110*#ScaleY#),(#TachCenterX# + 1080*#ScaleX#),(130*#ScaleY#) | Extend GaugeTickLineThick | Stroke Color #TickColorOrange#
; linear minor ticks
Shape75=Line (#TachCenterX# + 18*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 18*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape76=Line (#TachCenterX# + 36*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 36*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape77=Line (#TachCenterX# + 54*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 54*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape78=Line (#TachCenterX# + 72*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 72*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape79=Line (#TachCenterX# + 18*#ScaleX# + 90*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 18*#ScaleX# + 90*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape80=Line (#TachCenterX# + 36*#ScaleX# + 90*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 36*#ScaleX# + 90*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape81=Line (#TachCenterX# + 54*#ScaleX# + 90*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 144*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape82=Line (#TachCenterX# + 72*#ScaleX# + 90*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 162*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape83=Line (#TachCenterX# + 18*#ScaleX# + 180*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 18*#ScaleX# + 180*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape84=Line (#TachCenterX# + 36*#ScaleX# + 180*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 36*#ScaleX# + 180*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape85=Line (#TachCenterX# + 54*#ScaleX# + 180*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 54*#ScaleX# + 180*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape86=Line (#TachCenterX# + 72*#ScaleX# + 180*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 72*#ScaleX# + 180*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape87=Line (#TachCenterX# + 18*#ScaleX# + 270*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 18*#ScaleX# + 270*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape88=Line (#TachCenterX# + 36*#ScaleX# + 270*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 36*#ScaleX# + 270*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape89=Line (#TachCenterX# + 54*#ScaleX# + 270*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 54*#ScaleX# + 270*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape90=Line (#TachCenterX# + 72*#ScaleX# + 270*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 72*#ScaleX# + 270*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape91=Line (#TachCenterX# + 18*#ScaleX# + 360*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 18*#ScaleX# + 360*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape92=Line (#TachCenterX# + 36*#ScaleX# + 360*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 36*#ScaleX# + 360*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape93=Line (#TachCenterX# + 54*#ScaleX# + 360*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 54*#ScaleX# + 360*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape94=Line (#TachCenterX# + 72*#ScaleX# + 360*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 72*#ScaleX# + 360*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape95=Line (#TachCenterX# + 18*#ScaleX# + 450*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 18*#ScaleX# + 450*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape96=Line (#TachCenterX# + 36*#ScaleX# + 450*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 36*#ScaleX# + 450*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape97=Line (#TachCenterX# + 54*#ScaleX# + 450*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 54*#ScaleX# + 450*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape98=Line (#TachCenterX# + 72*#ScaleX# + 450*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 72*#ScaleX# + 450*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape99=Line (#TachCenterX# + 18*#ScaleX# + 540*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 18*#ScaleX# + 540*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape100=Line (#TachCenterX# + 36*#ScaleX# + 540*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 36*#ScaleX# + 540*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape101=Line (#TachCenterX# + 54*#ScaleX# + 540*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 54*#ScaleX# + 540*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape102=Line (#TachCenterX# + 72*#ScaleX# + 540*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 72*#ScaleX# + 540*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape103=Line (#TachCenterX# + 18*#ScaleX# + 630*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 18*#ScaleX# + 630*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape104=Line (#TachCenterX# + 36*#ScaleX# + 630*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 36*#ScaleX# + 630*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape105=Line (#TachCenterX# + 54*#ScaleX# + 630*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 54*#ScaleX# + 630*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape106=Line (#TachCenterX# + 72*#ScaleX# + 630*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 72*#ScaleX# + 630*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape107=Line (#TachCenterX# + 18*#ScaleX# + 720*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 18*#ScaleX# + 720*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape108=Line (#TachCenterX# + 36*#ScaleX# + 720*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 36*#ScaleX# + 720*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape109=Line (#TachCenterX# + 54*#ScaleX# + 720*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 54*#ScaleX# + 720*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape110=Line (#TachCenterX# + 72*#ScaleX# + 720*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 72*#ScaleX# + 720*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape111=Line (#TachCenterX# + 18*#ScaleX# + 810*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 18*#ScaleX# + 810*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape112=Line (#TachCenterX# + 36*#ScaleX# + 810*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 36*#ScaleX# + 810*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape113=Line (#TachCenterX# + 54*#ScaleX# + 810*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 54*#ScaleX# + 810*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape114=Line (#TachCenterX# + 72*#ScaleX# + 810*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 72*#ScaleX# + 810*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape115=Line (#TachCenterX# + 18*#ScaleX# + 900*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 18*#ScaleX# + 900*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape116=Line (#TachCenterX# + 36*#ScaleX# + 900*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 36*#ScaleX# + 900*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape117=Line (#TachCenterX# + 54*#ScaleX# + 900*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 54*#ScaleX# + 900*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape118=Line (#TachCenterX# + 72*#ScaleX# + 900*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 72*#ScaleX# + 900*#ScaleX#),(40*#ScaleY#) | Extend GaugeTickLineThin
Shape119=Line (#TachCenterX# + 18*#ScaleX# + 990*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 18*#ScaleX# + 990*#ScaleX#),(130*#ScaleY#) | Extend GaugeTickLineThin | Stroke Color #TickColorRed#
Shape120=Line (#TachCenterX# + 36*#ScaleX# + 990*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 36*#ScaleX# + 990*#ScaleX#),(130*#ScaleY#) | Extend GaugeTickLineThin | Stroke Color #TickColorRed#
Shape121=Line (#TachCenterX# + 54*#ScaleX# + 990*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 54*#ScaleX# + 990*#ScaleX#),(130*#ScaleY#) | Extend GaugeTickLineThin | Stroke Color #TickColorRed#
Shape122=Line (#TachCenterX# + 72*#ScaleX# + 990*#ScaleX#),(30*#ScaleY#),(#TachCenterX# + 72*#ScaleX# + 990*#ScaleX#),(50*#ScaleY#) | Extend GaugeTickLineThin | Stroke Color #TickColorRed#
Shape123=Line (#TachCenterX# + 72*#ScaleX# + 990*#ScaleX#),(110*#ScaleY#),(#TachCenterX# + 72*#ScaleX# + 990*#ScaleX#),(130*#ScaleY#) | Extend GaugeTickLineThin | Stroke Color #TickColorRed#
; line styles
GaugeTickLineThin= StrokeWidth 2 | Stroke Color 255,255,255 | Fill Color 255,255,255 
GaugeTickLineThick= StrokeWidth 4 | Stroke Color 255,255,255 | Fill Color 255,255,255 

[MeterTach0]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleTachSportPlus
; X=207
; Y=355
X=(#TachCenterX# + ((Sin(Rad(336))*(#TachOuterRadius#+(10*#ScaleY#))) - (Sin(Rad(336))*(#TachInnerRadius#-(10*#ScaleY#)))))
Y=(#TachCenterY# + ((Cos(Rad(328))*(#TachOuterRadius#+(10*#ScaleY#))) - (Cos(Rad(328))*(#TachInnerRadius#-(10*#ScaleY#)))))
Text=0

[MeterTach1]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleTachSportPlus
; X=123
; Y=282
X=(#TachCenterX# + ((Sin(Rad(297))*(#TachOuterRadius#+(15*#ScaleY#))) - (Sin(Rad(297))*(#TachInnerRadius#-(15*#ScaleY#)))))
Y=(#TachCenterY# + ((Cos(Rad(289))*(#TachOuterRadius#+(10*#ScaleY#))) - (Cos(Rad(289))*(#TachInnerRadius#-(10*#ScaleY#)))))
Text=1

[MeterTach2]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleTachSportPlus
; X=105
; Y=180
X=(#TachCenterX# + ((Sin(Rad(270))*(#TachOuterRadius#+(18*#ScaleY#))) - (Sin(Rad(270))*(#TachInnerRadius#-(18*#ScaleY#)))))
Y=(#TachCenterY# + ((Cos(Rad(250))*(#TachOuterRadius#+(30*#ScaleY#))) - (Cos(Rad(250))*(#TachInnerRadius#-(30*#ScaleY#)))))
Text=2

[MeterTach3]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleTachSportPlus
; X=160
; Y=80
X=(#TachCenterX# + ((Sin(Rad(219))*(#TachOuterRadius#+(20*#ScaleY#))) - (Sin(Rad(219))*(#TachInnerRadius#-(20*#ScaleY#)))))
Y=(#TachCenterY# - (155 * #ScaleY#))
Text=3

[MeterTach4]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleTachSportPlus
X=#TachCenterX#
Y=(46*#ScaleY#)
Text=4

[MeterTach5]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleTachSportPlus
X=(#TachCenterX# + 180*#ScaleX#)
Y=(46*#ScaleY#)
Text=5

[MeterTach6]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleTachSportPlus
X=(#TachCenterX# + 360*#ScaleX#)
Y=(46*#ScaleY#)
Text=6

[MeterTach7]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleTachSportPlus
X=(#TachCenterX# + 540*#ScaleX#)
Y=(46*#ScaleY#)
Text=7

[MeterTach8]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleTachSportPlus
X=(#TachCenterX# + 720*#ScaleX#)
Y=(46*#ScaleY#)
Text=8

[MeterTach9]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleTachSportPlus
X=(#TachCenterX# + 900*#ScaleX#)
Y=(46*#ScaleY#)
Text=9

[MeterTach10]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle | GaugeFontStyleTachSportPlus
X=(#TachCenterX# + 1080*#ScaleX#)
Y=(46*#ScaleY#)
Text=10

[TachRAMRadius]
Meter=Roundline
UpdateDivider=-1
X=#TachCenterX#
Y=#TachCenterY#
StartAngle=(Rad(40))
RotationAngle=(Rad(60))
LineStart=(#TachOuterRadius# - 1)
LineLength=(#TachOuterRadius# + 1)
LineColor=255,255,255
Solid=1
AntiAlias=1

[MeterRAMRadialNeedle]
Meter=ROUNDLINE
MeasureName=RAMUsage
X=#TachCenterX#
Y=#TachCenterY#
LineColor=255, 255, 255
LineWidth=(6*#ScaleY#)
AntiAlias=1
StartAngle=(Rad(100))
RotationAngle=(Rad(-60))
LineStart=(#TachOuterRadius#)
LineLength=(#TachOuterRadius#-20*#ScaleY#)
ValueRemainder=100

[MeterRAMRadialFill]
Meter=Roundline
MeasureName=RAMUsage
X=#TachCenterX#
Y=#TachCenterY#
LineColor=#GaugeRadialFillColor2#
StartAngle=(Rad(100))
RotationAngle=(Rad(-60))
LineStart=(#TachOuterRadius#)
LineLength=(#TachOuterRadius# - 20*#ScaleY#)
Solid=1
AntiAlias=1
ValueRemainder=100

[GaugeRAMTicks]
Meter=Shape
UpdateDivider=-1
; major ticks
Shape=Line (#TachCenterX# + Sin(Rad(-10))*#TachOuterRadius#),(#TachCenterY# + Cos(Rad(-10))*#TachOuterRadius#),(#TachCenterX# + Sin(Rad(-10))*(#TachOuterRadius#-25*#ScaleX#)),(#TachCenterY# + Cos(Rad(-10))*(#TachOuterRadius#-25*#ScaleY#)) | Extend GaugeTickLineThick
Shape2=Line (#TachCenterX# + Sin(Rad(20))*(#TachOuterRadius#-8*#ScaleX#)),(#TachCenterY# + Cos(Rad(20))*(#TachOuterRadius#-8*#ScaleY#)),(#TachCenterX# + Sin(Rad(20))*(#TachOuterRadius#-25*#ScaleX#)),(#TachCenterY# + Cos(Rad(20))*(#TachOuterRadius#-25*#ScaleY#)) | Extend GaugeTickLineThick
Shape3=Line (#TachCenterX# + Sin(Rad(50))*#TachOuterRadius#),(#TachCenterY# + Cos(Rad(50))*#TachOuterRadius#),(#TachCenterX# + Sin(Rad(50))*(#TachOuterRadius#-25*#ScaleX#)),(#TachCenterY# + Cos(Rad(50))*(#TachOuterRadius#-25*#ScaleY#)) | Extend GaugeTickLineThick
; minor ticks
Shape4=Line (#TachCenterX# + Sin(Rad(5))*(#TachOuterRadius#-15*#ScaleX#)),(#TachCenterY# + Cos(Rad(5))*(#TachOuterRadius#-15*#ScaleY#)),(#TachCenterX# + Sin(Rad(5))*(#TachOuterRadius#-30*#ScaleX#)),(#TachCenterY# + Cos(Rad(5))*(#TachOuterRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
Shape5=Line (#TachCenterX# + Sin(Rad(35))*(#TachOuterRadius#-15*#ScaleX#)),(#TachCenterY# + Cos(Rad(35))*(#TachOuterRadius#-15*#ScaleY#)),(#TachCenterX# + Sin(Rad(35))*(#TachOuterRadius#-30*#ScaleX#)),(#TachCenterY# + Cos(Rad(35))*(#TachOuterRadius#-30*#ScaleY#)) | Extend GaugeTickLineThin
; lines styles
GaugeTickLineThin= StrokeWidth 2 | Stroke Color 255,255,255 | Fill Color 255,255,255 
GaugeTickLineThick= StrokeWidth 4 | Stroke Color 255,255,255 | Fill Color 255,255,255

[MeterStringRAM]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle
X=(#TachCenterX# + 40*#ScaleX#)
Y=(#TachCenterY# + #TachOuterRadius# - 70*#ScaleY#)
FontSize=(18*#ScaleY#)
FontWeight=400
Text=RAM %

[MeterStringCPULabel]
Meter=String
UpdateDivider=-1
MeterStyle=GaugeFontStyle
X=#TachCenterX#
Y=(160*#ScaleY#)
FontSize=(24*#ScaleY#)
FontWeight=100
Text=CPU

[MeterStringCPUUsage]
Meter=String
MeasureName=CPU0Usage
MeterStyle=GaugeFontStyle
X=#TachCenterX#
Y=(200*#ScaleY#)
FontSize=(68*#ScaleY#)
FontWeight=400
Text="%1"
